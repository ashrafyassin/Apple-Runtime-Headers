//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncCommonClass-Protocol.h>

@class _DKSyncRapportCommonStorage;

@interface _DKSyncRapportStorage : NSObject <_DKSyncCommonClass>
{
    _DKSyncRapportCommonStorage *_commonStorage;
}

- (void).cxx_destruct;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(_Bool)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
- (id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
- (id)transformResponseError:(id)arg1;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isTransportActiveForPeer:(id)arg1;
- (id)client;
- (void)setDeviceID:(id)arg1;
- (id)myDeviceID;
- (long long)transportType;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)start;
- (id)name;
- (void)cancelOutstandingOperations;
- (void)registerRequestIDsWithClient:(id)arg1;
- (_Bool)isAvailable;
- (id)init;

@end

