/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIFont, NSString;

@interface UIPushButton : UIControl {
	NSString *_title;	// 68 = 0x44
	UIFont *_font;	// 72 = 0x48
	CGSize _shadowOffset;	// 76 = 0x4c
	CGSize _imageOffset;	// 84 = 0x54
	CGSize _titlePadding;	// 92 = 0x5c
	CFDictionaryRef _info;	// 100 = 0x64
	float _minimumFontPointSize;	// 104 = 0x68
	struct {
		unsigned selected : 1;
		unsigned drawShadow : 1;
		unsigned disableAutosizeToFit : 1;
		unsigned drawContentsCentered : 1;
		unsigned reverseShadowDirectionWhenHighlighted : 1;
		unsigned stretchBackground : 1;
		unsigned showPressFeedback : 1;
		unsigned disabledDimsImage : 1;
		unsigned alwaysHandleScrollerMouseEvent : 1;
		unsigned drawsImageOnRight : 1;
		unsigned drawContentsCenteredHorizontally : 1;
	} _pushButtonFlags;	// 108 = 0x6c
}
@property(assign) BOOL autosizesToFit;	// G=0x320eee39; S=0x31fbe9b1; converted property
@property(assign) BOOL drawContentsCentered;	// G=0x320eeef5; S=0x31fbea4d; converted property
@property(assign) BOOL drawsShadow;	// G=0x320eeeb1; S=0x31fbeff9; converted property
@property(retain) id image;	// G=0x32091b21; S=0x32098a41; converted property
@property(assign) CGSize imageOffset;	// G=0x320eeedd; S=0x320eee99; converted property
@property(assign) float minimumFontSize;	// G=0x320eee29; S=0x3208e095; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x320eee15; S=0x320136f1; converted property
@property(readonly, assign) CGSize shadowOffset;	// G=0x320eeec5; converted property
@property(retain) NSString *title;	// G=0x320ad119; S=0x31f91e7d; converted property
@property(retain) id titleColor;	// G=0x320eefa5; S=0x31fffc11; converted property
@property(retain) id titleFont;	// G=0x31fbf191; S=0x31fbee69; converted property
+ (id)defaultFont;	// 0x320ef045
- (id)initWithFrame:(CGRect)frame;	// 0x31fbe85d
- (id)initWithImage:(id)image;	// 0x31fbff35
- (id)initWithTitle:(id)title;	// 0x31fe6365
- (id)initWithTitle:(id)title autosizesToFit:(BOOL)fit;	// 0x31fe637d
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x320eee51
- (XXStruct_UUz0SD)_backgroundSlices:(CGSize)slices;	// 0x31fd31fd
- (XXStruct_Xx1ZfA)_currentButtonStateInfo;	// 0x320adbd5
- (void)_drawBezelPartInRect:(CGRect)rect;	// 0x31f948a5
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x31f94a71
- (void)_removePressFeedback:(id)feedback finished:(id)finished;	// 0x32004c69
- (id)_scriptingInfo;	// 0x320eef09
- (void)_setAlwaysHandleScrollerMouseEvent:(BOOL)event;	// 0x320eee65
- (void)_setNeedsDisplay:(XXStruct_Xx1ZfA)display;	// 0x320adc3d
// converted property getter: - (BOOL)autosizesToFit;	// 0x320eee39
- (id)backgroundForState:(unsigned)state;	// 0x31f94a51
- (id)currentBackground;	// 0x31f94a09
- (id)currentImage;	// 0x31f920e5
- (id)currentShadowColor;	// 0x31fbef99
- (id)currentTitleColor;	// 0x31fbede1
- (void)dealloc;	// 0x32004bed
- (void)drawButtonPart:(int)part inRect:(CGRect)rect;	// 0x31f94859
// converted property getter: - (BOOL)drawContentsCentered;	// 0x320eeef5
- (void)drawImageAtPoint:(CGPoint)point fraction:(float)fraction;	// 0x31f94eb9
- (void)drawRect:(CGRect)rect;	// 0x31f94809
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x31fd364d
// converted property getter: - (BOOL)drawsShadow;	// 0x320eeeb1
// converted property getter: - (id)image;	// 0x32091b21
- (id)imageForState:(unsigned)state;	// 0x31f92181
// converted property getter: - (CGSize)imageOffset;	// 0x320eeedd
- (BOOL)isPressed;	// 0x320ef02d
// converted property getter: - (BOOL)isSelected;	// 0x320eee15
// converted property getter: - (float)minimumFontSize;	// 0x320eee29
- (CGPoint)pressFeedbackPosition;	// 0x3207a0f5
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x31fbe9b1
- (void)setBackground:(id)background forState:(unsigned)state;	// 0x31fbec91
- (void)setDisabledDimsImage:(BOOL)image;	// 0x32013765
// converted property setter: - (void)setDrawContentsCentered:(BOOL)centered;	// 0x31fbea4d
- (void)setDrawContentsCenteredHorizontally:(BOOL)horizontally;	// 0x320eefed
- (void)setDrawsImageOnRight:(BOOL)right;	// 0x31fffc29
// converted property setter: - (void)setDrawsShadow:(BOOL)shadow;	// 0x31fbeff9
- (void)setEnabled:(BOOL)enabled;	// 0x320ef069
- (void)setFrame:(CGRect)frame;	// 0x31fbe965
- (void)setHighlighted:(BOOL)highlighted;	// 0x32079e3d
- (void)setHighlightedTitleColor:(id)color;	// 0x320eefbd
// converted property setter: - (void)setImage:(id)image;	// 0x32098a41
- (void)setImage:(id)image forState:(unsigned)state;	// 0x31f91fe1
// converted property setter: - (void)setImageOffset:(CGSize)offset;	// 0x320eee99
// converted property setter: - (void)setMinimumFontSize:(float)size;	// 0x3208e095
- (void)setNeedsDisplay;	// 0x31f91eed
- (void)setPressedImage:(id)image;	// 0x320eefd5
- (void)setReverseShadowDirectionWhenHighlighted:(BOOL)highlighted;	// 0x32085c69
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x320136f1
- (void)setShadowColor:(id)color;	// 0x31fbeed9
- (void)setShadowColor:(id)color forState:(unsigned)state;	// 0x31fbeef1
- (void)setShadowOffset:(float)offset;	// 0x32085c35
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x32078cd9
- (void)setStretchBackground:(BOOL)background;	// 0x31fbea05
// converted property setter: - (void)setTitle:(id)title;	// 0x31f91e7d
// converted property setter: - (void)setTitleColor:(id)color;	// 0x31fffc11
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x31fbed39
// converted property setter: - (void)setTitleFont:(id)font;	// 0x31fbee69
- (void)setTitlePadding:(CGSize)padding;	// 0x320eee81
- (void)setTracking:(BOOL)tracking;	// 0x3207a14d
- (id)shadowColorForState:(unsigned)state;	// 0x31fd38f1
// converted property getter: - (CGSize)shadowOffset;	// 0x320eeec5
- (void)sizeToFit;	// 0x31fbf015
- (unsigned)state;	// 0x31f9212d
// converted property getter: - (id)title;	// 0x320ad119
// converted property getter: - (id)titleColor;	// 0x320eefa5
- (id)titleColorForState:(unsigned)state;	// 0x31fbee49
// converted property getter: - (id)titleFont;	// 0x31fbf191
@end

