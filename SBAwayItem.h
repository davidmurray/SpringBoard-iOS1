//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SBAwayItem : NSObject
{
    NSString *_title;
    NSString *_secondTitle;
    int _uid;
    int _type;
    NSDate *_date;
    int _count;
}

- (id)initWithTitle:(id)arg1 uid:(int)arg2 type:(int)arg3 date:(id)arg4 count:(int)arg5;
- (id)initWithTitle:(id)arg1 uid:(int)arg2 type:(int)arg3 date:(id)arg4;
- (void)dealloc;
- (id)title;
- (void)setSecondTitle:(id)arg1;
- (id)secondTitle;
- (int)uid;
- (int)type;
- (id)description;
- (id)date;
- (int)compare:(id)arg1;
- (int)count;

@end

