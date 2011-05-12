/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSMutableArray, NSDictionary;

@interface AVCaptureStillImageOutputInternal : NSObject {
	NSMutableArray *stillImageRequests;	// 4 = 0x4
	CGSize previewImageSize;	// 8 = 0x8
	unsigned imageDataFormatType;	// 16 = 0x10
	long long imageMaxDataSize;	// 20 = 0x14
	BOOL HDRCaptureEnabled;	// 28 = 0x1c
	BOOL EV0CaptureEnabled;	// 29 = 0x1d
	BOOL chromaNoiseReductionEnabled;	// 30 = 0x1e
	BOOL suspendsVideoProcessingDuringCapture;	// 31 = 0x1f
	NSDictionary *outputSettings;	// 32 = 0x20
	BOOL isCapturingPhoto;	// 36 = 0x24
}
- (id)init;	// 0x34774791
- (void)dealloc;	// 0x34774735
@end

