//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBApplication, UIWindow;

@interface SBMiniAlertController : NSObject
{
    SBApplication *_displayShowingAnAlert;
    UIWindow *_dimmingWindow;
    unsigned int _dontAskApps:1;
    unsigned int _reserved:31;
}

+ (id)sharedInstance;
- (id)dimImageForKeyboard:(BOOL)arg1;
- (void)showDimmingWindow:(int)arg1;
- (void)finishedAnimatingDimWindowOut:(id)arg1 didFinish:(id)arg2;
- (void)hideDimmingWindow:(int)arg1;
- (void)deactivateAlertItemsWithBundleIdentifier:(id)arg1;
- (void)display:(id)arg1 willDisplayMiniAlert:(int *)arg2;
- (id)displayShowingAnAlert;
- (void)setShouldAskApps:(BOOL)arg1;
- (void)display:(id)arg1 willDismissMiniAlert:(int *)arg2 andShowAnother:(BOOL)arg3;
- (void)displayDidDisableMiniAlerts:(id)arg1;
- (void)showApplicationMiniAlertsIfNeeded;
- (void)hideApplicationMiniAlerts;
- (void)noteMiniAlertStateChanged;
- (BOOL)canShowAlerts;

@end

