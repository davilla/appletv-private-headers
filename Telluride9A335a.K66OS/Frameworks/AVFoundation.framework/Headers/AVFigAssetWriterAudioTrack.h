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
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 outputSettings:(id)settings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x3231e511
- (int)_attachToFigAssetWriterUsingOutputSettings:(id)figAssetWriterUsingOutputSettings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x3231e37d
- (BOOL)_flushPendingSampleBuffersReturningError:(id *)error;	// 0x3231e1ed
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x3231df29
- (void)dealloc;	// 0x3231e4c5
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x3231de69
- (void)prepareToEndSession;	// 0x3231dee9
@end

