/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, AVCaptureFigAudioDevice, AVCaptureFigVideoDevice, NSMutableArray, AVCaptureVideoPreviewLayer, AVWeakReference, NSError, AVRunLoopCondition;

@interface AVCaptureSessionInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	NSString *sessionPreset;	// 8 = 0x8
	int beginConfigRefCount;	// 12 = 0xc
	NSMutableDictionary *captureOptions;	// 16 = 0x10
	NSMutableDictionary *previousFigRecorderOptions;	// 20 = 0x14
	AVCaptureFigAudioDevice *audioDevice;	// 24 = 0x18
	AVCaptureFigVideoDevice *videoDevice;	// 28 = 0x1c
	OpaqueFigRecorder *recorder;	// 32 = 0x20
	NSMutableArray *inputs;	// 36 = 0x24
	NSMutableArray *outputs;	// 40 = 0x28
	NSMutableArray *connections;	// 44 = 0x2c
	NSMutableArray *activeConnections;	// 48 = 0x30
	AVCaptureVideoPreviewLayer *videoPreviewLayer;	// 52 = 0x34
	NSError *stopError;	// 56 = 0x38
	BOOL running;	// 60 = 0x3c
	BOOL interrupted;	// 61 = 0x3d
	BOOL recording;	// 62 = 0x3e
	AVRunLoopCondition *runLoopCondition;	// 64 = 0x40
	BOOL waitingForRecorderDidStartPreviewing;	// 68 = 0x44
	BOOL waitingForRecorderDidStartRecording;	// 69 = 0x45
	BOOL waitingForRecorderDidStopSource;	// 70 = 0x46
	BOOL waitingForRecorderDidStopPreviewing;	// 71 = 0x47
	BOOL waitingForRecorderDidStopRecording;	// 72 = 0x48
}
- (id)init;	// 0x3476dd45
- (void)dealloc;	// 0x3476de55
@end

