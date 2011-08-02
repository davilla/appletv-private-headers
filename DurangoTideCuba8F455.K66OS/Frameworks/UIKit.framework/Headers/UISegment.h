/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, _UISegmentedControlAppearance;

__attribute__((visibility("hidden")))
@interface UISegment : UIView {
@private
	UIView *_info;	// 44 = 0x2c
	_UISegmentedControlAppearance *_appearance;	// 48 = 0x30
	float _width;	// 52 = 0x34
	CGSize _contentOffset;	// 56 = 0x38
	UIColor *_tintColor;	// 64 = 0x40
	int _barStyle;	// 68 = 0x44
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned selected : 1;
		unsigned highlighted : 1;
		unsigned showDivider : 1;
		unsigned hasImage : 1;
		unsigned isDisclosure : 1;
		unsigned position : 3;
		unsigned autosizeText : 1;
		unsigned isMomentary : 1;
	} _segmentFlags;	// 72 = 0x48
}
@property(assign) int controlSize;	// G=0x30202c35; S=0x30203675; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x300cdbb5; S=0x301cb1e1; 
@property(retain) UIView *info;	// G=0x301161e5; S=0x300bcfd1; converted property
@property(assign, getter=isMomentary) BOOL momentary;	// G=0x30202c1d; S=0x300bf2e5; 
@property(assign, getter=isSelected) BOOL selected;	// G=0x300cdba1; S=0x300cd95d; 
- (id)initWithCoder:(id)coder;	// 0x302044c1
- (id)initWithInfo:(id)info appearance:(id)appearance position:(unsigned)position autosizeText:(BOOL)text;	// 0x3020549d
- (id)initWithInfo:(id)info style:(int)style size:(int)size barStyle:(int)style4 tintColor:(id)color position:(unsigned)position isDisclosure:(BOOL)disclosure autosizeText:(BOOL)text;	// 0x300bcd49
- (void)_commonInitWithInfo:(id)info position:(unsigned)position autosizeText:(BOOL)text;	// 0x300bcf29
- (id)_dividerImageForRight:(BOOL)right;	// 0x300be95d
- (BOOL)_needsUpdateOnSizeChange;	// 0x300d3c85
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30203dc5
- (void)_positionInfo;	// 0x300be4a5
- (id)_texturedFillImage;	// 0x301ca309
- (id)_texturedLeftCapImage;	// 0x301ca2c9
- (id)_texturedRightCapImage;	// 0x301cc4d1
- (void)_tileImage:(id)image inRect:(CGRect)rect;	// 0x301ca349
- (void)_updateBackgroundImage;	// 0x300bec71
- (void)_updateCustomTiledBackgroundImage;	// 0x302055f5
- (void)_updateTextColors;	// 0x300bd399
- (void)_updateTexturedBackgroundImage;	// 0x301c9aa1
- (void)animateAdd:(BOOL)add;	// 0x30203639
- (void)animateRemoveForWidth:(float)width;	// 0x302043a9
- (CGRect)contentRect;	// 0x300be6f5
- (CGSize)contentSize;	// 0x30115e15
// declared property getter: - (int)controlSize;	// 0x30202c35
- (void)dealloc;	// 0x30111d41
- (id)disabledTextColor;	// 0x30203709
- (void)encodeWithCoder:(id)coder;	// 0x30203c05
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x302035d1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3011ff85
// converted property getter: - (id)info;	// 0x301161e5
- (id)infoName;	// 0x30204a3d
- (void)insertDividerView;	// 0x300be7d9
// declared property getter: - (BOOL)isHighlighted;	// 0x300cdbb5
// declared property getter: - (BOOL)isMomentary;	// 0x30202c1d
// declared property getter: - (BOOL)isSelected;	// 0x300cdba1
- (void)setAutosizeText:(BOOL)text;	// 0x302036d1
- (void)setBarStyle:(int)style;	// 0x302047a1
- (void)setBounds:(CGRect)bounds;	// 0x302053b9
- (void)setContentOffset:(CGSize)offset;	// 0x301a45e9
// declared property setter: - (void)setControlSize:(int)size;	// 0x30203675
- (void)setEnabled:(BOOL)enabled;	// 0x301a472d
- (void)setFrame:(CGRect)frame;	// 0x300bce45
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x301cb1e1
// converted property setter: - (void)setInfo:(id)info;	// 0x300bcfd1
// declared property setter: - (void)setMomentary:(BOOL)momentary;	// 0x300bf2e5
- (void)setPosition:(unsigned)position;	// 0x300d3c29
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x300cd95d
- (void)setShowDivider:(BOOL)divider;	// 0x300d3da1
- (void)setTintColor:(id)color;	// 0x30204921
- (void)updateDividerViewToMatchSegment:(id)matchSegment;	// 0x300cd9bd
- (BOOL)useBlockyMagnificationInClassic;	// 0x30202c49
@end

