//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (SFLBookmarkAdditions)
+ (id)__sfl_bookmarkDataWithURLString:(id)arg1;
+ (id)__sfl_bookmarkDataWithURL:(id)arg1;
- (id)__sfl_resolveBookmarkWithOptions:(unsigned long long)arg1 relativeToURL:(id)arg2;
- (id)__sfl_resolveBookmark;
- (BOOL)__sfl_matchBookmark:(id)arg1 requiredMatchResult:(long long)arg2;
- (BOOL)__sfl_matchBookmark:(id)arg1 allowWeakMatch:(BOOL)arg2;
- (id)__sfl_resourcePropertiesForKeys:(id)arg1;
- (id)__sfl_resourcePropertyForKey:(id)arg1;
- (id)__sfl_urlWithoutResolving;
- (BOOL)__sfl_isDirectoryBookmark;
- (BOOL)__sfl_isFileBookmark;
@end

