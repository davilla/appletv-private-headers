/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

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
	float _sourceArtSceneHeight;	// 100 = 0x64
}
@property(assign, nonatomic) BRImage *bottomDeco;	// G=0x3030c259; S=0x3030c22d; 
@property(assign, nonatomic) BRControl *bottomDecoControl;	// G=0x3030ce0d; S=0x3030ce1d; @synthesize=_bottomDecoControl
@property(assign, nonatomic) BRImage *bottomEdge;	// G=0x3030c1f5; S=0x3030c1c9; 
@property(assign, nonatomic) BRControl *bottomEdgeControl;	// G=0x3030cd8d; S=0x3030cd9d; @synthesize=_bottomEdgeControl
@property(assign, nonatomic) BRImage *bottomLeftCorner;	// G=0x3030c065; S=0x3030c039; 
@property(assign, nonatomic) BRControl *bottomLeftCornerControl;	// G=0x3030cdad; S=0x3030cdbd; @synthesize=_bottomLeftCornerControl
@property(assign, nonatomic) BRImage *bottomRightCorner;	// G=0x3030c001; S=0x3030bfd5; 
@property(assign, nonatomic) BRControl *bottomRightCornerControl;	// G=0x3030cd6d; S=0x3030cd7d; @synthesize=_bottomRightCornerControl
@property(assign, nonatomic) BRImage *center;	// G=0x3030c321; S=0x3030c2f5; 
@property(assign, nonatomic) BRControl *centerControl;	// G=0x3030cded; S=0x3030cdfd; @synthesize=_centerControl
@property(assign, nonatomic) float centerOverlapFactor;	// G=0x3030ce4d; S=0x3030c5b9; @synthesize=_centerOverlapFactor
@property(assign, nonatomic) BRImage *leftEdge;	// G=0x3030c12d; S=0x3030c101; 
@property(assign, nonatomic) BRControl *leftEdgeControl;	// G=0x3030cdcd; S=0x3030cddd; @synthesize=_leftEdgeControl
@property(assign, nonatomic) BRImage *rightEdge;	// G=0x3030c0c9; S=0x3030c09d; 
@property(assign, nonatomic) BRControl *rightEdgeControl;	// G=0x3030cd4d; S=0x3030cd5d; @synthesize=_rightEdgeControl
@property(assign, nonatomic) float sourceArtSceneHeight;	// G=0x3030ce5d; S=0x3030ce6d; @synthesize=_sourceArtSceneHeight
@property(assign, nonatomic) BRImage *topDeco;	// G=0x3030c2bd; S=0x3030c291; 
@property(assign, nonatomic) BRControl *topDecoControl;	// G=0x3030ce2d; S=0x3030ce3d; @synthesize=_topDecoControl
@property(assign, nonatomic) BRImage *topEdge;	// G=0x3030c191; S=0x3030c165; 
@property(assign, nonatomic) BRControl *topEdgeControl;	// G=0x3030cd0d; S=0x3030cd1d; @synthesize=_topEdgeControl
@property(assign, nonatomic) BRImage *topLeftCorner;	// G=0x3030bf9d; S=0x3030bf71; 
@property(assign, nonatomic) BRControl *topLeftCornerControl;	// G=0x3030cd2d; S=0x3030cd3d; @synthesize=_topLeftCornerControl
@property(assign, nonatomic) BRImage *topRightCorner;	// G=0x3030bf39; S=0x3030bf0d; 
@property(assign, nonatomic) BRControl *topRightCornerControl;	// G=0x3030cced; S=0x3030ccfd; @synthesize=_topRightCornerControl
- (id)init;	// 0x3030beb1
- (id)_defaultActions;	// 0x3030ce7d
- (void)_setImage:(id)image inControlNamed:(id)controlNamed withAntialiasingMask:(unsigned)antialiasingMask;	// 0x3030cf7d
- (float)animationDuration;	// 0x3030c705
- (id)animationTimingFunction;	// 0x3030c70d
// declared property getter: - (id)bottomDeco;	// 0x3030c259
// declared property getter: - (id)bottomDecoControl;	// 0x3030ce0d
// declared property getter: - (id)bottomEdge;	// 0x3030c1f5
// declared property getter: - (id)bottomEdgeControl;	// 0x3030cd8d
// declared property getter: - (id)bottomLeftCorner;	// 0x3030c065
// declared property getter: - (id)bottomLeftCornerControl;	// 0x3030cdad
// declared property getter: - (id)bottomRightCorner;	// 0x3030c001
// declared property getter: - (id)bottomRightCornerControl;	// 0x3030cd6d
// declared property getter: - (id)center;	// 0x3030c321
// declared property getter: - (id)centerControl;	// 0x3030cded
// declared property getter: - (float)centerOverlapFactor;	// 0x3030ce4d
- (void)clearImageMap;	// 0x3030c359
- (CGSize)edgeSize;	// 0x3030c455
- (void)layoutSubcontrols;	// 0x3030c739
// declared property getter: - (id)leftEdge;	// 0x3030c12d
// declared property getter: - (id)leftEdgeControl;	// 0x3030cdcd
// declared property getter: - (id)rightEdge;	// 0x3030c0c9
// declared property getter: - (id)rightEdgeControl;	// 0x3030cd4d
// declared property setter: - (void)setBottomDeco:(id)deco;	// 0x3030c22d
// declared property setter: - (void)setBottomDecoControl:(id)control;	// 0x3030ce1d
// declared property setter: - (void)setBottomEdge:(id)edge;	// 0x3030c1c9
// declared property setter: - (void)setBottomEdgeControl:(id)control;	// 0x3030cd9d
// declared property setter: - (void)setBottomLeftCorner:(id)corner;	// 0x3030c039
// declared property setter: - (void)setBottomLeftCornerControl:(id)control;	// 0x3030cdbd
// declared property setter: - (void)setBottomRightCorner:(id)corner;	// 0x3030bfd5
// declared property setter: - (void)setBottomRightCornerControl:(id)control;	// 0x3030cd7d
// declared property setter: - (void)setCenter:(id)center;	// 0x3030c2f5
// declared property setter: - (void)setCenterControl:(id)control;	// 0x3030cdfd
// declared property setter: - (void)setCenterOverlapFactor:(float)factor;	// 0x3030c5b9
// declared property setter: - (void)setLeftEdge:(id)edge;	// 0x3030c101
// declared property setter: - (void)setLeftEdgeControl:(id)control;	// 0x3030cddd
// declared property setter: - (void)setRightEdge:(id)edge;	// 0x3030c09d
// declared property setter: - (void)setRightEdgeControl:(id)control;	// 0x3030cd5d
// declared property setter: - (void)setSourceArtSceneHeight:(float)height;	// 0x3030ce6d
- (void)setSuppressAnimations:(BOOL)animations;	// 0x3030c5d9
// declared property setter: - (void)setTopDeco:(id)deco;	// 0x3030c291
// declared property setter: - (void)setTopDecoControl:(id)control;	// 0x3030ce3d
// declared property setter: - (void)setTopEdge:(id)edge;	// 0x3030c165
// declared property setter: - (void)setTopEdgeControl:(id)control;	// 0x3030cd1d
// declared property setter: - (void)setTopLeftCorner:(id)corner;	// 0x3030bf71
// declared property setter: - (void)setTopLeftCornerControl:(id)control;	// 0x3030cd3d
// declared property setter: - (void)setTopRightCorner:(id)corner;	// 0x3030bf0d
// declared property setter: - (void)setTopRightCornerControl:(id)control;	// 0x3030ccfd
// declared property getter: - (float)sourceArtSceneHeight;	// 0x3030ce5d
// declared property getter: - (id)topDeco;	// 0x3030c2bd
// declared property getter: - (id)topDecoControl;	// 0x3030ce2d
// declared property getter: - (id)topEdge;	// 0x3030c191
// declared property getter: - (id)topEdgeControl;	// 0x3030cd0d
// declared property getter: - (id)topLeftCorner;	// 0x3030bf9d
// declared property getter: - (id)topLeftCornerControl;	// 0x3030cd2d
// declared property getter: - (id)topRightCorner;	// 0x3030bf39
// declared property getter: - (id)topRightCornerControl;	// 0x3030cced
- (void)updateAnimations;	// 0x3030c621
@end

