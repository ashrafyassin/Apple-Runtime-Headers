//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SAPerson;

@interface SADPDeviceDetail : SADomainObject <SAAceSerializable>
{
}

+ (id)deviceDetailWithDictionary:(id)arg1 context:(id)arg2;
+ (id)deviceDetail;
@property(nonatomic) _Bool thisDevice;
@property(copy, nonatomic) NSArray *productTypes;
@property(copy, nonatomic) NSString *productName;
@property(retain, nonatomic) SAPerson *owner;
@property(nonatomic) _Bool foundNearby;
@property(copy, nonatomic) NSString *emoji;
@property(copy, nonatomic) NSString *deviceName;
@property(copy, nonatomic) NSString *deviceLocality;
@property(copy, nonatomic) NSString *deviceId;
@property(copy, nonatomic) NSString *deviceClass;
@property(nonatomic) _Bool canPlaySound;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

