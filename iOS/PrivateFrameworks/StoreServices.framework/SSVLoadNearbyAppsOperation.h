//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CLLocation, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SSVLoadNearbyAppsOperation : NSOperation
{
    NSString *_baseURLString;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CLLocation *_location;
    NSMutableDictionary *_parameters;
    CDUnknownBlockType _responseBlock;
    NSString *_storeFrontSuffix;
    NSString *_userAgent;
}

- (void).cxx_destruct;
@property(readonly) CLLocation *location; // @synthesize location=_location;
- (id)_storeFrontSuffix;
- (id)_lookupWithRequest:(id)arg1 error:(id *)arg2;
- (void)main;
@property(copy) NSString *userAgent;
@property(copy) NSString *storeFrontSuffix;
@property(copy) CDUnknownBlockType responseBlock;
@property(copy) NSString *pointOfInterestProviderURL;
@property(copy) NSString *pointOfInterestProviderIdentifier;
@property(copy) NSString *pointOfInterestIdentifier;
- (id)initWithBaseURL:(id)arg1 location:(id)arg2;

@end

