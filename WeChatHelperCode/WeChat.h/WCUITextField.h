//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@interface WCUITextField : UITextField
{
    _Bool m_bRestrictShareMenu;
    double m_fPlaceholderFontSize;
}

@property(nonatomic) double m_fPlaceholderFontSize; // @synthesize m_fPlaceholderFontSize;
@property(nonatomic) _Bool m_bRestrictShareMenu; // @synthesize m_bRestrictShareMenu;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)init;

@end

