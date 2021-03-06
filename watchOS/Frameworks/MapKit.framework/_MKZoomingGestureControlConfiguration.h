//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKZoomingGestureControlConfiguration-Protocol.h>
#import <MapKit/NSCopying-Protocol.h>

@class NSString;

@interface _MKZoomingGestureControlConfiguration : NSObject <MKZoomingGestureControlConfiguration, NSCopying>
{
    float _decelerationThreshold;
    float _maximumZoomInVelocity;
    float _maximumZoomOutVelocity;
    double _zoomOutFrictionScale;
    double _zoomDraggingResistance;
}

+ (id)configurationForDigitalCrown;
+ (id)defaultConfiguration;
+ (id)configurationForCarPlay;
@property(readonly, nonatomic) double zoomDraggingResistance; // @synthesize zoomDraggingResistance=_zoomDraggingResistance;
@property(readonly, nonatomic) double zoomOutFrictionScale; // @synthesize zoomOutFrictionScale=_zoomOutFrictionScale;
@property(readonly, nonatomic) float maximumZoomOutVelocity; // @synthesize maximumZoomOutVelocity=_maximumZoomOutVelocity;
@property(readonly, nonatomic) float maximumZoomInVelocity; // @synthesize maximumZoomInVelocity=_maximumZoomInVelocity;
@property(readonly, nonatomic) float decelerationThreshold; // @synthesize decelerationThreshold=_decelerationThreshold;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDecelerationThreshold:(float)arg1 maximumZoomInVelocity:(float)arg2 maximumZoomOutVelocity:(float)arg3 zoomOutFrictionScale:(double)arg4 zoomDraggingResistance:(double)arg5;
- (id)initWithDecelerationThreshold:(float)arg1 maximumZoomInVelocity:(float)arg2 maximumZoomOutVelocity:(float)arg3 zoomOutFrictionScale:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

