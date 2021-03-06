//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, TUHandle;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _muted;
    _Bool _audioEnabled;
    _Bool _videoEnabled;
    _Bool _momentsAvailable;
    unsigned long _identifier;
    TUHandle *_handle;
    int _streamToken;
    int _audioPriority;
    int _videoPriority;
    NSString *_avcIdentifier;
    NSString *_activeIDSDestination;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *activeIDSDestination; // @synthesize activeIDSDestination=_activeIDSDestination;
@property(copy, nonatomic) NSString *avcIdentifier; // @synthesize avcIdentifier=_avcIdentifier;
@property(nonatomic) int videoPriority; // @synthesize videoPriority=_videoPriority;
@property(nonatomic) int audioPriority; // @synthesize audioPriority=_audioPriority;
@property(nonatomic) int streamToken; // @synthesize streamToken=_streamToken;
@property(nonatomic, getter=isMomentsAvailable) _Bool momentsAvailable; // @synthesize momentsAvailable=_momentsAvailable;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(readonly, copy, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) unsigned long identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqualToParticipant:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(unsigned long)arg1 handle:(id)arg2;

@end

