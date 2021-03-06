/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {
	AVCaptureVideoPreviewLayerInternal *_internal;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL automaticallyAdjustsMirroring;	// G=0x346ea701; S=0x346ea545; 
@property(assign, getter=isChromaNoiseReductionEnabled) BOOL chromaNoiseReductionEnabled;	// G=0x346ea105; S=0x346e9fd9; converted property
@property(assign, nonatomic, getter=isMirrored) BOOL mirrored;	// G=0x346ea50d; S=0x346ea329; 
@property(readonly, assign, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;	// G=0x346e9721; 
@property(assign, nonatomic) int orientation;	// G=0x346e9439; S=0x346ea739; 
@property(readonly, assign, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;	// G=0x346e9435; 
@property(assign, getter=isPaused) BOOL paused;	// G=0x346ea2f1; S=0x346ea18d; converted property
@property(retain, nonatomic) AVCaptureSession *session;	// G=0x346e9569; S=0x346e95ad; 
@property(copy) NSString *videoGravity;	// G=0x346e9401; S=0x346ea981; 
+ (void)initialize;	// 0x346e93fd
+ (id)layerWithSession:(id)session;	// 0x346e992d
- (id)initWithLayer:(id)layer;	// 0x346eb3e9
- (id)initWithSession:(id)session;	// 0x346eb69d
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x346e9ac1
- (id)activeConnections;	// 0x346e9975
- (id)addConnection:(id)connection error:(id *)error;	// 0x346e983d
// declared property getter: - (BOOL)automaticallyAdjustsMirroring;	// 0x346ea701
- (BOOL)canAddConnectionForMediaType:(id)mediaType;	// 0x346e98f1
- (void)centerSublayer;	// 0x346e9461
- (id)connectionMediaTypes;	// 0x346e97e5
- (id)connections;	// 0x346e979d
- (void)dealloc;	// 0x346eb29d
- (void)didStartForSession:(id)session;	// 0x346e9c49
- (void)didStopForSession:(id)session error:(id)error;	// 0x346e9459
// converted property getter: - (BOOL)isChromaNoiseReductionEnabled;	// 0x346ea105
- (BOOL)isChromaNoiseReductionSupported;	// 0x346ea13d
// declared property getter: - (BOOL)isMirrored;	// 0x346ea50d
// declared property getter: - (BOOL)isMirroringSupported;	// 0x346e9721
// declared property getter: - (BOOL)isOrientationSupported;	// 0x346e9435
// converted property getter: - (BOOL)isPaused;	// 0x346ea2f1
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x346e9f71
- (void)layoutSublayers;	// 0x346eaf79
- (id)notReadyError;	// 0x346e945d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x346eac8d
// declared property getter: - (int)orientation;	// 0x346e9439
- (float)previewRotationDegrees;	// 0x346eb665
- (void)removeConnection:(id)connection;	// 0x346e987d
// declared property getter: - (id)session;	// 0x346e9569
// declared property setter: - (void)setAutomaticallyAdjustsMirroring:(BOOL)mirroring;	// 0x346ea545
- (void)setBounds:(CGRect)bounds;	// 0x346eb215
// converted property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x346e9fd9
- (void)setHidden:(BOOL)hidden;	// 0x346e9f45
// declared property setter: - (void)setMirrored:(BOOL)mirrored;	// 0x346ea329
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x346ea739
// converted property setter: - (void)setPaused:(BOOL)paused;	// 0x346ea18d
// declared property setter: - (void)setSession:(id)session;	// 0x346e95ad
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x346ea981
- (id)subLayer;	// 0x346e96dd
// declared property getter: - (id)videoGravity;	// 0x346e9401
@end

