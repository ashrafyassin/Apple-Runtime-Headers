//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBWellnessUnitType, _INPBWellnessValue;

@protocol _INPBQueryHealthSampleIntent <NSObject>
+ (Class)thresholdValuesType;
+ (Class)recordDateType;
@property(readonly, nonatomic) BOOL hasUnit;
@property(retain, nonatomic) _INPBWellnessUnitType *unit;
@property(readonly, nonatomic) unsigned long long thresholdValuesCount;
@property(copy, nonatomic) NSArray *thresholdValues;
@property(readonly, nonatomic) unsigned long long recordDatesCount;
@property(copy, nonatomic) NSArray *recordDates;
@property(nonatomic) BOOL hasQuestionType;
@property(nonatomic) int questionType;
@property(nonatomic) BOOL hasObjectType;
@property(nonatomic) int objectType;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) BOOL hasExpectedResultType;
@property(nonatomic) int expectedResultType;
- (_INPBWellnessValue *)thresholdValuesAtIndex:(unsigned long long)arg1;
- (void)addThresholdValues:(_INPBWellnessValue *)arg1;
- (void)clearThresholdValues;
- (_INPBDateTimeRange *)recordDateAtIndex:(unsigned long long)arg1;
- (void)addRecordDate:(_INPBDateTimeRange *)arg1;
- (void)clearRecordDates;
- (int)StringAsQuestionType:(NSString *)arg1;
- (NSString *)questionTypeAsString:(int)arg1;
- (int)StringAsObjectType:(NSString *)arg1;
- (NSString *)objectTypeAsString:(int)arg1;
- (int)StringAsExpectedResultType:(NSString *)arg1;
- (NSString *)expectedResultTypeAsString:(int)arg1;
@end

