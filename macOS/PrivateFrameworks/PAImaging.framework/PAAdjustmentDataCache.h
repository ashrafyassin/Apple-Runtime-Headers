//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAAdjustmentDataCache : NSObject
{
}

+ (id)synchronousRenderDescriptionForAsset:(id)arg1 disposition:(long long *)arg2;
+ (id)renderDescriptionForAssetIfLoaded:(id)arg1 disposition:(long long *)arg2;
+ (void)requestRenderDescriptionForAsset:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)initialize;

@end

