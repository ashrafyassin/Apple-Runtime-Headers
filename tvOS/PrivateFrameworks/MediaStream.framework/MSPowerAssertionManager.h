//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSPowerAssertionManager : NSObject
{
    _Bool _isAssertingPowerAssertion;
    _Bool _isBusy;
    int _busyCount;
    int _UIBusyCount;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(nonatomic) _Bool isAssertingPowerAssertion; // @synthesize isAssertingPowerAssertion=_isAssertingPowerAssertion;
@property(nonatomic) int UIBusyCount; // @synthesize UIBusyCount=_UIBusyCount;
@property(nonatomic) int busyCount; // @synthesize busyCount=_busyCount;
- (void)toggleAssertion;
- (void)_recomputePowerAssertion;
- (void)_deassertPowerAssertion;
- (void)_assertPowerAssertion;
- (void)releaseUIBusy;
- (void)retainUIBusy;
- (void)releaseBusy;
- (void)retainBusy;

@end

