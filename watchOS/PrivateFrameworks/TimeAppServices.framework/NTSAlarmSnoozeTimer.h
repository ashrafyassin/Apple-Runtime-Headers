//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, MTAlarmManager, NSMutableDictionary;

@interface NTSAlarmSnoozeTimer : NSObject
{
    _Bool _inForeground;
    MTAlarmManager *_alarmManager;
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    unsigned int _nextToken;
}

+ (id)sharedAlarmSnoozeTimer;
- (void).cxx_destruct;
@property(nonatomic) _Bool inForeground; // @synthesize inForeground=_inForeground;
@property(nonatomic) unsigned int nextToken; // @synthesize nextToken=_nextToken;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
- (void)_modelReload:(id)arg1;
- (void)_modelStateChanged:(id)arg1;
- (void)_backgrounded:(id)arg1;
- (void)_foregrounded:(id)arg1;
- (void)_invokeHandlers;
- (void)_tick:(id)arg1;
- (void)_updateTimer;
- (void)stopUpdatesForToken:(id)arg1;
- (id)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

