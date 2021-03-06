//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DESRecordStore : NSObject
{
    NSString *_bundleId;
}

+ (void)_getServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)saveCoreDuetEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSavedRecordWithIdentfier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllSavedRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSavedRecordInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveRecordWithData:(id)arg1 recordInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldMakeRecordWithFrequency:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool shouldMakeRecord;
@property(readonly, nonatomic, getter=isPermitted) _Bool permitted;
- (id)initWithBundleIdentifier:(id)arg1;

@end

