//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem
{
    NSString *_bodyText;
    NSString *_title;
}

- (id)initWithTitle:(id)arg1 bodyText:(id)arg2;
- (void)dealloc;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)dismiss;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;

@end

