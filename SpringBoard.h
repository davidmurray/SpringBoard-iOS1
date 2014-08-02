//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

@class NSTimer, SBDimmingWindow, SBUIController;

@interface SpringBoard : UIApplication
{
    SBUIController *_uiController;
    NSTimer *_menuButtonTimer;
    NSTimer *_lockButtonTimer;
    NSTimer *_idleTimer;
    NSTimer *_autoLockTimer;
    double _lastTimeIdleCausedDim;
    double _headsetButtonDownTime;
    SBDimmingWindow *_simulatedBlankingWindow;
    unsigned int _headsetButtonClickCount;
    unsigned int _disableAutoDimming:1;
    unsigned int _nextLockUpLocks:1;
    unsigned int _poweringDown:1;
    unsigned int _autoDimmed:1;
    unsigned int _autoDimmedToBlack:1;
    unsigned int _powerManagementDisabled:1;
    unsigned int _powerManagementKeySet:1;
    unsigned int _ipodIsPlaying:1;
    int _UIOrientation;
    BOOL _screenShooting;
}

- (void)_createLogFile;
- (void)_writeLogFile;
- (BOOL)handleEvent:(struct __GSEvent *)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)appleIconViewRemoved;
- (BOOL)powerManagementIsEnabled;
- (void)showLowDiskSpaceAlert;
- (void)showEDGEActivationFailureAlert:(id)arg1;
- (void)showWiFiAlert;
- (void)wifiManager:(id)arg1 scanCompleted:(id)arg2;
- (void)userDefaultsDidChange:(id)arg1;
- (void)_testPhoneAlerts;
- (void)runFieldTestScript;
- (void)significantTimeChange;
- (void)tripleFingerGestureTriggered;
- (BOOL)shouldRunFieldTestScript;
- (void)_setMenuButtonTimer:(id)arg1;
- (void)_menuButtonWasHeld;
- (void)menuButtonDown:(struct __GSEvent *)arg1;
- (void)menuButtonUp:(struct __GSEvent *)arg1;
- (void)lockButtonDown:(struct __GSEvent *)arg1;
- (void)beginPowerDownCountDown;
- (void)_powerOn;
- (void)_powerDownNow;
- (void)powerDown;
- (void)powerDownRequested:(id)arg1;
- (void)powerDownCanceled:(id)arg1;
- (void)lockButtonUp:(struct __GSEvent *)arg1;
- (void)headsetButtonDown:(struct __GSEvent *)arg1;
- (void)headsetButtonUp:(struct __GSEvent *)arg1;
- (void)_handleHeadsetButtonClick:(struct __GSEvent *)arg1;
- (void)ALSPrefsChanged:(id)arg1;
- (void)updateIconVisibility:(BOOL)arg1;
- (void)macWorldPrefsChanged:(BOOL)arg1;
- (void)clockFormatChanged;
- (void)autoLockPrefsChanged;
- (void)ringerChanged:(int)arg1;
- (void)_launchIPod;
- (void)accessoryAvailabilityChanged:(struct __GSEvent *)arg1;
- (void)accessoryKeyStateChanged:(struct __GSEvent *)arg1;
- (void)accessoryEvent:(struct __GSEvent *)arg1;
- (unsigned int)_portForEvent:(struct __GSEvent *)arg1;
- (void)quitTopApplication:(struct __GSEvent *)arg1;
- (void)applicationExited:(struct __GSEvent *)arg1;
- (void)otherApplicationWillSuspend:(struct __GSEvent *)arg1;
- (void)applicationSuspend:(struct __GSEvent *)arg1;
- (void)applicationSuspended:(struct __GSEvent *)arg1;
- (void)applicationSuspendedSettingsUpdated:(struct __GSEvent *)arg1;
- (void)handleSpringboardURL:(id)arg1;
- (void)applicationOpenURL:(id)arg1 asPanel:(BOOL)arg2;
- (void)volumeChanged:(struct __GSEvent *)arg1;
- (void)setBacklightFactor:(int)arg1;
- (void)setBacklightLevel:(float)arg1;
- (void)setProximitySensorEnabled:(int)arg1;
- (void)setupMidnightTimer;
- (void)_midnightPassed;
- (void)_adjustMidnightTimerAfterSleep;
- (void)handleOutOfLineDataResponse:(struct __GSEvent *)arg1;
- (void)dim;
- (void)turnOffBacklight;
- (void)cancelTurnOffBacklightAfterDelay;
- (void)turnOffBacklightAfterDelay;
- (void)showSimulatedScreenBlank;
- (void)hideSimulatedScreenBlank;
- (void)dimToBlack;
- (void)undim;
- (void)lockAfterCall;
- (BOOL)shouldDimToBlackInsteadOfLock;
- (void)autoLock;
- (void)didIdle;
- (double)nextIdleTimeDuration;
- (double)nextLockTimeDuration;
- (void)clearIdleTimer;
- (void)resetIdleTimerAndUndim:(BOOL)arg1;
- (void)userEventOccurred:(id)arg1;
- (void)resetIdleTimer;
- (void)resetIdleDuration:(double)arg1;
- (void)updateRejectedInputSettings;
- (void)handleOutOfLineDataRequest:(struct __GSEvent *)arg1;
- (void)lockDevice:(struct __GSEvent *)arg1;
- (void)statusBarEvent:(struct __GSEvent *)arg1;
- (void)_receivedMemoryNotification;
- (void)_killSpringBoardInResponseToCriticalWarning;
- (int)_frontMostAppOrientation;
- (void)noteUIOrientationChanged:(int)arg1 display:(id)arg2;
- (int)UIOrientation;
- (void)updateAccelerometerSettings;
- (void)updateTouchPointSettings;
- (void)frontDisplayDidChange:(id)arg1;
- (void)didDismissMiniAlert;
- (void)willDisplayMiniAlert:(int *)arg1;
- (void)willDismissMiniAlert:(int *)arg1 andShowAnother:(BOOL)arg2;
- (BOOL)canShowAlerts;
- (BOOL)isLocked;
- (int)alertOrientation;
- (void)_tearDownNow;
- (void)tearDown;

@end

