//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

__attribute__((visibility("hidden")))
@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
}

- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (_Bool)wantsBackgroundImageDecompression;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)init;

@end

