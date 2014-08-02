//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertDisplay.h"

@class SBDeviceLockKeypad, SBEmergencyCallView, TPLCDView, UIImageView, UIPasscodeField, UIView;

@interface SBSlidingAlertDisplay : SBAlertDisplay
{
    UIImageView *_backgroundView;
    UIView *_topBar;
    UIView *_bottomBar;
    TPLCDView *_deviceLockStatusView;
    SBDeviceLockKeypad *_deviceLockKeypad;
    UIImageView *_deviceLockEntryBackground;
    UIPasscodeField *_deviceLockEntryField;
    SBEmergencyCallView *_emergencyCallView;
    BOOL _playKeyboardClicks;
    unsigned int _animatingEmergencyCall:1;
    unsigned int _animatingIn:1;
    unsigned int _animatingOut:1;
    unsigned int _shouldFenceAnimations:1;
    unsigned int _showingDeviceLock:1;
    unsigned int _attemptingUnlock:1;
    unsigned int _showingDeviceUnlockFailure:1;
}

+ (id)createTopBarForInstance:(id)arg1;
+ (id)createBottomBarForInstance:(id)arg1;
+ (void)setDisplayPropertiesForActivationOfAlert:(id)arg1;
- (void)_setTopBarImage:(id)arg1 shadowColor:(struct CGColor *)arg2;
- (void)_resetStatusTextView;
- (void)_clearUnlockFailedIndicator;
- (void)_showUnlockFailedIndicator;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)lockBar;
- (struct CGRect)middleFrame;
- (void)getFrameForTopButton:(struct CGRect *)arg1 bottomButton:(struct CGRect *)arg2;
- (BOOL)showsDesktopImage;
- (void)updateDesktopImage:(id)arg1;
- (void)finishedAnimatingIn;
- (BOOL)shouldAnimateIconsIn;
- (BOOL)shouldAnimateIconsOut;
- (BOOL)isAnimatingOut;
- (void)_fadeOutCompleted:(id)arg1;
- (void)setMiddleContentAlpha:(float)arg1;
- (BOOL)isReadyToBeRemovedFromView;
- (float)durationForOthersActivation;
- (void)dismiss;
- (void)beginAnimatingDisplayIn:(BOOL)arg1;
- (void)performAnimateDisplayIn;
- (void)animateDisplayIn:(float)arg1 middleDelay:(float)arg2 animateStatusBar:(BOOL)arg3;
- (void)alertDisplayWillBecomeVisible;
- (void)setShouldFenceAnimations:(BOOL)arg1;
- (BOOL)isShowingDeviceLock;
- (struct CGRect)_entryFrame;
- (float)_startingKeypadXOrigin;
- (void)setShowingDeviceLock:(BOOL)arg1 duration:(float)arg2;
- (void)setShowingDeviceLock:(BOOL)arg1;
- (void)animateToShowingDeviceLock:(BOOL)arg1;
- (void)_animateToHidingOrShowingDeviceLockFinished;
- (void)_animateToShowingDeviceLockFinished;
- (void)_animateToHidingDeviceLockFinished;
- (void)deviceUnlockSucceeded;
- (void)deviceUnlockFailed;
- (void)deviceUnlockCanceled;
- (void)_enableEntry;
- (BOOL)shouldShowBlockedRedStatus;
- (void)showBlockedStatus;
- (void)removeBlockedStatus;
- (BOOL)isDisplayingErrorStatus;
- (void)_entryFinishedWithPassword:(id)arg1;
- (void)phonePad:(id)arg1 keyDown:(BOOL)arg2;
- (void)phonePad:(id)arg1 keyUp:(BOOL)arg2;
- (void)passcodeFieldDidAcceptEntry:(id)arg1;
- (void)_animateView:(id)arg1 direction:(int)arg2;
- (void)animateToEmergencyCall;
- (void)emergencyCallWasDisplayed;
- (void)animateFromEmergencyCallWithDuration:(float)arg1;
- (void)emergencyCallWasRemoved;
- (id)bottomBar;
- (id)topBar;

@end

