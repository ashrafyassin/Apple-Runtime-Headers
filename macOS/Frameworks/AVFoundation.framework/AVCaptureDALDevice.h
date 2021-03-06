//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureDevice.h>

@class AVCaptureDeviceFormat, AVCaptureDeviceInputSource, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVCaptureDALDevice : AVCaptureDevice
{
    NSString *_uniqueID;
    unsigned int _connectionID;
    unsigned long long _flags;
    NSArray *_formats;
    AVCaptureDeviceFormat *_activeFormat;
    CDStruct_1b6d18a9 _activeMinFrameDuration;
    CDStruct_1b6d18a9 _activeMaxFrameDuration;
    CDStruct_1b6d18a9 _defaultActiveMinFrameDuration;
    CDStruct_1b6d18a9 _defaultActiveMaxFrameDuration;
    BOOL _suspended;
    struct os_unfair_lock_s _propertiesLock;
    struct os_unfair_lock_s _internalLock;
    NSString *_localizedName;
    NSString *_modelID;
    NSString *_manufacturer;
    BOOL _automaticallyAdjustsFeatureControls;
    NSObject<OS_dispatch_queue> *_transportPropertyObserverQueue;
    long long _transportPropertyObserverCount;
    NSObject<OS_dispatch_source> *_transportPropertyObserverTimer;
    long long _focusMode;
    long long _exposureMode;
    long long _whiteBalanceMode;
    struct CGPoint _focusPointOfInterest;
    struct CGPoint _exposurePointOfInterest;
    BOOL _transportControlsSupported;
    long long _transportControlsPlaybackMode;
    float _transportControlsSpeed;
    BOOL _adjustingFocus;
    BOOL _adjustingExposure;
    BOOL _adjustingWhiteBalance;
    unsigned long long _DALTransportType;
    NSArray *_inputSources;
    AVCaptureDeviceInputSource *_activeInputSource;
    struct OpaqueCMClock *_deviceClock;
    int _transportType;
}

+ (id)deviceWithUniqueID:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;
+ (void)_putDeviceIntoInputModeIfPossible:(unsigned int)arg1;
+ (void)_ensureDeviceList;
+ (void)_refreshDevices;
+ (id)devices;
+ (void)initialize;
- (int)transportType;
@property(nonatomic, getter=isAdjustingWhiteBalance) BOOL adjustingWhiteBalance; // @synthesize adjustingWhiteBalance=_adjustingWhiteBalance;
@property(nonatomic, getter=isAdjustingExposure) BOOL adjustingExposure; // @synthesize adjustingExposure=_adjustingExposure;
@property(nonatomic, getter=isAdjustingFocus) BOOL adjustingFocus; // @synthesize adjustingFocus=_adjustingFocus;
@property(nonatomic) float transportControlsSpeed; // @synthesize transportControlsSpeed=_transportControlsSpeed;
@property(nonatomic) long long transportControlsPlaybackMode; // @synthesize transportControlsPlaybackMode=_transportControlsPlaybackMode;
@property(nonatomic) BOOL transportControlsSupported; // @synthesize transportControlsSupported=_transportControlsSupported;
- (struct opaqueCMSampleBuffer *)copyStillImageSampleBufferWithFormat:(id)arg1 error:(id *)arg2;
- (id)availableStillImageFormats;
- (BOOL)isHighResolutionCamera;
- (BOOL)automaticallyAdjustsFeatureControls;
- (void)setAutomaticallyAdjustsFeatureControls:(BOOL)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)_startupTransportPropertyObserverTimerForPlaybackMode:(long long)arg1;
- (CDStruct_31c0ab17)_retrieveRS422DeviceValues;
- (CDStruct_31c0ab17)_retrieveAVCDeviceValues;
- (CDStruct_31c0ab17)_retrieveTransportValues;
- (BOOL)_sendAVCDeviceOpcode:(unsigned char)arg1 playbackMode:(unsigned char)arg2;
- (void)_postNotificationNamed:(id)arg1;
- (void)relinquishDeviceMaster;
- (BOOL)becomeDeviceMaster:(id *)arg1;
- (void)_handleDeviceIsAliveNotification:(id)arg1;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id *)arg1;
- (BOOL)isSuspended;
- (BOOL)isConnected;
- (BOOL)isInUseByAnotherApplication;
- (void)_refreshInputSourcesAndKVONotify:(BOOL)arg1;
- (void)_refreshIsInUseByAnotherApplicationAndKVONotify:(BOOL)arg1;
- (void)_refreshSuspendedAttributeAndKVONotify:(BOOL)arg1;
- (void)_refreshLinkedDevicesAndKVONotify:(BOOL)arg1;
- (void)_refreshActiveFormatAndKVONotify:(BOOL)arg1;
- (CDStruct_1b6d18a9)activeVideoMaxFrameDurationForStream:(unsigned int)arg1;
- (CDStruct_1b6d18a9)activeVideoMinFrameDurationForStream:(unsigned int)arg1;
- (void)_refreshFormatsAndKVONotify:(BOOL)arg1;
- (id)deviceFormatForStream:(unsigned int)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 hasAutofocus:(BOOL)arg3;
- (id)supportedFrameRateRangesForStream:(unsigned int)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2;
- (void)_refreshStreamsAndKVONotify:(BOOL)arg1;
- (void)_refreshLocalizedNameAndKVONotify:(BOOL)arg1;
- (void)_refreshManufacturerAndKVONotify:(BOOL)arg1;
- (void)_refreshModelIDAndKVONotify:(BOOL)arg1;
- (void)_refreshTransportTypeAndKVONotify:(BOOL)arg1;
- (void)_refreshPropertiesAndKVONotify:(BOOL)arg1;
- (void)_refreshConnectionID:(unsigned int)arg1 KVONotify:(BOOL)arg2;
- (void)setActiveMaxExposureDuration:(CDStruct_1b6d18a9)arg1;
- (void)setActiveColorSpace:(long long)arg1;
- (long long)activeColorSpace;
- (void)cancelVideoZoomRamp;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (void)setVideoZoomFactor:(double)arg1;
- (BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id *)arg2;
- (void)setTorchMode:(long long)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setActiveInputSource:(id)arg1;
- (id)activeInputSource;
- (id)inputSources;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (void)setActiveVideoMaxFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)activeVideoMaxFrameDuration;
- (void)setActiveVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)activeVideoMinFrameDuration;
- (void)setActiveFormat:(id)arg1;
- (id)activeFormat;
- (id)formats;
- (id)deviceType;
- (id)manufacturer;
- (id)localizedName;
- (id)modelID;
- (id)uniqueID;
- (struct OpaqueCMClock *)deviceClock;
- (void)setConnectionID:(unsigned int)arg1;
- (unsigned int)connectionID;
- (unsigned int)connectionUnitComponentSubType;
- (unsigned int)deviceID;
- (long long)deviceSystem;
- (void)_removePropertyListeners;
- (void)_addPropertyListeners;
- (void)dealloc;
- (id)initWithUniqueID:(id)arg1 connectionID:(unsigned int)arg2;
- (void)setFocusPointOfInterest:(struct CGPoint)arg1;
- (void)setFocusMode:(long long)arg1;
- (long long)focusMode;
- (BOOL)isFocusModeSupported:(long long)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint)arg1;
- (void)setExposureMode:(long long)arg1;
- (long long)exposureMode;
- (BOOL)isExposureModeSupported:(long long)arg1;
- (void)setWhiteBalanceMode:(long long)arg1;
- (long long)whiteBalanceMode;
- (BOOL)isWhiteBalanceModeSupported:(long long)arg1;
- (void)setTransportControlsPlaybackMode:(long long)arg1 speed:(float)arg2;
- (BOOL)_retrieveTransportControlsSupported;

@end

