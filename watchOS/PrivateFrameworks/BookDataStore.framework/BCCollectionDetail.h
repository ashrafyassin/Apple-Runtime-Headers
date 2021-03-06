//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BookDataStore/BCCloudData.h>

#import <BookDataStore/BCCollectionDetail-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCollectionDetail : BCCloudData <BCCollectionDetail>
{
}

+ (id)propertyIDKey;
@property(readonly, copy) NSString *debugDescription;
- (id)zoneName;
- (id)identifier;
- (id)recordType;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (void)_configureFromCollectionDetail:(id)arg1 withMergers:(id)arg2;
- (_Bool)isEqualExceptForDate:(id)arg1;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (id)mutableCopy;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(copy, nonatomic) NSString *collectionDescription; // @dynamic collectionDescription;
@property(copy, nonatomic) NSString *collectionID; // @dynamic collectionID;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned int hash;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(nonatomic) int sortMode; // @dynamic sortMode;
@property(nonatomic) int sortOrder; // @dynamic sortOrder;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end

