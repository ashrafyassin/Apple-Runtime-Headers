//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMailKitClient/NNMKNanoMailServiceXPCBasicClientInterface-Protocol.h>

@class NNMKMessage, NSString;

@protocol NNMKNanoMailServiceXPCMessageUpdatesBasedClientInterface <NNMKNanoMailServiceXPCBasicClientInterface>
- (oneway void)receiverXPCServerDidReportSendingComposedMessageStartedWithId:(NSString *)arg1 referenceMessageId:(NSString *)arg2;
- (oneway void)receiverXPCServerDidReportFailureSendingComposedMessageWithId:(NSString *)arg1 subject:(NSString *)arg2;
- (oneway void)receiverXPCServerDidDeleteMessageWithId:(NSString *)arg1;
- (oneway void)receiverXPCServerDidUpdateMessage:(NNMKMessage *)arg1;
- (oneway void)receiverXPCServerDidAddNewMessage:(NNMKMessage *)arg1;
@end

