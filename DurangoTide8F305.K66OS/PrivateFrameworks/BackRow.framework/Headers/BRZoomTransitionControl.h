/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRTransitionControl.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRZoomTransitionControl : BRTransitionControl {
@private
	BRControl *_prerender;	// 52 = 0x34
	BOOL _prerenderAnimation;	// 56 = 0x38
}
@property(assign) BOOL prerenderAnimation;	// G=0x3298e341; S=0x3298e331; converted property
- (void)_addPrerender;	// 0x3298ec81
- (void)_removePrerender;	// 0x3298ec21
- (void)_takePrerenderSnapshot;	// 0x3298f045
- (void)_updateContentForTransitionState;	// 0x3298f215
- (void)_zoomInCompleted:(id)completed;	// 0x3298ebc1
- (void)_zoomOutCompleted:(id)completed;	// 0x3298eb61
- (void)dealloc;	// 0x3298eda9
- (void)layoutSubcontrols;	// 0x3298ef81
// converted property getter: - (BOOL)prerenderAnimation;	// 0x3298e341
- (void)setContent:(id)content;	// 0x3298ed4d
// converted property setter: - (void)setPrerenderAnimation:(BOOL)animation;	// 0x3298e331
- (void)setTransitionedIn:(BOOL)anIn;	// 0x3298ecf9
@end

