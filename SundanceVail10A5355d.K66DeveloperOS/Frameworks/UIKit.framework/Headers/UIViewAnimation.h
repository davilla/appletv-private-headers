/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSIndexPath, UIView;

__attribute__((visibility("hidden")))
@interface UIViewAnimation : NSObject {
	UIView *_view;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
	CGRect _endRect;	// 12 = 0xc
	float _endAlpha;	// 28 = 0x1c
	float _startFraction;	// 32 = 0x20
	float _endFraction;	// 36 = 0x24
	int _curve;	// 40 = 0x28
	BOOL _animateFromCurrentPosition;	// 44 = 0x2c
	BOOL _shouldDeleteAfterAnimation;	// 45 = 0x2d
	BOOL _editing;	// 46 = 0x2e
	BOOL _shouldAnimateShadow;	// 47 = 0x2f
	BOOL _shouldRasterizeAfterAnimation;	// 48 = 0x30
	BOOL _shouldResetRasterizationAfterAnimation;	// 49 = 0x31
}
@property(readonly, assign, nonatomic) BOOL animateFromCurrentPosition;	// G=0x33b0f929; @synthesize=_animateFromCurrentPosition
@property(readonly, assign, nonatomic) int curve;	// G=0x33b0f94d; @synthesize=_curve
@property(readonly, assign, nonatomic) BOOL editing;	// G=0x33b0f9c9; @synthesize=_editing
@property(readonly, assign, nonatomic) float endAlpha;	// G=0x33b0f95d; @synthesize=_endAlpha
@property(readonly, assign, nonatomic) float endFraction;	// G=0x33b0f919; @synthesize=_endFraction
@property(readonly, assign, nonatomic) CGRect endRect;	// G=0x33b0f97d; @synthesize=_endRect
@property(readonly, assign, nonatomic) NSIndexPath *indexPath;	// G=0x33b0f9a1; @synthesize=_indexPath
@property(assign, nonatomic) BOOL shouldAnimateShadow;	// G=0x33b0f96d; S=0x33b614d9; @synthesize=_shouldAnimateShadow
@property(readonly, assign, nonatomic) BOOL shouldDeleteAfterAnimation;	// G=0x33b0fbf1; @synthesize=_shouldDeleteAfterAnimation
@property(assign, nonatomic) BOOL shouldRasterizeAfterAnimation;	// G=0x33b0fcb1; S=0x33b0facd; @synthesize=_shouldRasterizeAfterAnimation
@property(assign, nonatomic) BOOL shouldResetRasterizationAfterAnimation;	// G=0x33b0fbe1; S=0x33b0fadd; @synthesize=_shouldResetRasterizationAfterAnimation
@property(readonly, assign, nonatomic) float startFraction;	// G=0x33b0f909; @synthesize=_startFraction
@property(readonly, assign, nonatomic) UIView *view;	// G=0x33b0f8f9; @synthesize=_view
- (id)initWithView:(id)view indexPath:(id)path endRect:(CGRect)rect endAlpha:(float)alpha startFraction:(float)fraction endFraction:(float)fraction6 curve:(int)curve animateFromCurrentPosition:(BOOL)currentPosition shouldDeleteAfterAnimation:(BOOL)animation editing:(BOOL)editing;	// 0x33b0be85
// declared property getter: - (BOOL)animateFromCurrentPosition;	// 0x33b0f929
// declared property getter: - (int)curve;	// 0x33b0f94d
- (void)dealloc;	// 0x33b0fcc1
- (id)description;	// 0x33c6ca65
// declared property getter: - (BOOL)editing;	// 0x33b0f9c9
// declared property getter: - (float)endAlpha;	// 0x33b0f95d
// declared property getter: - (float)endFraction;	// 0x33b0f919
// declared property getter: - (CGRect)endRect;	// 0x33b0f97d
// declared property getter: - (id)indexPath;	// 0x33b0f9a1
// declared property setter: - (void)setShouldAnimateShadow:(BOOL)animateShadow;	// 0x33b614d9
// declared property setter: - (void)setShouldRasterizeAfterAnimation:(BOOL)rasterizeAfterAnimation;	// 0x33b0facd
// declared property setter: - (void)setShouldResetRasterizationAfterAnimation:(BOOL)resetRasterizationAfterAnimation;	// 0x33b0fadd
// declared property getter: - (BOOL)shouldAnimateShadow;	// 0x33b0f96d
// declared property getter: - (BOOL)shouldDeleteAfterAnimation;	// 0x33b0fbf1
// declared property getter: - (BOOL)shouldRasterizeAfterAnimation;	// 0x33b0fcb1
// declared property getter: - (BOOL)shouldResetRasterizationAfterAnimation;	// 0x33b0fbe1
// declared property getter: - (float)startFraction;	// 0x33b0f909
// declared property getter: - (id)view;	// 0x33b0f8f9
@end
