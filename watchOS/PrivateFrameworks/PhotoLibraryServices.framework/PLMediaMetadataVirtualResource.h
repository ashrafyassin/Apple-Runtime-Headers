//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLVirtualResource.h>

@interface PLMediaMetadataVirtualResource : PLVirtualResource
{
    unsigned int _dataLength;
}

- (long long)estimatedDataLength;
- (long long)dataLength;
- (id)initWithAsset:(id)arg1 resourceType:(unsigned int)arg2 version:(unsigned int)arg3 recipeID:(unsigned int)arg4 dataLength:(unsigned int)arg5;

@end

