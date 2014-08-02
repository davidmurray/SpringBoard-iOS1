//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDisplay.h"

@class NSMutableDictionary, SBAlertDisplay, SBAlertWindow;

@interface SBAlert : SBDisplay
{
    SBAlertDisplay *_display;
    NSMutableDictionary *_dictionary;
    SBAlertWindow *_deferredAlertWindow;
}

+ (void)registerForAlerts;
+ (id)alertWindow;
+ (void)test;
- (void)dealloc;
- (id)display;
- (void)setDisplay:(id)arg1;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (BOOL)displaysAboveLock;
- (BOOL)undimsDisplay;
- (float)finalAlpha;
- (double)animateInDuration;
- (struct CGRect)alertWindowRect;
- (BOOL)activate;
- (void)tearDownAlertWindow:(id)arg1;
- (void)removeFromView;
- (BOOL)deactivate;
- (BOOL)animatesDismissal;
- (BOOL)allowsInCallStatusBar;
- (float)autoDimTime;
- (int)statusBarMode;
- (int)statusBarOrientation;
- (void)didAnimateLockKeypadIn;
- (void)didAnimateLockKeypadOut;
- (void)didFinishAnimatingIn;
- (void)didFinishAnimatingOut;

@end
