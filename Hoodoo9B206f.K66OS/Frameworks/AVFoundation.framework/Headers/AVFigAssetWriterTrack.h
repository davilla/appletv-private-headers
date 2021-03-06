/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, AVMediaFileType, NSString;

@interface AVFigAssetWriterTrack : NSObject {
@private
	AVWeakReference *_weakReference;	// 4 = 0x4
	OpaqueFigAssetWriter *_figAssetWriter;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	NSString *_mediaType;	// 16 = 0x10
	AVMediaFileType *_mediaFileType;	// 20 = 0x14
	dispatch_queue_s *_aboveHighWaterLevelQueue;	// 24 = 0x18
	BOOL _aboveHighWaterLevel;	// 28 = 0x1c
	XXStruct_pwHToB _sampleBufferCoalescingInterval;	// 32 = 0x20
}
@property(readonly, assign, getter=isAboveHighWaterLevel) BOOL aboveHighWaterLevel;	// G=0x326b6f21; 
@property(readonly, assign, nonatomic) OpaqueFigAssetWriter *figAssetWriter;	// G=0x326b7565; @synthesize=_figAssetWriter
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x326b7595; @synthesize=_mediaFileType
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x326b7585; @synthesize=_mediaType
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x326b6d51; 
@property(assign, nonatomic) XXStruct_pwHToB sampleBufferCoalescingInterval;	// G=0x326b74fd; S=0x326b7531; @synthesize=_sampleBufferCoalescingInterval
@property(readonly, assign, nonatomic) int trackID;	// G=0x326b7575; @synthesize=_trackID
+ (id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 outputSettings:(id)settings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x326b654d
- (id)init;	// 0x326b663d
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 outputSettings:(id)settings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x326b6665
- (int)_attachToFigAssetWriterUsingOutputSettings:(id)figAssetWriterUsingOutputSettings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x326b7491
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)_figAssetWriter;	// 0x326b6dc5
- (void)_refreshAboveHighWaterLevel;	// 0x326b6df9
- (BOOL)addPixelBuffer:(CVBufferRef)buffer atPresentationTime:(XXStruct_pwHToB)presentationTime error:(id *)error;	// 0x326b71cd
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x326b6ff5
- (void)dealloc;	// 0x326b6b61
// declared property getter: - (OpaqueFigAssetWriter *)figAssetWriter;	// 0x326b7565
- (void)finalize;	// 0x326b6c7d
// declared property getter: - (BOOL)isAboveHighWaterLevel;	// 0x326b6f21
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x326b72e9
// declared property getter: - (id)mediaFileType;	// 0x326b7595
// declared property getter: - (id)mediaType;	// 0x326b7585
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x326b6d51
- (void)prepareToEndSession;	// 0x326b72e5
// declared property getter: - (XXStruct_pwHToB)sampleBufferCoalescingInterval;	// 0x326b74fd
- (void)setFigMetadata:(id)metadata;	// 0x326b735d
- (void)setFigTrackMatrix:(id)matrix;	// 0x326b73b9
- (void)setMediaTimeScale:(int)scale;	// 0x326b7415
// declared property setter: - (void)setSampleBufferCoalescingInterval:(XXStruct_pwHToB)interval;	// 0x326b7531
// declared property getter: - (int)trackID;	// 0x326b7575
@end

