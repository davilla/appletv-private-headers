/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVVideoComposition, AVAssetImageGeneratorInternal, NSString;

@interface AVAssetImageGenerator : NSObject {
@private
	AVAssetImageGeneratorInternal *_priv;	// 4 = 0x4
}
@property(copy, nonatomic) NSString *apertureMode;	// G=0x322f7a1d; S=0x322f7dbd; 
@property(assign, nonatomic) BOOL appliesPreferredTrackTransform;	// G=0x322f79ad; S=0x322f798d; 
@property(assign, nonatomic) CGSize maximumSize;	// G=0x322f79f5; S=0x322f79cd; 
@property(assign, nonatomic) XXStruct_pwHToB requestedTimeToleranceAfter;	// G=0x322f7b15; S=0x322f7ad5; 
@property(assign, nonatomic) XXStruct_pwHToB requestedTimeToleranceBefore;	// G=0x322f7a9d; S=0x322f7a5d; 
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x322f7a3d; S=0x322f8865; 
+ (id)assetImageGeneratorWithAsset:(id)asset;	// 0x322f7e81
- (id)init;	// 0x322f7c25
- (id)initWithAsset:(id)asset;	// 0x322f98e9
- (id)_NSErrorForError:(long)error;	// 0x322f7ec9
- (CGImageRef)_copyCGImageAtTime:(XXStruct_pwHToB)time usingAssetReader:(id)reader error:(id *)error;	// 0x322f7f01
- (CFDictionaryRef)_createPixelBufferAttributesWithSize:(CGSize)size;	// 0x322f9309
- (void)_didGenerateCGImage:(id)image;	// 0x322f8471
- (void)_ensureFigAssetImageGenerator;	// 0x322f9355
- (void)_failedToGenerateCGImage:(id)generateCGImage;	// 0x322f8269
- (id)_makeAutoreleasedAssetReader;	// 0x322f9075
- (id)_optionsDictionary;	// 0x322f85f5
- (id)_requestWithRequestID:(id)requestID;	// 0x322f8151
- (CGSize)_scaledSizeForRenderSize:(CGSize)renderSize;	// 0x322f7b4d
- (void)_serverDied;	// 0x322f8201
// declared property getter: - (id)apertureMode;	// 0x322f7a1d
// declared property getter: - (BOOL)appliesPreferredTrackTransform;	// 0x322f79ad
- (void)cancelAllCGImageGeneration;	// 0x322f89ad
- (CGImageRef)copyCGImageAtTime:(XXStruct_pwHToB)time actualTime:(XXStruct_pwHToB *)time2 error:(id *)error;	// 0x322f8e8d
- (void)dealloc;	// 0x322f96ad
- (void)finalize;	// 0x322f94f5
- (void)generateCGImagesAsynchronouslyForTimes:(id)times completionHandler:(id)handler;	// 0x322f8a0d
// declared property getter: - (CGSize)maximumSize;	// 0x322f79f5
// declared property getter: - (XXStruct_pwHToB)requestedTimeToleranceAfter;	// 0x322f7b15
// declared property getter: - (XXStruct_pwHToB)requestedTimeToleranceBefore;	// 0x322f7a9d
// declared property setter: - (void)setApertureMode:(id)mode;	// 0x322f7dbd
// declared property setter: - (void)setAppliesPreferredTrackTransform:(BOOL)transform;	// 0x322f798d
// declared property setter: - (void)setMaximumSize:(CGSize)size;	// 0x322f79cd
// declared property setter: - (void)setRequestedTimeToleranceAfter:(XXStruct_pwHToB)after;	// 0x322f7ad5
// declared property setter: - (void)setRequestedTimeToleranceBefore:(XXStruct_pwHToB)before;	// 0x322f7a5d
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x322f8865
// declared property getter: - (id)videoComposition;	// 0x322f7a3d
@end
