//
//  ViewController.m
//  AutoWXHB
//
//  Created by hp on 16/10/9.
//  Copyright © 2016年 hp. All rights reserved.
//

#import "ViewController.h"
#import "SwitchCell.h"

#define CELL_TITLE  @"title"
#define CELL_VALUE  @"value"
#define TWEAK_PATH "/Library/MobileSubstrate/DynamicLibraries/wxTweak.dylib"
#define LOCATION_PATH @"/var/mobile/Library/Preferences/controlCf"

@interface ViewController () <UITableViewDelegate, UITableViewDataSource, SwitchDelegate>
{
    NSMutableArray *_dateArray;
}
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    _mainTableView.delegate = self;
    _mainTableView.dataSource = self;
    
    _dateArray = [[NSMutableArray alloc] init];
    NSMutableDictionary *dic = [[NSMutableDictionary alloc] initWithObjectsAndKeys:@"红包开关",CELL_TITLE, @(YES), CELL_VALUE,nil];
    [_dateArray addObject:@[dic]];
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
    SwitchCell *cell = (SwitchCell*)[tableView dequeueReusableCellWithIdentifier:@"SwitchCell"];
    if (cell == nil) {
        cell = [[[NSBundle mainBundle] loadNibNamed:@"SwitchCell" owner:self options:nil] objectAtIndex:0];
        cell.delegate = self;
    }
    
    cell.titleLabel.text = _dateArray[indexPath.section][indexPath.row][CELL_TITLE];
    cell.stateSwitch.on = ((NSNumber *)_dateArray[indexPath.section][indexPath.row][CELL_VALUE]).boolValue;
    
    return cell;
}

-(void)switchChangeWithOn:(BOOL)on withCell:(id)cell
{
    NSIndexPath *path = [_mainTableView indexPathForCell:cell];
    [(NSMutableDictionary *)(_dateArray[path.section][path.row]) setObject:@(on) forKey:CELL_VALUE];
    
    
    NSDictionary *dict = @{@"hbSwitch":@(on)};
    BOOL isSuccess = [dict writeToFile:LOCATION_PATH atomically:YES];
    if (!isSuccess) {
        NSLog(@"write error");
    }
    
    CFStringRef observedObject =
    CFSTR("com.AutoWXHB.HBSwitchChange");
    
    CFNotificationCenterRef center = CFNotificationCenterGetDarwinNotifyCenter();
    CFNotificationCenterPostNotification(center, observedObject,
                                         NULL, NULL, TRUE);
    

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
