/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

@interface UISectionHeaderCell : UIView {
	NSString *_title;	// 44 = 0x2c
	struct {
		unsigned style : 1;
		unsigned reserved : 31;
	} _sectionHeaderCellFlags;	// 48 = 0x30
}
@property(retain) NSString *title;	// G=0x301f77a5; S=0x301f7a45; converted property
+ (id)defaultTitleFont;	// 0x301f7a21
- (id)initWithFrame:(CGRect)frame;	// 0x301f79ad
- (CGRect)_rectForTitle:(id)title;	// 0x301f7de1
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x301f77b5
- (void)dealloc;	// 0x301f7965
- (void)drawRect:(CGRect)rect;	// 0x301f7bed
- (void)drawTitle:(id)title inRect:(CGRect)rect;	// 0x301f78b9
- (void)drawTitle:(id)title withColor:(id)color withShadowColor:(id)shadowColor inRect:(CGRect)rect;	// 0x301f7b35
- (BOOL)isEqualToView:(id)view;	// 0x301f7839
- (void)mouseUp:(GSEventRef)up;	// 0x301f77b9
- (void)setStyle:(int)style;	// 0x301f7789
// converted property setter: - (void)setTitle:(id)title;	// 0x301f7a45
// converted property getter: - (id)title;	// 0x301f77a5
@end

