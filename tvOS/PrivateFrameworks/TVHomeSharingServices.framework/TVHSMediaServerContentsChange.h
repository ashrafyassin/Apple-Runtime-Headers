//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVHomeSharingServices/NSCopying-Protocol.h>
#import <TVHomeSharingServices/NSSecureCoding-Protocol.h>

@interface TVHSMediaServerContentsChange : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _protocol;
    unsigned long long _revision;
    unsigned long long _photoLibraryState;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long photoLibraryState; // @synthesize photoLibraryState=_photoLibraryState;
@property(nonatomic) unsigned long long revision; // @synthesize revision=_revision;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithProtocol:(unsigned long long)arg1 revision:(unsigned long long)arg2 photoLibraryState:(unsigned long long)arg3;
- (id)init;

@end

