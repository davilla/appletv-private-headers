/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaShelfViewCell.h"
#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVFlagstaffPosterHeader, ATVFlagstaffPosterBottomOverlay, BRAsyncImageControl, BRImageControl, BRReflectionControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPoster : BRControl <BRMediaShelfViewCell> {
@private
	BRReflectionControl *_reflectionControl;	// 44 = 0x2c
	BOOL _imageEdgeAntialiasingEnabled;	// 48 = 0x30
	int _style;	// 52 = 0x34
	ATVFlagstaffPosterHeader *_header;	// 56 = 0x38
	BRImageControl *_backgroundImageControl;	// 60 = 0x3c
	BRAsyncImageControl *_imageControl;	// 64 = 0x40
	ATVFlagstaffPosterBottomOverlay *_bottomOverlay;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BRImageControl *backgroundImageControl;	// G=0x306fbeb5; @synthesize=_backgroundImageControl
@property(readonly, assign, nonatomic) ATVFlagstaffPosterBottomOverlay *bottomOverlay;	// G=0x306fbe95; @synthesize=_bottomOverlay
@property(readonly, assign, nonatomic) ATVFlagstaffPosterHeader *header;	// G=0x306fbec5; @synthesize=_header
@property(readonly, assign, nonatomic) BRAsyncImageControl *imageControl;	// G=0x306fbea5; @synthesize=_imageControl
@property(assign, nonatomic) int style;	// G=0x306fbed5; S=0x306fc2bd; @synthesize=_style
+ (id)flagstaffPosterWithStyle:(int)style;	// 0x306fc2f9
- (id)init;	// 0x306fc2e1
- (id)initWithStyle:(int)style;	// 0x306fc3e5
- (CGRect)_contentFrame;	// 0x306fc4a1
- (void)_imageControlImageReady:(id)ready;	// 0x306fbee5
- (void)_setStyle:(int)style;	// 0x306fbf61
// declared property getter: - (id)backgroundImageControl;	// 0x306fbeb5
// declared property getter: - (id)bottomOverlay;	// 0x306fbe95
- (void)dealloc;	// 0x306fc32d
- (CGRect)focusCursorFrame;	// 0x306fc439
// declared property getter: - (id)header;	// 0x306fbec5
- (void)hideTextLayers;	// 0x306fbe8d
// declared property getter: - (id)imageControl;	// 0x306fbea5
- (BOOL)isAccessibilityElement;	// 0x306fbe91
- (void)layoutSubcontrols;	// 0x306fc529
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x306fc281
// declared property setter: - (void)setStyle:(int)style;	// 0x306fc2bd
// declared property getter: - (int)style;	// 0x306fbed5
@end

