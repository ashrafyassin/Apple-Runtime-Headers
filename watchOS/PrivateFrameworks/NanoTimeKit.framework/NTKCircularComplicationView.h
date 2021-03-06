//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKit/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKit/NTKTemplateComplicationDisplay-Protocol.h>
#import <NanoTimeKit/NTKTritiumOverridableColorDisplay-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, NSDate, NSString, UIColor;
@protocol NTKComplicationDisplayObserver;

@interface NTKCircularComplicationView : UIView <NTKTemplateComplicationDisplay, NTKComplicationDisplay, NTKTritiumOverridableColorDisplay>
{
    UIView *_platter;
    UIView *_highlightView;
    NSDate *_timeTravelDate;
    float _tritium_overrideColorAmount;
    UIColor *_tritium_platterColor;
    UIColor *_tritium_foregroundColor;
    UIColor *_computedForegroundColor;
    UIColor *_computedPlatterColor;
    _Bool canUseCurvedText;
    _Bool _useRoundedFontDesign;
    _Bool _usesMediumLayout;
    _Bool _wantsPlatter;
    _Bool _usesMultiColor;
    id <NTKComplicationDisplayObserver> displayObserver;
    CLKDevice *_device;
    UIColor *_foregroundColor;
    UIColor *_platterColor;
    UIColor *_tritium_overrideForegroundColor;
    UIColor *_tritium_overridePlatterColor;
    CLKComplicationTemplate *_complicationTemplate;
}

+ (id)_stopwatchImageProviderMedium:(_Bool)arg1;
+ (id)_alarmImageProviderMedium:(_Bool)arg1;
+ (id)_timerImageProviderMedium:(_Bool)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (id)mediumViewForComplicationType:(unsigned int)arg1;
+ (id)viewForComplicationType:(unsigned int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property(retain, nonatomic) UIColor *tritium_overridePlatterColor; // @synthesize tritium_overridePlatterColor=_tritium_overridePlatterColor;
@property(retain, nonatomic) UIColor *tritium_overrideForegroundColor; // @synthesize tritium_overrideForegroundColor=_tritium_overrideForegroundColor;
@property(readonly) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(nonatomic) _Bool usesMultiColor; // @synthesize usesMultiColor=_usesMultiColor;
@property(nonatomic) _Bool wantsPlatter; // @synthesize wantsPlatter=_wantsPlatter;
@property(nonatomic) _Bool usesMediumLayout; // @synthesize usesMediumLayout=_usesMediumLayout;
@property(nonatomic) _Bool useRoundedFontDesign; // @synthesize useRoundedFontDesign=_useRoundedFontDesign;
@property(retain, nonatomic) UIColor *platterColor; // @synthesize platterColor=_platterColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool canUseCurvedText; // @synthesize canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
- (id)_fontForDynamicFontSize:(int)arg1;
- (CDStruct_4eca2615)_layoutConstants;
- (void)_updateForTemplateChange;
- (id)_mediumStackFontForText:(id)arg1;
- (int)_variableFontSizeForText:(id)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)setComplicationTemplate:(id)arg1 reason:(int)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_updateLabelViewColor:(id)arg1;
- (void)_updateImageViewColor:(id)arg1;
- (void)_updateColorChange;
- (void)_updateLabelsForFontChange;
- (void)tritium_forceUpdateColoringViews;
- (void)tritium_transitionToTritiumOffWithProgress:(float)arg1;
- (void)tritium_transitionToTritiumOnWithProgress:(float)arg1;
- (void)_updatePlatterColor;
- (void)_updateForegroundColor;
- (id)_computedPlatterColor;
- (void)_computePlatterColor;
- (id)_computedForegroundColor;
- (void)_computeForegroundColor;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

