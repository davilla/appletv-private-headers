/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRHorizontalSegmentedWidget.h"

@class BRImageControl, BRImage;

@interface BRPercentageIndicatorLayer : BRHorizontalSegmentedWidget {
@private
	BRImageControl *_centerOnLayer;	// 84 = 0x54
	BRImage *_leftOnImage;	// 88 = 0x58
	BRImage *_leftOffImage;	// 92 = 0x5c
	BRImage *_rightOnImage;	// 96 = 0x60
	BRImage *_rightOffImage;	// 100 = 0x64
	BRImage *_centerOnImage;	// 104 = 0x68
	BRImage *_centerOffImage;	// 108 = 0x6c
	float _percentage;	// 112 = 0x70
}
@property(assign) float percentage;	// G=0x329aad11; S=0x329aaefd; converted property
- (id)initWithLeftOnPath:(id)leftOnPath leftOffPath:(id)path centerOnPath:(id)path3 centerOffPath:(id)path4 rightOnPath:(id)path5 rightOffPath:(id)path6;	// 0x329ab025
- (void)_updateProgressToPercentage:(float)percentage;	// 0x329aad6d
- (id)accessibilityLabel;	// 0x329aad21
- (void)dealloc;	// 0x329aaf71
- (void)layoutSubcontrols;	// 0x329ab255
// converted property getter: - (float)percentage;	// 0x329aad11
// converted property setter: - (void)setPercentage:(float)percentage;	// 0x329aaefd
@end

