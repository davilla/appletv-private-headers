/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class NSString, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVGameMenuItemContents : BRControl {
@private
	BOOL _waitingForImages;	// 44 = 0x2c
	BOOL _dimmed;	// 45 = 0x2d
	BOOL _highlightRightJustifiedText;	// 46 = 0x2e
	BRImage *_leftImage;	// 48 = 0x30
	id<BRImageProxy> _leftImageProxy;	// 52 = 0x34
	BRImage *_rightImage;	// 56 = 0x38
	id<BRImageProxy> _rightImageProxy;	// 60 = 0x3c
	NSString *_imageSeparatorText;	// 64 = 0x40
	NSString *_text;	// 68 = 0x44
	NSString *_detailedText;	// 72 = 0x48
	NSString *_rightJustifiedText;	// 76 = 0x4c
}
@property(copy) NSString *detailedText;	// G=0x306e3c95; S=0x306e3dc5; @synthesize=_detailedText
@property(assign) BOOL dimmed;	// G=0x306e3685; S=0x306e3acd; 
@property(assign) BOOL highlightRightJustifiedText;	// G=0x306e3675; S=0x306e393d; 
@property(copy) NSString *imageSeparatorText;	// G=0x306e3c65; S=0x306e3d75; @synthesize=_imageSeparatorText
@property(retain) BRImage *leftImage;	// G=0x306e3c05; S=0x306e3cc5; @synthesize=_leftImage
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x306e3c1d; S=0x306e3cf1; @synthesize=_leftImageProxy
@property(retain) BRImage *rightImage;	// G=0x306e3c35; S=0x306e3d1d; @synthesize=_rightImage
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x306e3c4d; S=0x306e3d49; @synthesize=_rightImageProxy
@property(copy) NSString *rightJustifiedText;	// G=0x306e3cad; S=0x306e3ded; @synthesize=_rightJustifiedText
@property(copy) NSString *text;	// G=0x306e3c7d; S=0x306e3d9d; @synthesize=_text
- (id)init;	// 0x306e3a7d
- (void)_getRightJustifiedAttributed:(id *)attributed textRect:(CGRect *)rect;	// 0x306e3e15
- (void)_imageLoadFailed:(id)failed;	// 0x306e378d
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x306e3841
- (void)_setWaitingForImages:(BOOL)images;	// 0x306e3695
- (void)dealloc;	// 0x306e398d
// declared property getter: - (id)detailedText;	// 0x306e3c95
// declared property getter: - (BOOL)dimmed;	// 0x306e3685
- (void)drawInContext:(CGContextRef)context;	// 0x306e3f75
// declared property getter: - (BOOL)highlightRightJustifiedText;	// 0x306e3675
// declared property getter: - (id)imageSeparatorText;	// 0x306e3c65
// declared property getter: - (id)leftImage;	// 0x306e3c05
// declared property getter: - (id)leftImageProxy;	// 0x306e3c1d
// declared property getter: - (id)rightImage;	// 0x306e3c35
// declared property getter: - (id)rightImageProxy;	// 0x306e3c4d
// declared property getter: - (id)rightJustifiedText;	// 0x306e3cad
// declared property setter: - (void)setDetailedText:(id)text;	// 0x306e3dc5
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x306e3acd
// declared property setter: - (void)setHighlightRightJustifiedText:(BOOL)text;	// 0x306e393d
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x306e3d75
// declared property setter: - (void)setLeftImage:(id)image;	// 0x306e3cc5
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x306e3cf1
// declared property setter: - (void)setRightImage:(id)image;	// 0x306e3d1d
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x306e3d49
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x306e3ded
// declared property setter: - (void)setText:(id)text;	// 0x306e3d9d
// declared property getter: - (id)text;	// 0x306e3c7d
@end

