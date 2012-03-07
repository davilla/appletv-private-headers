/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIImage, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlAppearanceStorage : NSObject {
@private
	UIImage *_optionsBackgroundImage;	// 4 = 0x4
	NSMutableDictionary *_backgroundImages;	// 8 = 0x8
	NSMutableDictionary *_miniBackgroundImages;	// 12 = 0xc
	NSMutableDictionary *_dividerImages;	// 16 = 0x10
	NSMutableDictionary *_miniDividerImages;	// 20 = 0x14
	NSMutableDictionary *_textAttributesForState;	// 24 = 0x18
	NSNumber *_backgroundPositionAdjustmentInBar;	// 28 = 0x1c
	NSNumber *_backgroundPositionAdjustmentInMiniBar;	// 32 = 0x20
	NSMutableDictionary *_contentPositionOffsets;	// 36 = 0x24
	NSMutableDictionary *_miniContentPositionOffsets;	// 40 = 0x28
	BOOL _legacyDontHighlight;	// 44 = 0x2c
	BOOL _legacySuppressOptionsBackground;	// 45 = 0x2d
	BOOL _isTiled;	// 46 = 0x2e
	unsigned _leftCapWidth;	// 48 = 0x30
	unsigned _rightCapWidth;	// 52 = 0x34
}
@property(readonly, assign) BOOL legacySuppressOptionsBackground;	// G=0x352a54ed; converted property
@property(retain, nonatomic) UIImage *optionsBackgroundImage;	// G=0x352a5985; S=0x352a5995; @synthesize=_optionsBackgroundImage
- (id)init;	// 0x352a5331
- (id)anyDividerImage;	// 0x352a50a1
- (id)anyDividerImageForMini:(BOOL)mini;	// 0x352a500d
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x352a4df9
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini withFallback:(BOOL)fallback;	// 0x352a4d25
- (id)backgroundPositionAdjustmentInMiniBar:(BOOL)miniBar;	// 0x352a4a4d
- (id)contentPositionOffsetForSegment:(int)segment inMiniBar:(BOOL)miniBar;	// 0x352a4bfd
- (id)contentPositionOffsetForSegment:(int)segment inMiniBar:(BOOL)miniBar noFallback:(BOOL)fallback;	// 0x352a4b75
- (void)dealloc;	// 0x352a5231
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini;	// 0x352a50cd
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini withFallback:(BOOL)fallback;	// 0x352a4f2d
// converted property getter: - (BOOL)legacySuppressOptionsBackground;	// 0x352a54ed
// declared property getter: - (id)optionsBackgroundImage;	// 0x352a5985
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x352a4c21
- (void)setBackgroundPositionAdjustment:(id)adjustment inMiniBar:(BOOL)miniBar;	// 0x352a497d
- (void)setContentPositionOffset:(id)offset forSegment:(int)segment inMiniBar:(BOOL)miniBar;	// 0x352a4a71
- (void)setDetail:(XXStruct_wXTbsB *)detail;	// 0x352a54fd
- (void)setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini;	// 0x352a4e1d
- (void)setIsTiled:(BOOL)tiled leftCapWidth:(unsigned)width rightCapWidth:(unsigned)width3;	// 0x352a5955
// declared property setter: - (void)setOptionsBackgroundImage:(id)image;	// 0x352a5995
- (void)setTextAttributes:(id)attributes forState:(unsigned)state;	// 0x352a50f1
- (void)takeTextAttributesFrom:(XXStruct_V3NSMA)from forState:(unsigned)state;	// 0x352a5381
- (id)textAttributesForState:(unsigned)state;	// 0x352a51e9
- (BOOL)wantsTrackingSuppressed;	// 0x352a48e5
@end
