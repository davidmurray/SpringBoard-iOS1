//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStatusBarContentView.h"

@class UIProgressIndicator;

@interface SBStatusBarProgressView : SBStatusBarContentView
{
    UIProgressIndicator *_progressIndicator;
    BOOL _wasLastUsingASlowConnection;
}

- (id)init;
- (void)dealloc;
- (void)dataConnectionTypeChanged;
- (void)start;
- (void)stop;
- (void)progressChanged;

@end

