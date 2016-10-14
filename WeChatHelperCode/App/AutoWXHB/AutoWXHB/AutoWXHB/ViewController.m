//
//  ViewController.m
//  AutoWXHB
//
//  Created by hp on 16/10/9.
//  Copyright © 2016年 hp. All rights reserved.
//

#import "ViewController.h"
#import "SwitchCell.h"
#import "SliderCell.h"

#define CELL_TITLE  @"title"
#define CELL_VALUE  @"value"
#define TWEAK_PATH "/Library/MobileSubstrate/DynamicLibraries/wxTweak.dylib"
#define LOCATION_PATH @"/var/mobile/Library/Preferences/controlCf"

@interface ViewController () <UITableViewDelegate, UITableViewDataSource, SwitchDelegate, SliderDelegate>
{
    NSMutableArray *_dateArray;
    NSMutableDictionary *_cfDic; //配置
}
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    _mainTableView.delegate = self;
    _mainTableView.dataSource = self;
    
    _dateArray = [[NSMutableArray alloc] init];
    NSMutableDictionary *dic1 = [[NSMutableDictionary alloc] initWithObjectsAndKeys:
                                 @"红包开关",CELL_TITLE,
                                 @(YES),CELL_VALUE,nil];
    NSMutableDictionary *dic2 = [[NSMutableDictionary alloc] initWithObjectsAndKeys:
                                 @"延时: 0.0 秒",CELL_TITLE,
                                 @(0.0),CELL_VALUE,nil];
    
    [_dateArray addObject:@[dic1, dic2]];
    
    _cfDic = [[NSMutableDictionary alloc] initWithObjectsAndKeys:
             dic1[CELL_VALUE],@"hbSwitch",
             dic2[CELL_VALUE],@"hbDelay",
             nil];
    [_cfDic writeToFile:LOCATION_PATH atomically:YES];
    [self postNotifiForCfChanded];
}

#pragma mark - tableView delegate & datasource
-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 44;
}

-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return _dateArray.count;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return ((NSArray *)_dateArray[section]).count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    UITableViewCell *returnCell = nil;
    
    if (indexPath.section == 0) {
        if (indexPath.row == 0) {
            SwitchCell * cell = (SwitchCell*)[tableView dequeueReusableCellWithIdentifier:@"SwitchCell"];
            if (cell == nil) {
                cell = [[[NSBundle mainBundle] loadNibNamed:@"SwitchCell" owner:self options:nil] objectAtIndex:0];
                cell.delegate = self;
            }
            
            cell.titleLabel.text = _dateArray[indexPath.section][indexPath.row][CELL_TITLE];
            cell.stateSwitch.on = ((NSNumber *)_dateArray[indexPath.section][indexPath.row][CELL_VALUE]).boolValue;
            
            returnCell = cell;
        }
        if (indexPath.row == 1) {
            SliderCell * cell = (SliderCell*)[tableView dequeueReusableCellWithIdentifier:@"SliderCell"];
            if (cell == nil) {
                cell = [[[NSBundle mainBundle] loadNibNamed:@"SliderCell" owner:self options:nil] objectAtIndex:0];
                cell.delegate = self;
            }
            
            cell.titleLabel.text = _dateArray[indexPath.section][indexPath.row][CELL_TITLE];
            cell.ctlSlider.value = ((NSNumber *)_dateArray[indexPath.section][indexPath.row][CELL_VALUE]).integerValue;
            
            returnCell = cell;
        }
    }
    
    return returnCell;
}

#pragma mark - SwitchDelegate
-(void)switchChangeWithOn:(BOOL)on withCell:(id)cell
{
    NSIndexPath *path = [_mainTableView indexPathForCell:cell];
    [(NSMutableDictionary *)(_dateArray[path.section][path.row]) setObject:@(on) forKey:CELL_VALUE];
    
    [_cfDic setObject:@(on) forKey:@"hbSwitch"];
    BOOL isSuccess = [_cfDic writeToFile:LOCATION_PATH atomically:YES];
    if (!isSuccess) {
        NSLog(@"write error");
        return;
    }
    
    [self postNotifiForCfChanded];
    
}

-(void)SliderValueChanged:(CGFloat)value withCell:(id)cell
{
    NSIndexPath *path = [_mainTableView indexPathForCell:cell];
    [(NSMutableDictionary *)(_dateArray[path.section][path.row]) setObject:@(value) forKey:CELL_VALUE];
    
    [_cfDic setObject:@(value) forKey:@"hbDelay"];
    BOOL isSuccess = [_cfDic writeToFile:LOCATION_PATH atomically:YES];
    if (!isSuccess) {
        NSLog(@"write error");
        return;
    }
    
    [self postNotifiForCfChanded];

}

-(void)postNotifiForCfChanded
{
    
    CFStringRef observedObject =
    CFSTR("com.AutoWXHB.HBConfigChange");
    
    CFNotificationCenterRef center = CFNotificationCenterGetDarwinNotifyCenter();
    CFNotificationCenterPostNotification(center, observedObject,
                                         NULL, NULL, TRUE);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
