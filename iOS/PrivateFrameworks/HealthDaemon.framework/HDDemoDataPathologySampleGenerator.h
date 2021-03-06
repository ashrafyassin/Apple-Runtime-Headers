//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSMutableDictionary;

@interface HDDemoDataPathologySampleGenerator : HDDemoDataBaseSampleGenerator
{
    _Bool _forcePEFR;
    NSMutableDictionary *_nextSpirometrySampleTimes;
    double _nextAsthmaAttackSampleTime;
    double _nextAsthmaAttackEndTime;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool forcePEFR; // @synthesize forcePEFR=_forcePEFR;
@property(nonatomic) double nextAsthmaAttackEndTime; // @synthesize nextAsthmaAttackEndTime=_nextAsthmaAttackEndTime;
@property(nonatomic) double nextAsthmaAttackSampleTime; // @synthesize nextAsthmaAttackSampleTime=_nextAsthmaAttackSampleTime;
@property(retain, nonatomic) NSMutableDictionary *nextSpirometrySampleTimes; // @synthesize nextSpirometrySampleTimes=_nextSpirometrySampleTimes;
- (_Bool)_isAsthmaAttackAllowedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computeSpirometryForDemoPerson:(id)arg1 atTime:(double)arg2 type:(long long)arg3 computeLowerLimitOfNormality:(_Bool)arg4 height:(double)arg5;
- (id)inhalerUsageForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)spirometryForDemoPerson:(id)arg1 atTime:(double)arg2 type:(long long)arg3;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (double)nextSpirometrySampleTimeFromType:(long long)arg1;
- (void)setNextSpirometrySampleTime:(double)arg1 forType:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

