//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFContentPredicate.h>

#import <ContentKit/WFContentPropertyContainer-Protocol.h>

@class NSSet, WFContentProperty;
@protocol NSCopying;

@interface WFContentComparisonPredicate : WFContentPredicate <WFContentPropertyContainer>
{
    WFContentProperty *_property;
    id <NSCopying> _value;
    CDUnknownBlockType _valueBlock;
    unsigned long long _comparisonType;
}

+ (void)initialize;
+ (void)registerValueMapping:(CDUnknownBlockType)arg1;
+ (id)predicateWithValueBlock:(CDUnknownBlockType)arg1 forProperty:(id)arg2;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long comparisonType; // @synthesize comparisonType=_comparisonType;
@property(readonly, copy, nonatomic) CDUnknownBlockType valueBlock; // @synthesize valueBlock=_valueBlock;
@property(readonly, copy, nonatomic) id <NSCopying> value; // @synthesize value=_value;
@property(readonly, nonatomic) WFContentProperty *property; // @synthesize property=_property;
@property(readonly, nonatomic) NSSet *containedProperties;
- (_Bool)evaluateWithValues:(id)arg1;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)comparableValueForValue:(id)arg1;
- (id)description;
- (id)initWithValue:(id)arg1 valueBlock:(CDUnknownBlockType)arg2 property:(id)arg3 comparisonType:(unsigned long long)arg4;

@end

