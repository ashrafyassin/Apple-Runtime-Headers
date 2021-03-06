//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMSnapshotView;
@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderOpenAndCloseTransition : NSObject
{
    _Bool _didEnterBackground;
    id <CAMViewfinderTransitionable> __transitionableViewfinder;
    CAMSnapshotView *__snapshotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setSnapshotView:) CAMSnapshotView *_snapshotView; // @synthesize _snapshotView=__snapshotView;
@property(readonly, nonatomic) __weak id <CAMViewfinderTransitionable> _transitionableViewfinder; // @synthesize _transitionableViewfinder=__transitionableViewfinder;
@property(nonatomic) _Bool didEnterBackground; // @synthesize didEnterBackground=_didEnterBackground;
- (void)closeWithoutBlurring;
- (void)closeAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)openAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_closeViewfinder:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_existingSnapshotViewCreateIfNecessary:(_Bool)arg1 removedOnCompletion:(_Bool)arg2;
- (id)initWithTransitionableViewfinder:(id)arg1;

@end

