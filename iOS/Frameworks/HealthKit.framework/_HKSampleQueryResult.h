//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateInterval;

@interface _HKSampleQueryResult : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateInterval *_dateInterval;
    NSArray *_samples;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *samples; // @synthesize samples=_samples;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 samples:(id)arg3;

@end

