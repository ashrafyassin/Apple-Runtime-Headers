//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLDepthStencilState-Protocol.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDepthStencilState, MTLDevice;

@interface CaptureMTLDepthStencilState : NSObject <MTLDepthStencilState, CaptureMTLObject>
{
    id <MTLDepthStencilState> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly) NSString *label;
@property(readonly) id <MTLDevice> device;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
@property(readonly) id <MTLDepthStencilState> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

