//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PepperUICore/PUICStatusBarAppContextViewDataSourceObserver-Protocol.h>

@class NSArray, NSPointerArray, NSString, NSTimer, PUICStatusBarLayoutMetrics, UIFont, UIImage, UILabel, UITapGestureRecognizer;
@protocol PUICStatusBarAppContextViewDataSource, PUICStatusBarAppContextViewDelegate;

@interface PUICStatusBarAppContextView : UIView <PUICStatusBarAppContextViewDataSourceObserver>
{
    float _labelOffset;
    float _titleLabelOriginX;
    float _baseLine;
    float _lastBaseLine;
    float _inset;
    UIFont *_currentTitleLabelFont;
    NSString *_previousTitleString;
    NSString *_currentTitleString;
    _Bool _isTitleChangeAnimationRunning;
    UITapGestureRecognizer *_titleTapGestureRecognizer;
    id <PUICStatusBarAppContextViewDataSource> _dataSource;
    _Bool _needsDataSourceUpdate;
    _Bool _animatedDataSourceUpdate;
    unsigned int _animationsDisabledAssertionCount;
    NSPointerArray *_observers;
    NSTimer *_titleTruncationAnimationTimer;
    _Bool _isTitleTruncationAnimationRunning;
    _Bool _titleIsClipped;
    _Bool _titleChanged;
    UILabel *_animatingLabel;
    UILabel *_builtInTitleView;
    UIView *_customTitleView;
    UITapGestureRecognizer *_animatingLabelGestureRecognizer;
    _Bool _didEnterForeground;
    _Bool _suppressTruncationAnimation;
    unsigned int _truncationTimerDisabledAssertionCount;
    NSArray *_rightSideImageViews;
    UIImage *_defaultNavUIImage;
    PUICStatusBarLayoutMetrics *_layoutMetrics;
    _Bool _automaticUpdates;
    _Bool _ignoreGlobalContextFrame;
    _Bool _titleViewChargeEnabled;
    UIView *_backgroundView;
    UIView *_navigationBackButtonView;
    NSArray *_rightSideViews;
    unsigned int _titleClipMode;
    id <PUICStatusBarAppContextViewDelegate> _delegate;
    struct CGRect _overrideGlobalContextFrame;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUICStatusBarAppContextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect overrideGlobalContextFrame; // @synthesize overrideGlobalContextFrame=_overrideGlobalContextFrame;
@property(nonatomic, getter=isTitleViewChargeEnabled) _Bool titleViewChargeEnabled; // @synthesize titleViewChargeEnabled=_titleViewChargeEnabled;
@property(nonatomic) unsigned int titleClipMode; // @synthesize titleClipMode=_titleClipMode;
@property(nonatomic, getter=isIgnoringGlobalContextFrame) _Bool ignoreGlobalContextFrame; // @synthesize ignoreGlobalContextFrame=_ignoreGlobalContextFrame;
@property(nonatomic) _Bool automaticUpdates; // @synthesize automaticUpdates=_automaticUpdates;
@property(readonly, copy, nonatomic) NSArray *rightSideViews; // @synthesize rightSideViews=_rightSideViews;
@property(retain, nonatomic) UIView *navigationBackButtonView; // @synthesize navigationBackButtonView=_navigationBackButtonView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_builtInTitleView;
- (void)statusBarAppContextDataSourceDidChange:(id)arg1 animated:(_Bool)arg2;
- (void)statusBarAppContextDataSourceWillChange:(id)arg1 animated:(_Bool)arg2;
- (void)releaseDisableTitleTruncationTimerAssertion;
- (void)takeDisableTitleTruncationTimerAssertion;
- (void)releaseDisableAnimationsAssertion;
- (void)takeDisableAnimationsAssertion;
- (void)_rightSideImageTapped:(id)arg1;
- (void)_titleTapped:(id)arg1;
- (void)_navButtonPressed:(id)arg1;
- (void)_notifyObserversTitleTruncationWasReset;
- (void)_notifyObserversTitleTruncationAnimationDidComplete:(double)arg1;
- (void)_notifyObserversTitleTruncationAnimationWillComplete:(double)arg1;
- (void)_notifyObserversTitleTruncationAnimationDidBegin:(double)arg1;
- (void)_notifyObserversTitleTruncationAnimationWillBegin:(double)arg1;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isObservingAppContextView:(id)arg1;
- (void)removeAppContextViewObserver:(id)arg1;
- (void)addAppContextViewObserver:(id)arg1;
- (void)_completeTitleLabelTruncationAnimation;
- (void)_resetTitleLabelTruncationAnimation;
- (void)_startTitleLabelTruncationAnimation;
- (void)_setTitleLabelFrameForAnimationBeginning:(_Bool)arg1;
- (_Bool)_adjustTitleViewClipping:(_Bool)arg1;
- (void)_animationTimerFired:(id)arg1;
- (void)_invalidateTruncationAnimationTimer;
- (void)_restartTruncationAnimationTimer;
- (void)_updateTitleColor:(id)arg1;
- (void)_updateTitle:(id)arg1;
- (void)updateFromStatusBarItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateFromStatusBarItem:(id)arg1;
- (void)reloadData:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDataSource:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (_Bool)_processRightSideImagesChanges:(id)arg1 interactive:(id)arg2 outNewRightSideImageViews:(id *)arg3;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_layoutAppContextViews;
- (struct CGRect)_effectiveGlobalContextVisibleFrame;
- (_Bool)usingCustomTitleView;
- (void)_destroyNavBackButtonView;
- (void)_createNavBackButtonView;
- (id)_defaultNavUIImage;
- (void)_removeTitleTextGestureRecognizer;
- (void)_addTitleTextGestureRecognizer;
- (void)_removeAnimatedLabelGestureRecognizer;
- (void)_addAnimatedLabelGestureRecognizer;
- (void)_removeTapRecognizerFromView:(id)arg1 storage:(id *)arg2;
- (void)_addTapRecognizerToView:(id)arg1 storage:(id *)arg2 action:(SEL)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (float)_navBackUIRightMargin;
- (id)_hitTestPointInNavBackView:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isTitleTruncationAnimationRunning;
@property(readonly, nonatomic) _Bool isTitleClipped;
- (void)setNeedsLayout;
- (void)_willEnterForeground:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 andDelegate:(id)arg2 layoutMetrics:(id)arg3;
- (id)initWithDataSource:(id)arg1 andDelegate:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)initFromStatusBarItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

