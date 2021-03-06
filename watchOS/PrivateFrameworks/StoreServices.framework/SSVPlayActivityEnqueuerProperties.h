//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSMutableCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSTimeZone;

@interface SSVPlayActivityEnqueuerProperties : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_buildVersion;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSNumber *_privateListeningEnabled;
    _Bool _SBEnabled;
    unsigned long long _storeAccountID;
    NSString *_storeFrontID;
    int _systemReleaseType;
    NSTimeZone *_timeZone;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *storeFrontID; // @synthesize storeFrontID=_storeFrontID;
@property(readonly, nonatomic) unsigned long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(readonly, nonatomic, getter=isSBEnabled) _Bool SBEnabled; // @synthesize SBEnabled=_SBEnabled;
@property(readonly, nonatomic) int systemReleaseType; // @synthesize systemReleaseType=_systemReleaseType;
@property(readonly, copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(readonly, copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @synthesize privateListeningEnabled=_privateListeningEnabled;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

