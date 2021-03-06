/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVCaptureStillImageRequest : NSObject <NSCopying> {
	id _sbufCompletionBlock;	// 4 = 0x4
	id _iosurfaceCompletionBlock;	// 8 = 0x8
	int _stillImageOrientation;	// 12 = 0xc
	BOOL _stillImageMirrored;	// 16 = 0x10
	CGSize _previewImageSize;	// 20 = 0x14
	unsigned long _imageDataFormatType;	// 28 = 0x1c
	BOOL _isHDRImage;	// 32 = 0x20
	BOOL _isEV0Image;	// 33 = 0x21
	BOOL _chromaNoiseReductionEnabled;	// 34 = 0x22
	BOOL _suspendsVideoProcessing;	// 35 = 0x23
	float _jpegQuality;	// 36 = 0x24
	BOOL _jpegQualitySpecified;	// 40 = 0x28
}
@property(assign) BOOL chromaNoiseReductionEnabled;	// G=0x368f4545; S=0x368f455d; @synthesize=_chromaNoiseReductionEnabled
@property(assign) unsigned long imageDataFormatType;	// G=0x368f43b9; S=0x368f43cd; @synthesize=_imageDataFormatType
@property(copy) id iosurfaceCompletionBlock;	// G=0x368f44c1; S=0x368f44d5; @synthesize=_iosurfaceCompletionBlock
@property(assign) BOOL isEV0Image;	// G=0x368f4515; S=0x368f452d; @synthesize=_isEV0Image
@property(assign) BOOL isHDRImage;	// G=0x368f44e5; S=0x368f44fd; @synthesize=_isHDRImage
@property(assign) float jpegQuality;	// G=0x368f43e5; S=0x368f43f9; @synthesize=_jpegQuality
@property(assign) BOOL jpegQualitySpecified;	// G=0x368f4411; S=0x368f4429; @synthesize=_jpegQualitySpecified
@property(assign) CGSize previewImageSize;	// G=0x368f4369; S=0x368f438d; @synthesize=_previewImageSize
@property(copy) id sbufCompletionBlock;	// G=0x368f449d; S=0x368f44b1; @synthesize=_sbufCompletionBlock
@property(assign, getter=isStillImageMirrored) BOOL stillImageMirrored;	// G=0x368f4441; S=0x368f4459; @synthesize=_stillImageMirrored
@property(assign) int stillImageOrientation;	// G=0x368f4471; S=0x368f4485; @synthesize=_stillImageOrientation
@property(assign) BOOL suspendsVideoProcessing;	// G=0x368f4575; S=0x368f458d; @synthesize=_suspendsVideoProcessing
+ (id)request;	// 0x368f40b9
// declared property getter: - (BOOL)chromaNoiseReductionEnabled;	// 0x368f4545
- (id)copyWithZone:(NSZone *)zone;	// 0x368f40fd
- (void)dealloc;	// 0x368f4311
// declared property getter: - (unsigned long)imageDataFormatType;	// 0x368f43b9
// declared property getter: - (id)iosurfaceCompletionBlock;	// 0x368f44c1
// declared property getter: - (BOOL)isEV0Image;	// 0x368f4515
// declared property getter: - (BOOL)isHDRImage;	// 0x368f44e5
// declared property getter: - (BOOL)isStillImageMirrored;	// 0x368f4441
// declared property getter: - (float)jpegQuality;	// 0x368f43e5
// declared property getter: - (BOOL)jpegQualitySpecified;	// 0x368f4411
// declared property getter: - (CGSize)previewImageSize;	// 0x368f4369
// declared property getter: - (id)sbufCompletionBlock;	// 0x368f449d
// declared property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x368f455d
// declared property setter: - (void)setImageDataFormatType:(unsigned long)type;	// 0x368f43cd
// declared property setter: - (void)setIosurfaceCompletionBlock:(id)block;	// 0x368f44d5
// declared property setter: - (void)setIsEV0Image:(BOOL)image;	// 0x368f452d
// declared property setter: - (void)setIsHDRImage:(BOOL)image;	// 0x368f44fd
// declared property setter: - (void)setJpegQuality:(float)quality;	// 0x368f43f9
// declared property setter: - (void)setJpegQualitySpecified:(BOOL)specified;	// 0x368f4429
// declared property setter: - (void)setPreviewImageSize:(CGSize)size;	// 0x368f438d
// declared property setter: - (void)setSbufCompletionBlock:(id)block;	// 0x368f44b1
// declared property setter: - (void)setStillImageMirrored:(BOOL)mirrored;	// 0x368f4459
// declared property setter: - (void)setStillImageOrientation:(int)orientation;	// 0x368f4485
// declared property setter: - (void)setSuspendsVideoProcessing:(BOOL)processing;	// 0x368f458d
// declared property getter: - (int)stillImageOrientation;	// 0x368f4471
// declared property getter: - (BOOL)suspendsVideoProcessing;	// 0x368f4575
@end

