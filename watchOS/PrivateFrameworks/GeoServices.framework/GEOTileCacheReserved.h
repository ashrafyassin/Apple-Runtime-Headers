//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOTileCacheReserved : NSObject
{
    struct mutex _reservedLock;
    struct list<CacheItem, std::__1::allocator<CacheItem>> _reservedList;
    struct unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>>> _reservedMap;
    unsigned int _reservedMaxCapacity;
    unsigned int _reservedMaxCost;
    unsigned int _reservedCurrentCost;
    unsigned int _reservedCurrentCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end

