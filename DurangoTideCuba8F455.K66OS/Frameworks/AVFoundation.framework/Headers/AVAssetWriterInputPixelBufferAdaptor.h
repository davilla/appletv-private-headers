/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptorInternal;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject {
@private
	AVAssetWriterInputPixelBufferAdaptorInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAssetWriterInput *assetWriterInput;	// G=0x325915e9; 
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x325918e5; 
@property(readonly, assign, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x32591931; 
+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)assetWriterInput sourcePixelBufferAttributes:(id)attributes;	// 0x3259196d
+ (id)keyPathsForValuesAffectingPixelBufferPool;	// 0x32591909
- (id)init;	// 0x32591955
- (id)initWithAssetWriterInput:(id)assetWriterInput sourcePixelBufferAttributes:(id)attributes;	// 0x32592e4d
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x3259296d
// declared property getter: - (id)assetWriterInput;	// 0x325915e9
- (void)dealloc;	// 0x325935f5
- (id)description;	// 0x325930d9
- (void)finalize;	// 0x325935b5
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x325918e5
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x32591931
@end

