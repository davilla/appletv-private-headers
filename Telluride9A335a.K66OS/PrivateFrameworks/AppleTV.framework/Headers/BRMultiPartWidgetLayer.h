/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRMultiPartWidgetLayer : BRControl {
@private
	BOOL _suppressAnimations;	// 49 = 0x31
	BRControl *_topRightCornerControl;	// 52 = 0x34
	BRControl *_topEdgeControl;	// 56 = 0x38
	BRControl *_topLeftCornerControl;	// 60 = 0x3c
	BRControl *_rightEdgeControl;	// 64 = 0x40
	BRControl *_bottomRightCornerControl;	// 68 = 0x44
	BRControl *_bottomEdgeControl;	// 72 = 0x48
	BRControl *_bottomLeftCornerControl;	// 76 = 0x4c
	BRControl *_leftEdgeControl;	// 80 = 0x50
	BRControl *_centerControl;	// 84 = 0x54
	BRControl *_bottomDecoControl;	// 88 = 0x58
	BRControl *_topDecoControl;	// 92 = 0x5c
	float _centerOverlapFactor;	// 96 = 0x60
}
@property(assign, nonatomic) BRImage *bottomDeco;	// G=0x3425c179; S=0x3425c14d; 
@property(assign, nonatomic) BRControl *bottomDecoControl;	// G=0x3425cd09; S=0x3425cd19; @synthesize=_bottomDecoControl
@property(assign, nonatomic) BRImage *bottomEdge;	// G=0x3425c115; S=0x3425c0e9; 
@property(assign, nonatomic) BRControl *bottomEdgeControl;	// G=0x3425cc89; S=0x3425cc99; @synthesize=_bottomEdgeControl
@property(assign, nonatomic) BRImage *bottomLeftCorner;	// G=0x3425bf85; S=0x3425bf59; 
@property(assign, nonatomic) BRControl *bottomLeftCornerControl;	// G=0x3425cca9; S=0x3425ccb9; @synthesize=_bottomLeftCornerControl
@property(assign, nonatomic) BRImage *bottomRightCorner;	// G=0x3425bf21; S=0x3425bef5; 
@property(assign, nonatomic) BRControl *bottomRightCornerControl;	// G=0x3425cc69; S=0x3425cc79; @synthesize=_bottomRightCornerControl
@property(assign, nonatomic) BRImage *center;	// G=0x3425c241; S=0x3425c215; 
@property(assign, nonatomic) BRControl *centerControl;	// G=0x3425cce9; S=0x3425ccf9; @synthesize=_centerControl
@property(assign, nonatomic) float centerOverlapFactor;	// G=0x3425cd49; S=0x3425c4c5; @synthesize=_centerOverlapFactor
@property(assign, nonatomic) BRImage *leftEdge;	// G=0x3425c04d; S=0x3425c021; 
@property(assign, nonatomic) BRControl *leftEdgeControl;	// G=0x3425ccc9; S=0x3425ccd9; @synthesize=_leftEdgeControl
@property(assign, nonatomic) BRImage *rightEdge;	// G=0x3425bfe9; S=0x3425bfbd; 
@property(assign, nonatomic) BRControl *rightEdgeControl;	// G=0x3425cc49; S=0x3425cc59; @synthesize=_rightEdgeControl
@property(assign, nonatomic) BRImage *topDeco;	// G=0x3425c1dd; S=0x3425c1b1; 
@property(assign, nonatomic) BRControl *topDecoControl;	// G=0x3425cd29; S=0x3425cd39; @synthesize=_topDecoControl
@property(assign, nonatomic) BRImage *topEdge;	// G=0x3425c0b1; S=0x3425c085; 
@property(assign, nonatomic) BRControl *topEdgeControl;	// G=0x3425cc09; S=0x3425cc19; @synthesize=_topEdgeControl
@property(assign, nonatomic) BRImage *topLeftCorner;	// G=0x3425bebd; S=0x3425be91; 
@property(assign, nonatomic) BRControl *topLeftCornerControl;	// G=0x3425cc29; S=0x3425cc39; @synthesize=_topLeftCornerControl
@property(assign, nonatomic) BRImage *topRightCorner;	// G=0x3425be59; S=0x3425be2d; 
@property(assign, nonatomic) BRControl *topRightCornerControl;	// G=0x3425cbe9; S=0x3425cbf9; @synthesize=_topRightCornerControl
- (id)init;	// 0x3425bde5
- (id)_defaultActions;	// 0x3425cd59
- (void)_setImage:(id)image inControlNamed:(id)controlNamed withAntialiasingMask:(unsigned)antialiasingMask;	// 0x3425ce59
- (float)animationDuration;	// 0x3425c611
- (id)animationTimingFunction;	// 0x3425c619
// declared property getter: - (id)bottomDeco;	// 0x3425c179
// declared property getter: - (id)bottomDecoControl;	// 0x3425cd09
// declared property getter: - (id)bottomEdge;	// 0x3425c115
// declared property getter: - (id)bottomEdgeControl;	// 0x3425cc89
// declared property getter: - (id)bottomLeftCorner;	// 0x3425bf85
// declared property getter: - (id)bottomLeftCornerControl;	// 0x3425cca9
// declared property getter: - (id)bottomRightCorner;	// 0x3425bf21
// declared property getter: - (id)bottomRightCornerControl;	// 0x3425cc69
// declared property getter: - (id)center;	// 0x3425c241
// declared property getter: - (id)centerControl;	// 0x3425cce9
// declared property getter: - (float)centerOverlapFactor;	// 0x3425cd49
- (void)clearImageMap;	// 0x3425c279
- (CGSize)edgeSize;	// 0x3425c375
- (void)layoutSubcontrols;	// 0x3425c645
// declared property getter: - (id)leftEdge;	// 0x3425c04d
// declared property getter: - (id)leftEdgeControl;	// 0x3425ccc9
// declared property getter: - (id)rightEdge;	// 0x3425bfe9
// declared property getter: - (id)rightEdgeControl;	// 0x3425cc49
// declared property setter: - (void)setBottomDeco:(id)deco;	// 0x3425c14d
// declared property setter: - (void)setBottomDecoControl:(id)control;	// 0x3425cd19
// declared property setter: - (void)setBottomEdge:(id)edge;	// 0x3425c0e9
// declared property setter: - (void)setBottomEdgeControl:(id)control;	// 0x3425cc99
// declared property setter: - (void)setBottomLeftCorner:(id)corner;	// 0x3425bf59
// declared property setter: - (void)setBottomLeftCornerControl:(id)control;	// 0x3425ccb9
// declared property setter: - (void)setBottomRightCorner:(id)corner;	// 0x3425bef5
// declared property setter: - (void)setBottomRightCornerControl:(id)control;	// 0x3425cc79
// declared property setter: - (void)setCenter:(id)center;	// 0x3425c215
// declared property setter: - (void)setCenterControl:(id)control;	// 0x3425ccf9
// declared property setter: - (void)setCenterOverlapFactor:(float)factor;	// 0x3425c4c5
// declared property setter: - (void)setLeftEdge:(id)edge;	// 0x3425c021
// declared property setter: - (void)setLeftEdgeControl:(id)control;	// 0x3425ccd9
// declared property setter: - (void)setRightEdge:(id)edge;	// 0x3425bfbd
// declared property setter: - (void)setRightEdgeControl:(id)control;	// 0x3425cc59
- (void)setSuppressAnimations:(BOOL)animations;	// 0x3425c4e5
// declared property setter: - (void)setTopDeco:(id)deco;	// 0x3425c1b1
// declared property setter: - (void)setTopDecoControl:(id)control;	// 0x3425cd39
// declared property setter: - (void)setTopEdge:(id)edge;	// 0x3425c085
// declared property setter: - (void)setTopEdgeControl:(id)control;	// 0x3425cc19
// declared property setter: - (void)setTopLeftCorner:(id)corner;	// 0x3425be91
// declared property setter: - (void)setTopLeftCornerControl:(id)control;	// 0x3425cc39
// declared property setter: - (void)setTopRightCorner:(id)corner;	// 0x3425be2d
// declared property setter: - (void)setTopRightCornerControl:(id)control;	// 0x3425cbf9
// declared property getter: - (id)topDeco;	// 0x3425c1dd
// declared property getter: - (id)topDecoControl;	// 0x3425cd29
// declared property getter: - (id)topEdge;	// 0x3425c0b1
// declared property getter: - (id)topEdgeControl;	// 0x3425cc09
// declared property getter: - (id)topLeftCorner;	// 0x3425bebd
// declared property getter: - (id)topLeftCornerControl;	// 0x3425cc29
// declared property getter: - (id)topRightCorner;	// 0x3425be59
// declared property getter: - (id)topRightCornerControl;	// 0x3425cbe9
- (void)updateAnimations;	// 0x3425c52d
@end

