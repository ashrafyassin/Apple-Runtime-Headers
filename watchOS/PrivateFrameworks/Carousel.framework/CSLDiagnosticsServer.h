//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/BSDescriptionProviding-Protocol.h>
#import <Carousel/CSLDiagnosticSessionDelegate-Protocol.h>

@class NSDateFormatter, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface CSLDiagnosticsServer : NSObject <CSLDiagnosticSessionDelegate, BSDescriptionProviding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_sessions;
    NSDateFormatter *_dateFormatter;
    _Bool _isMonitoring;
    _Bool _tailspinConfigEnabled;
    struct CSLTailSpinDiagnosticsRateLimitConfiguration _rateLimitConfiguration;
    NSMutableArray *_writeDates;
    NSOperationQueue *_operationQueue;
}

+ (_Bool)isTailspinAvailable;
+ (id)sharedDiagnosticsServer;
+ (void)initialize;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)diagnosticSession:(id)arg1 captureDiagnositcsWithReason:(id)arg2;
- (void)_queue_noteWriteEvent;
- (_Bool)_queue_canWriteFileWithRateLimiting:(id *)arg1;
- (void)_queue_captureDiagnosticsForSession:(id)arg1 withReason:(id)arg2;
- (void)closeSession:(id)arg1;
- (id)openSessionWithName:(id)arg1;
- (_Bool)canUseTailspin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

