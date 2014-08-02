//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class NSMutableArray, NSMutableDictionary, SBAlertDisplay, UIView;

@interface SBAlertWindow : UIWindow
{
    UIView *_contentLayer;
    unsigned int _isAnimating:1;
    unsigned int _isInvalid:1;
    unsigned int _handlerActive:1;
    float _finalAlpha;
    SBAlertDisplay *_currentDisplay;
    NSMutableArray *_stackedAlertDisplays;
    NSMutableDictionary *_alertToDisplayMap;
}

+ (struct CGRect)constrainFrameToScreen:(struct CGRect)arg1;
- (id)initWithContentRect:(struct CGRect)arg1;
- (void)_backgroundFadedIn;
- (void)dealloc;
- (BOOL)isOpaque;
- (id)stackedDisplayForAlert:(id)arg1;
- (void)displayAlert:(id)arg1;
- (BOOL)deactivateAlert:(id)arg1;
- (int)displayCount;
- (void)dismissWindow:(id)arg1;
- (void)alertDisplayWillDismiss;
- (void)popInCurrentDisplay;
- (id)currentDisplay;
- (void)setHandlerAlreadyActive:(BOOL)arg1;
- (BOOL)handlerAlreadyActive;

@end

