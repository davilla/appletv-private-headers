/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRHorizontalSegmentedWidget.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRImage;

__attribute__((visibility("hidden")))
@interface BRPercentageIndicatorLayer : BRHorizontalSegmentedWidget {
	BRImageControl *_centerOnLayer;	// 120 = 0x78
	BRImage *_leftOnImage;	// 124 = 0x7c
	BRImage *_leftOffImage;	// 128 = 0x80
	BRImage *_rightOnImage;	// 132 = 0x84
	BRImage *_rightOffImage;	// 136 = 0x88
	BRImage *_centerOnImage;	// 140 = 0x8c
	BRImage *_centerOffImage;	// 144 = 0x90
	float _percentage;	// 148 = 0x94
}
@property(assign) float percentage;	// G=0x320ba5; S=0x320bb5; converted property
- (id)initWithLeftOnPath:(id)leftOnPath leftOffPath:(id)path centerOnPath:(id)path3 centerOffPath:(id)path4 rightOnPath:(id)path5 rightOffPath:(id)path6;	// 0x320839
- (void)_updateProgressToPercentage:(float)percentage;	// 0x320d91
- (id)accessibilityLabel;	// 0x320f39
- (void)dealloc;	// 0x320add
- (void)layoutSubcontrols;	// 0x320c31
// converted property getter: - (float)percentage;	// 0x320ba5
// converted property setter: - (void)setPercentage:(float)percentage;	// 0x320bb5
@end
