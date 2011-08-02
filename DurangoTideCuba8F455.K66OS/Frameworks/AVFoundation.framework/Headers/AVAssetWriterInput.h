/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSDictionary, AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVWeakReference;

@interface AVAssetWriterInput : NSObject {
@private
	AVAssetWriterInputInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_isAttachedToPixelBufferAdaptor, setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;	// G=0x32591569; S=0x32591585; 
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x32591ef1; S=0x32591ec9; 
@property(retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;	// G=0x325938e1; S=0x3259377d; 
@property(assign) int mediaTimeScale;	// G=0x32592021; S=0x32592dd5; converted property
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3259210d; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x325920b9; S=0x32592091; 
@property(readonly, assign, nonatomic) NSDictionary *outputSettings;	// G=0x325920dd; 
@property(readonly, assign, nonatomic, getter=_pixelBufferPool) CVPixelBufferPoolRef pixelBufferPool;	// G=0x32591ffd; 
@property(readonly, assign, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x32591f15; 
@property(copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;	// G=0x32591fd9; S=0x32591fb1; 
@property(readonly, assign, nonatomic, getter=_status) int status;	// G=0x325921d1; 
@property(assign) CGAffineTransform transform;	// G=0x32593ae9; S=0x32592045; converted property
@property(retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;	// G=0x3259154d; S=0x32592251; 
+ (id)assetWriterInputWithMediaType:(id)mediaType outputSettings:(id)settings;	// 0x325922f1
+ (void)initialize;	// 0x32593cc5
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;	// 0x32591f39
+ (id)keyPathsForValuesAffectingStatus;	// 0x325921f5
- (id)init;	// 0x325922d9
- (id)initWithMediaType:(id)mediaType outputSettings:(id)settings;	// 0x325931d9
- (BOOL)_appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x32591e79
// declared property getter: - (id)_helper;	// 0x325938e1
// declared property getter: - (BOOL)_isAttachedToPixelBufferAdaptor;	// 0x32591569
// declared property getter: - (CVPixelBufferPoolRef)_pixelBufferPool;	// 0x32591ffd
- (BOOL)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaFileType:(id)type error:(id *)error;	// 0x32593b15
- (BOOL)_prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x32591f89
// declared property setter: - (void)_setAttachedToPixelBufferAdaptor:(BOOL)pixelBufferAdaptor;	// 0x32591585
// declared property setter: - (void)_setHelper:(id)helper;	// 0x3259377d
// declared property setter: - (void)_setSourcePixelBufferAttributes:(id)attributes;	// 0x32591fb1
// declared property setter: - (void)_setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x32592251
// declared property getter: - (id)_sourcePixelBufferAttributes;	// 0x32591fd9
// declared property getter: - (int)_status;	// 0x325921d1
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)error;	// 0x3259221d
- (void)_transitionToTerminalStatus:(int)terminalStatus;	// 0x32591f61
// declared property getter: - (id)_weakReferenceToAssetWriter;	// 0x3259154d
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x32592c8d
- (void)dealloc;	// 0x325936b9
- (id)description;	// 0x32593159
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x32591ef1
- (void)finalize;	// 0x3259365d
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x32591f15
- (void)markAsFinished;	// 0x32591e55
// converted property getter: - (int)mediaTimeScale;	// 0x32592021
// declared property getter: - (id)mediaType;	// 0x3259210d
// declared property getter: - (id)metadata;	// 0x325920b9
// declared property getter: - (id)outputSettings;	// 0x325920dd
- (void)release;	// 0x32592761
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x32592d0d
- (id)retain;	// 0x325927b9
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x32591ec9
// converted property setter: - (void)setMediaTimeScale:(int)scale;	// 0x32592dd5
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x32592091
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x32592045
// converted property getter: - (CGAffineTransform)transform;	// 0x32593ae9
@end

