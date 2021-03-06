//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NTKClockAnalogIconView, _NTKCircleView;

@interface NTKClockIconView : UIView
{
    float _fullDiameter;
    _NTKCircleView *_circleView;
    _Bool _circleViewIsBorrowed;
    NTKClockAnalogIconView *_timeView;
    _Bool _timeViewIsBorrowed;
    _Bool _useBlankIcon;
    _Bool _paused;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) float fullDiameter; // @synthesize fullDiameter=_fullDiameter;
- (void)_configureTimeView;
- (void)_configureCircleView;
- (void)layoutSubviews;
- (void)restoreBorrowedViews;
- (id)borrowTimeView;
- (id)borrowCircleView;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

