/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVFigAssetWriterTrack.h"

@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {
@private
	NSMutableArray *_pendingAudioSampleBuffers;	// 56 = 0x38
}
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 outputSettings:(id)settings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x35460511
- (int)_attachToFigAssetWriterUsingOutputSettings:(id)figAssetWriterUsingOutputSettings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x3546037d
- (BOOL)_flushPendingSampleBuffersReturningError:(id *)error;	// 0x354601ed
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x3545ff29
- (void)dealloc;	// 0x354604c5
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x3545fe69
- (void)prepareToEndSession;	// 0x3545fee9
@end

