//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DPBiasedCoin : NSObject
{
    double _bias;
}

+ (double)sanitizedProbability:(double)arg1;
+ (id)coinWithBias:(double)arg1;
@property(readonly, nonatomic) double bias; // @synthesize bias=_bias;
- (id)description;
- (unsigned char)generateByte;
- (BOOL)flip;
- (id)initWithBias:(double)arg1;
- (id)init;

@end

