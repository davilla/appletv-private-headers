/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetWriterInputPixelBufferAdaptorInternal, NSDictionary, AVAssetWriterInput;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject {
	AVAssetWriterInputPixelBufferAdaptorInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAssetWriterInput *assetWriterInput;	// G=0x31773821; 
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x31773891; 
@property(readonly, assign, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x31773841; 
+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)assetWriterInput sourcePixelBufferAttributes:(id)attributes;	// 0x3177344d
+ (id)keyPathsForValuesAffectingPixelBufferPool;	// 0x31773869
- (id)init;	// 0x3177349d
- (id)initWithAssetWriterInput:(id)assetWriterInput sourcePixelBufferAttributes:(id)attributes;	// 0x317734b1
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x317738b9
// declared property getter: - (id)assetWriterInput;	// 0x31773821
- (void)dealloc;	// 0x317736ed
- (id)description;	// 0x3177379d
- (void)finalize;	// 0x31773759
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x31773891
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x31773841
@end

