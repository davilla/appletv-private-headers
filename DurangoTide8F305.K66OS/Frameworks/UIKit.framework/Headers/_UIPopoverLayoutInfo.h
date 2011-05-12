/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject {
@private
	CGSize _preferredContentSize;	// 4 = 0x4
	unsigned _preferredArrowDirections;	// 12 = 0xc
	CGRect _containingFrame;	// 16 = 0x10
	UIEdgeInsets _containingFrameInsets;	// 32 = 0x20
	CGRect _targetRect;	// 48 = 0x30
	BOOL _constrainToTargetRect;	// 64 = 0x40
	CGRect _frame;	// 68 = 0x44
	float _offset;	// 84 = 0x54
	unsigned _arrowDirection;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) unsigned arrowDirection;	// G=0x32256e9d; @synthesize=_arrowDirection
@property(assign, nonatomic) BOOL constrainToTargetRect;	// G=0x32256ed9; S=0x32256ee9; @synthesize=_constrainToTargetRect
@property(assign, nonatomic) CGRect containingFrame;	// G=0x32256f89; S=0x32256fa5; @synthesize=_containingFrame
@property(assign, nonatomic) UIEdgeInsets containingFrameInsets;	// G=0x32256f41; S=0x32256f5d; @synthesize=_containingFrameInsets
@property(readonly, assign, nonatomic) CGRect frame;	// G=0x32256ebd; @synthesize=_frame
@property(readonly, assign, nonatomic) float offset;	// G=0x32256ead; @synthesize=_offset
@property(assign, nonatomic) unsigned preferredArrowDirections;	// G=0x32256fd1; S=0x32256fe1; @synthesize=_preferredArrowDirections
@property(assign, nonatomic) CGSize preferredContentSize;	// G=0x32256ff1; S=0x32257009; @synthesize=_preferredContentSize
@property(assign, nonatomic) CGRect targetRect;	// G=0x32256ef9; S=0x32256f15; @synthesize=_targetRect
+ (id)_observationKeys;	// 0x32257035
+ (CGSize)_popoverViewSizeForContentSize:(CGSize)contentSize arrowDirection:(unsigned)direction;	// 0x3225751d
- (id)init;	// 0x322572a1
- (void)_updateOutputs;	// 0x32257655
// declared property getter: - (unsigned)arrowDirection;	// 0x32256e9d
// declared property getter: - (BOOL)constrainToTargetRect;	// 0x32256ed9
// declared property getter: - (CGRect)containingFrame;	// 0x32256f89
// declared property getter: - (UIEdgeInsets)containingFrameInsets;	// 0x32256f41
- (void)dealloc;	// 0x322571cd
- (id)description;	// 0x32257395
// declared property getter: - (CGRect)frame;	// 0x32256ebd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32257021
// declared property getter: - (float)offset;	// 0x32256ead
// declared property getter: - (unsigned)preferredArrowDirections;	// 0x32256fd1
// declared property getter: - (CGSize)preferredContentSize;	// 0x32256ff1
// declared property setter: - (void)setConstrainToTargetRect:(BOOL)targetRect;	// 0x32256ee9
// declared property setter: - (void)setContainingFrame:(CGRect)frame;	// 0x32256fa5
// declared property setter: - (void)setContainingFrameInsets:(UIEdgeInsets)insets;	// 0x32256f5d
// declared property setter: - (void)setPreferredArrowDirections:(unsigned)directions;	// 0x32256fe1
// declared property setter: - (void)setPreferredContentSize:(CGSize)size;	// 0x32257009
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x32256f15
// declared property getter: - (CGRect)targetRect;	// 0x32256ef9
@end

