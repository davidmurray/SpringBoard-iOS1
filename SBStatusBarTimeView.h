//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStatusBarContentView.h"

@class NSString, NSTimer;

@interface SBStatusBarTimeView : SBStatusBarContentView
{
    NSTimer *_dateTimer;
    NSString *_time;
    struct CGRect _textRect;
}

- (id)init;
- (void)updateClockFormat;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)drawRect:(struct CGRect)arg1;
- (void)tile;

@end

