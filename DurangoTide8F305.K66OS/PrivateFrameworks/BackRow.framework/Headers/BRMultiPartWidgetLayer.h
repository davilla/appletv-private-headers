/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRMultiPartWidgetLayer : BRControl {
@private
	BOOL _suppressAnimations;	// 44 = 0x2c
	BRControl *_multiPartControls[12];	// 48 = 0x30
}
+ (void)_setAntialiasingFlagsForLayer:(int)layer control:(id)control;	// 0x329aa415
- (id)init;	// 0x329aa5e5
- (id)_defaultActions;	// 0x3291a7d9
- (void)_updateImage:(id)image forLayer:(int)layer;	// 0x329aa625
- (float)animationDuration;	// 0x329aa40d
- (id)animationTimingFunction;	// 0x329aa4b1
- (CGSize)edgeSize;	// 0x3292bed1
- (void)layoutSubcontrols;	// 0x329aa739
- (void)setBottomDeco:(id)deco;	// 0x3291a971
- (void)setBottomEdge:(id)edge;	// 0x3291a959
- (void)setBottomLeftCorner:(id)corner;	// 0x3291a8c9
- (void)setBottomRightCorner:(id)corner;	// 0x3291a7c1
- (void)setCenter:(id)center;	// 0x32926575
- (void)setCenterOverlapFactor:(float)factor;	// 0x32926529
- (void)setImageMap:(const BRMultiPartImageMap *)map forBundle:(id)bundle;	// 0x3291a719
- (void)setLeftEdge:(id)edge;	// 0x3291a911
- (void)setRightEdge:(id)edge;	// 0x3291a929
- (void)setSuppressAnimations:(BOOL)animations;	// 0x329aa5ad
- (void)setTopDeco:(id)deco;	// 0x3291a989
- (void)setTopEdge:(id)edge;	// 0x3291a941
- (void)setTopLeftCorner:(id)corner;	// 0x3291a8f9
- (void)setTopRightCorner:(id)corner;	// 0x3291a8e1
- (void)updateAnimations;	// 0x329aa4dd
@end

