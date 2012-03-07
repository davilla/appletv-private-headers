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
@property(assign, nonatomic) BRImage *bottomDeco;	// G=0x3327b179; S=0x3327b14d; 
@property(assign, nonatomic) BRControl *bottomDecoControl;	// G=0x3327bd09; S=0x3327bd19; @synthesize=_bottomDecoControl
@property(assign, nonatomic) BRImage *bottomEdge;	// G=0x3327b115; S=0x3327b0e9; 
@property(assign, nonatomic) BRControl *bottomEdgeControl;	// G=0x3327bc89; S=0x3327bc99; @synthesize=_bottomEdgeControl
@property(assign, nonatomic) BRImage *bottomLeftCorner;	// G=0x3327af85; S=0x3327af59; 
@property(assign, nonatomic) BRControl *bottomLeftCornerControl;	// G=0x3327bca9; S=0x3327bcb9; @synthesize=_bottomLeftCornerControl
@property(assign, nonatomic) BRImage *bottomRightCorner;	// G=0x3327af21; S=0x3327aef5; 
@property(assign, nonatomic) BRControl *bottomRightCornerControl;	// G=0x3327bc69; S=0x3327bc79; @synthesize=_bottomRightCornerControl
@property(assign, nonatomic) BRImage *center;	// G=0x3327b241; S=0x3327b215; 
@property(assign, nonatomic) BRControl *centerControl;	// G=0x3327bce9; S=0x3327bcf9; @synthesize=_centerControl
@property(assign, nonatomic) float centerOverlapFactor;	// G=0x3327bd49; S=0x3327b4c5; @synthesize=_centerOverlapFactor
@property(assign, nonatomic) BRImage *leftEdge;	// G=0x3327b04d; S=0x3327b021; 
@property(assign, nonatomic) BRControl *leftEdgeControl;	// G=0x3327bcc9; S=0x3327bcd9; @synthesize=_leftEdgeControl
@property(assign, nonatomic) BRImage *rightEdge;	// G=0x3327afe9; S=0x3327afbd; 
@property(assign, nonatomic) BRControl *rightEdgeControl;	// G=0x3327bc49; S=0x3327bc59; @synthesize=_rightEdgeControl
@property(assign, nonatomic) BRImage *topDeco;	// G=0x3327b1dd; S=0x3327b1b1; 
@property(assign, nonatomic) BRControl *topDecoControl;	// G=0x3327bd29; S=0x3327bd39; @synthesize=_topDecoControl
@property(assign, nonatomic) BRImage *topEdge;	// G=0x3327b0b1; S=0x3327b085; 
@property(assign, nonatomic) BRControl *topEdgeControl;	// G=0x3327bc09; S=0x3327bc19; @synthesize=_topEdgeControl
@property(assign, nonatomic) BRImage *topLeftCorner;	// G=0x3327aebd; S=0x3327ae91; 
@property(assign, nonatomic) BRControl *topLeftCornerControl;	// G=0x3327bc29; S=0x3327bc39; @synthesize=_topLeftCornerControl
@property(assign, nonatomic) BRImage *topRightCorner;	// G=0x3327ae59; S=0x3327ae2d; 
@property(assign, nonatomic) BRControl *topRightCornerControl;	// G=0x3327bbe9; S=0x3327bbf9; @synthesize=_topRightCornerControl
- (id)init;	// 0x3327ade5
- (id)_defaultActions;	// 0x3327bd59
- (void)_setImage:(id)image inControlNamed:(id)controlNamed withAntialiasingMask:(unsigned)antialiasingMask;	// 0x3327be59
- (float)animationDuration;	// 0x3327b611
- (id)animationTimingFunction;	// 0x3327b619
// declared property getter: - (id)bottomDeco;	// 0x3327b179
// declared property getter: - (id)bottomDecoControl;	// 0x3327bd09
// declared property getter: - (id)bottomEdge;	// 0x3327b115
// declared property getter: - (id)bottomEdgeControl;	// 0x3327bc89
// declared property getter: - (id)bottomLeftCorner;	// 0x3327af85
// declared property getter: - (id)bottomLeftCornerControl;	// 0x3327bca9
// declared property getter: - (id)bottomRightCorner;	// 0x3327af21
// declared property getter: - (id)bottomRightCornerControl;	// 0x3327bc69
// declared property getter: - (id)center;	// 0x3327b241
// declared property getter: - (id)centerControl;	// 0x3327bce9
// declared property getter: - (float)centerOverlapFactor;	// 0x3327bd49
- (void)clearImageMap;	// 0x3327b279
- (CGSize)edgeSize;	// 0x3327b375
- (void)layoutSubcontrols;	// 0x3327b645
// declared property getter: - (id)leftEdge;	// 0x3327b04d
// declared property getter: - (id)leftEdgeControl;	// 0x3327bcc9
// declared property getter: - (id)rightEdge;	// 0x3327afe9
// declared property getter: - (id)rightEdgeControl;	// 0x3327bc49
// declared property setter: - (void)setBottomDeco:(id)deco;	// 0x3327b14d
// declared property setter: - (void)setBottomDecoControl:(id)control;	// 0x3327bd19
// declared property setter: - (void)setBottomEdge:(id)edge;	// 0x3327b0e9
// declared property setter: - (void)setBottomEdgeControl:(id)control;	// 0x3327bc99
// declared property setter: - (void)setBottomLeftCorner:(id)corner;	// 0x3327af59
// declared property setter: - (void)setBottomLeftCornerControl:(id)control;	// 0x3327bcb9
// declared property setter: - (void)setBottomRightCorner:(id)corner;	// 0x3327aef5
// declared property setter: - (void)setBottomRightCornerControl:(id)control;	// 0x3327bc79
// declared property setter: - (void)setCenter:(id)center;	// 0x3327b215
// declared property setter: - (void)setCenterControl:(id)control;	// 0x3327bcf9
// declared property setter: - (void)setCenterOverlapFactor:(float)factor;	// 0x3327b4c5
// declared property setter: - (void)setLeftEdge:(id)edge;	// 0x3327b021
// declared property setter: - (void)setLeftEdgeControl:(id)control;	// 0x3327bcd9
// declared property setter: - (void)setRightEdge:(id)edge;	// 0x3327afbd
// declared property setter: - (void)setRightEdgeControl:(id)control;	// 0x3327bc59
- (void)setSuppressAnimations:(BOOL)animations;	// 0x3327b4e5
// declared property setter: - (void)setTopDeco:(id)deco;	// 0x3327b1b1
// declared property setter: - (void)setTopDecoControl:(id)control;	// 0x3327bd39
// declared property setter: - (void)setTopEdge:(id)edge;	// 0x3327b085
// declared property setter: - (void)setTopEdgeControl:(id)control;	// 0x3327bc19
// declared property setter: - (void)setTopLeftCorner:(id)corner;	// 0x3327ae91
// declared property setter: - (void)setTopLeftCornerControl:(id)control;	// 0x3327bc39
// declared property setter: - (void)setTopRightCorner:(id)corner;	// 0x3327ae2d
// declared property setter: - (void)setTopRightCornerControl:(id)control;	// 0x3327bbf9
// declared property getter: - (id)topDeco;	// 0x3327b1dd
// declared property getter: - (id)topDecoControl;	// 0x3327bd29
// declared property getter: - (id)topEdge;	// 0x3327b0b1
// declared property getter: - (id)topEdgeControl;	// 0x3327bc09
// declared property getter: - (id)topLeftCorner;	// 0x3327aebd
// declared property getter: - (id)topLeftCornerControl;	// 0x3327bc29
// declared property getter: - (id)topRightCorner;	// 0x3327ae59
// declared property getter: - (id)topRightCornerControl;	// 0x3327bbe9
- (void)updateAnimations;	// 0x3327b52d
@end
