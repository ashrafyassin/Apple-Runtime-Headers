//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCondition, _INPBPlace;

@protocol _INPBPlaceList <NSObject>
+ (Class)placeType;
@property(readonly, nonatomic) unsigned int placesCount;
@property(copy, nonatomic) NSArray *places;
@property(readonly, nonatomic) _Bool hasCondition;
@property(retain, nonatomic) _INPBCondition *condition;
- (_INPBPlace *)placeAtIndex:(unsigned int)arg1;
- (void)addPlace:(_INPBPlace *)arg1;
- (void)clearPlaces;
@end

