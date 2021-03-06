/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"
#import "NSCoding.h"
#import "NSTextLayoutOrientationProvider.h"

@class NSLayoutManager;

__attribute__((visibility("hidden")))
@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider> {
@private
	NSLayoutManager *_layoutManager;	// 4 = 0x4
	CGSize _size;	// 8 = 0x8
	float _lineFragmentPadding;	// 16 = 0x10
	unsigned _maximumLines;	// 20 = 0x14
	tcFlags _tcFlags;	// 24 = 0x18
}
@property(assign) CGSize containerSize;	// G=0x35efdc1d; S=0x35efdbb9; converted property
@property(retain) NSLayoutManager *layoutManager;	// G=0x35efda45; S=0x35efda55; converted property
@property(assign) float lineFragmentPadding;	// G=0x35efdc89; S=0x35efdc35; converted property
@property(assign) unsigned maximumNumberOfLines;	// G=0x35efdf79; S=0x35efdf8d; @synthesize=_maximumLines
+ (void)initialize;	// 0x35efd5b5
- (id)init;	// 0x35efd6a1
- (id)initWithCoder:(id)coder;	// 0x35efd87d
- (id)initWithContainerSize:(CGSize)containerSize;	// 0x35efd645
- (void)_commonInit;	// 0x35efd5f5
// converted property getter: - (CGSize)containerSize;	// 0x35efdc1d
- (BOOL)containsPoint:(CGPoint)point;	// 0x35efdf49
- (void)encodeWithCoder:(id)coder;	// 0x35efd6bd
- (BOOL)isSimpleRectangularTextContainer;	// 0x35efdf45
// converted property getter: - (id)layoutManager;	// 0x35efda45
- (int)layoutOrientation;	// 0x35efdf75
// converted property getter: - (float)lineFragmentPadding;	// 0x35efdc89
- (CGRect)lineFragmentRectForProposedRect:(CGRect)proposedRect sweepDirection:(unsigned)direction movementDirection:(unsigned)direction3 remainingRect:(CGRect *)rect;	// 0x35efdc99
// declared property getter: - (unsigned)maximumNumberOfLines;	// 0x35efdf79
- (void)replaceLayoutManager:(id)manager;	// 0x35efda65
// converted property setter: - (void)setContainerSize:(CGSize)size;	// 0x35efdbb9
// converted property setter: - (void)setLayoutManager:(id)manager;	// 0x35efda55
// converted property setter: - (void)setLineFragmentPadding:(float)padding;	// 0x35efdc35
// declared property setter: - (void)setMaximumNumberOfLines:(unsigned)lines;	// 0x35efdf8d
@end

