/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIGroupTableViewCellBackground : UIView {
@private
	int _sectionLocation;	// 44 = 0x2c
	int _newSectionLocation;	// 48 = 0x30
	int _animationCount;	// 52 = 0x34
	int _selectionStyle;	// 56 = 0x38
	int _separatorStyle;	// 60 = 0x3c
	UIView *_topSeparatorView;	// 64 = 0x40
	UIView *_bottomSeparatorView;	// 68 = 0x44
	struct {
		unsigned isTranslucent : 1;
	} _groupBackgroundFlags;	// 72 = 0x48
}
@property(retain) id backgroundColor;	// G=0x302c5061; S=0x302c5065; converted property
@property(assign, nonatomic) int sectionLocation;	// G=0x3012ab45; S=0x30126735; 
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x3012956d; S=0x3012d1ed; 
@property(assign, nonatomic) int selectionStyle;	// G=0x302c5041; S=0x3012d22d; 
@property(assign, nonatomic) int separatorStyle;	// G=0x302c5051; S=0x30126981; 
+ (void)_flushCacheOnNotification:(id)notification;	// 0x300f6b75
+ (void)initialize;	// 0x300f4d45
- (id)initWithFrame:(CGRect)frame;	// 0x30125ea9
- (id)_backgroundColor;	// 0x301295a9
- (id)_bottomShadowColor;	// 0x302c50a1
- (id)_cachedImageForKey:(id)key;	// 0x301299e9
- (id)_contentMaskLayer;	// 0x302c5619
- (CGRect)_contentRectForContentHeight:(float)contentHeight;	// 0x302c57f9
- (CGRect)_contentsCenter:(BOOL)center;	// 0x30126265
- (CGRect)_contentsRect:(BOOL)rect;	// 0x301261d9
- (void)_decrementAnimationCount;	// 0x302c51a9
- (id)_fillColor;	// 0x3012974d
- (void)_incrementAnimationCount;	// 0x302c51e5
- (void)_layoutSubviews:(BOOL)subviews;	// 0x301260a9
- (float)_pixelDisplayedImageHeight;	// 0x302c500d
- (id)_roundedRectBezierPathInRect:(CGRect)rect withSectionLocation:(int)sectionLocation forBorder:(BOOL)border cornerRadiusAdjustment:(float)adjustment;	// 0x3012a279
- (id)_sectionBorderColor;	// 0x301297e1
- (id)_separatorColor;	// 0x30129895
- (void)_setSectionLocationAnimationDidStop;	// 0x302c5079
- (id)_topShadowColor;	// 0x302c5125
- (id)_topShadowViewWithColor:(id)color;	// 0x302c5419
- (void)_updateSeparatorViews;	// 0x301262e5
// converted property getter: - (id)backgroundColor;	// 0x302c5061
- (void)dealloc;	// 0x3014a7c5
- (void)displayLayer:(id)layer;	// 0x30129241
// declared property getter: - (BOOL)isSelected;	// 0x3012956d
- (void)layoutSubviews;	// 0x30126091
// declared property getter: - (int)sectionLocation;	// 0x3012ab45
// declared property getter: - (int)selectionStyle;	// 0x302c5041
// declared property getter: - (int)separatorStyle;	// 0x302c5051
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x302c5065
- (void)setFrame:(CGRect)frame;	// 0x30125f09
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x30126735
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x3012674d
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x3012d1ed
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x3012d22d
// declared property setter: - (void)setSeparatorStyle:(int)style;	// 0x30126981
@end

