//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVCKDataQuery;

@interface TVCKDataImageRequest : NSObject
{
    TVCKDataQuery *_query;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak TVCKDataQuery *query; // @synthesize query=_query;
- (id)initWithQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

