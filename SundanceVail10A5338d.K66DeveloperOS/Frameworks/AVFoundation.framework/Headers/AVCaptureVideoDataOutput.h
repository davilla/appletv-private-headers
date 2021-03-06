/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"
#import "AVFoundation-Structs.h"

@class NSDictionary, AVCaptureVideoDataOutputInternal, NSArray;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureVideoDataOutput : AVCaptureOutput {
	AVCaptureVideoDataOutputInternal *_internal;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL alwaysDiscardsLateVideoFrames;	// G=0x317a7071; S=0x317a7091; 
@property(readonly, assign, nonatomic) NSArray *availableVideoCVPixelFormatTypes;	// G=0x317a6445; 
@property(readonly, assign, nonatomic) NSArray *availableVideoCodecTypes;	// G=0x317a651d; 
@property(assign, nonatomic) XXStruct_pwHToB minFrameDuration;	// G=0x317a6eb1; S=0x317a6f91; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;	// G=0x317a6425; 
@property(readonly, assign, nonatomic) id<AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;	// G=0x317a6405; 
@property(copy, nonatomic) NSDictionary *videoSettings;	// G=0x317a67e5; S=0x317a687d; 
+ (void)initialize;	// 0x317a605d
+ (id)supportedVideoSettingsKeys;	// 0x317a6851
- (id)init;	// 0x317a6081
- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;	// 0x317a77c5
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x317a71ad
- (id)addConnection:(id)connection error:(id *)error;	// 0x317a7129
// declared property getter: - (BOOL)alwaysDiscardsLateVideoFrames;	// 0x317a7071
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)connection;	// 0x317a77c1
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)connection;	// 0x317a77bd
// declared property getter: - (id)availableVideoCVPixelFormatTypes;	// 0x317a6445
// declared property getter: - (id)availableVideoCodecTypes;	// 0x317a651d
- (id)connectionMediaTypes;	// 0x317a70d1
- (void)dealloc;	// 0x317a6101
- (void)didStartForSession:(id)session;	// 0x317a7675
- (void)didStopForSession:(id)session error:(id)error;	// 0x317a7629
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x317a7555
- (BOOL)isTheOnlyDataOutput;	// 0x317a614d
// declared property getter: - (XXStruct_pwHToB)minFrameDuration;	// 0x317a6eb1
- (CGSize)outputSizeForCaptureOptions:(id)captureOptions;	// 0x317a76e5
// declared property getter: - (id)sampleBufferCallbackQueue;	// 0x317a6425
// declared property getter: - (id)sampleBufferDelegate;	// 0x317a6405
// declared property setter: - (void)setAlwaysDiscardsLateVideoFrames:(BOOL)frames;	// 0x317a7091
// declared property setter: - (void)setMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x317a6f91
- (void)setSampleBufferDelegate:(id)delegate queue:(id)queue;	// 0x317a6315
- (void)setSession:(id)session;	// 0x317a62a5
// declared property setter: - (void)setVideoSettings:(id)settings;	// 0x317a687d
- (id)vettedVideoSettingsForSettingsDictionary:(id)settingsDictionary;	// 0x317a6539
// declared property getter: - (id)videoSettings;	// 0x317a67e5
@end

