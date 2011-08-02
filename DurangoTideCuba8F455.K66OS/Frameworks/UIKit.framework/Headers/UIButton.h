/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class UIColor, UIImage, UIFont, UILabel, NSString, UIImageView;

@interface UIButton : UIControl <NSCoding> {
@private
	CFDictionaryRef _contentLookup;	// 68 = 0x44
	UIEdgeInsets _contentEdgeInsets;	// 72 = 0x48
	UIEdgeInsets _titleEdgeInsets;	// 88 = 0x58
	UIEdgeInsets _imageEdgeInsets;	// 104 = 0x68
	UIImageView *_backgroundView;	// 120 = 0x78
	UIImageView *_imageView;	// 124 = 0x7c
	UILabel *_titleView;	// 128 = 0x80
	BOOL _initialized;	// 132 = 0x84
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
	} _buttonFlags;	// 133 = 0x85
}
@property(assign, nonatomic) BOOL adjustsImageWhenDisabled;	// G=0x30120bb1; S=0x300b5c71; @dynamic
@property(assign, nonatomic) BOOL adjustsImageWhenHighlighted;	// G=0x30120b9d; S=0x300b5c1d; @dynamic
@property(assign) BOOL autosizesToFit;	// G=0x300b5429; S=0x300b6a0d; converted property
@property(readonly, assign, nonatomic) int buttonType;	// G=0x30277031; 
@property(assign, nonatomic) UIEdgeInsets contentEdgeInsets;	// G=0x300b4219; S=0x300b687d; @dynamic
@property(readonly, retain, nonatomic) UIImage *currentBackgroundImage;	// G=0x30277371; 
@property(readonly, retain, nonatomic) UIImage *currentImage;	// G=0x3017eb45; 
@property(readonly, retain, nonatomic) NSString *currentTitle;	// G=0x3017eafd; 
@property(readonly, retain, nonatomic) UIColor *currentTitleColor;	// G=0x30277401; 
@property(readonly, retain, nonatomic) UIColor *currentTitleShadowColor;	// G=0x302773b9; 
@property(retain, nonatomic) UIFont *font;	// G=0x301c7671; S=0x30101e1d; 
@property(assign, nonatomic) UIEdgeInsets imageEdgeInsets;	// G=0x300b9939; S=0x300b6da5; @dynamic
@property(readonly, retain, nonatomic) UIImageView *imageView;	// G=0x30277471; 
@property(assign, nonatomic) int lineBreakMode;	// G=0x3027735d; S=0x30277349; 
@property(assign, nonatomic) BOOL reversesTitleShadowWhenHighlighted;	// G=0x30277035; S=0x302774c5; @dynamic
@property(assign, nonatomic) BOOL showsTouchWhenHighlighted;	// G=0x30174649; S=0x30170e71; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30277049; S=0x3027704d; @dynamic
@property(assign, nonatomic) UIEdgeInsets titleEdgeInsets;	// G=0x300d0169; S=0x301c7985; @dynamic
@property(readonly, retain, nonatomic) UILabel *titleLabel;	// G=0x3016f561; 
@property(assign, nonatomic) CGSize titleShadowOffset;	// G=0x30277f15; S=0x30102001; 
+ (id)_defaultContentForType:(int)type andState:(unsigned)state;	// 0x30101991
+ (id)buttonWithType:(int)type;	// 0x30101465
- (id)initWithCoder:(id)coder;	// 0x30277f2d
- (id)initWithFrame:(CGRect)frame;	// 0x300b37c5
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x30277311
- (id)_archivableContent:(id *)content;	// 0x3027871d
- (id)_backgroundForState:(unsigned)state usesBackgroundForNormalState:(BOOL *)normalState;	// 0x300b7a25
- (int)_buttonType;	// 0x301c8299
- (BOOL)_canHaveTitle;	// 0x3016f5a9
- (id)_contentForState:(unsigned)state;	// 0x3009615d
- (id)_font;	// 0x300d01ad
- (id)_imageForState:(unsigned)state usesImageForNormalState:(BOOL *)normalState;	// 0x30096109
- (int)_lineBreakMode;	// 0x300d0185
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30277725
- (id)_scriptingInfo;	// 0x3017ea0d
- (void)_setBackground:(id)background forStates:(unsigned)states;	// 0x300b6531
- (void)_setButtonType:(int)type;	// 0x30101a29
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x300b3cf9
- (void)_setFont:(id)font;	// 0x300b3ee1
- (void)_setImage:(id)image forStates:(unsigned)states;	// 0x300b5a45
- (void)_setLineBreakMode:(int)mode;	// 0x301c761d
- (void)_setShadowColor:(id)color forStates:(unsigned)states;	// 0x300b3d8d
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)_set;	// 0x301c6a85
- (void)_setTitle:(id)title forStates:(unsigned)states;	// 0x300bb475
- (void)_setTitleColor:(id)color forStates:(unsigned)states;	// 0x300b3bf1
- (void)_setTitleShadowOffset:(CGSize)offset;	// 0x300b5465
- (id)_setupBackgroundView;	// 0x300b8fa9
- (void)_setupImageView;	// 0x300b9481
- (void)_setupTitleView;	// 0x300b3f99
- (id)_shadowColorForState:(unsigned)state;	// 0x300d0119
- (void)_takeContentFromArchivableContent:(id)archivableContent overrides:(id)overrides;	// 0x30278575
- (void)_titleAttributesChanged;	// 0x300b53ed
- (id)_titleColorForState:(unsigned)state;	// 0x300d00c9
- (id)_titleForState:(unsigned)state;	// 0x300b4589
- (CGSize)_titleShadowOffset;	// 0x30277c21
// declared property getter: - (BOOL)adjustsImageWhenDisabled;	// 0x30120bb1
// declared property getter: - (BOOL)adjustsImageWhenHighlighted;	// 0x30120b9d
// converted property getter: - (BOOL)autosizesToFit;	// 0x300b5429
- (id)backgroundImageForState:(unsigned)state;	// 0x300b7a0d
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x300b90b9
// declared property getter: - (int)buttonType;	// 0x30277031
// declared property getter: - (UIEdgeInsets)contentEdgeInsets;	// 0x300b4219
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x300b41d1
- (void)crossfadeAnimationDidStop:(id)crossfadeAnimation finished:(id)finished context:(void *)context;	// 0x3027722d
- (void)crossfadeToImage:(id)image forState:(unsigned)state;	// 0x30277c6d
// declared property getter: - (id)currentBackgroundImage;	// 0x30277371
// declared property getter: - (id)currentImage;	// 0x3017eb45
// declared property getter: - (id)currentTitle;	// 0x3017eafd
// declared property getter: - (id)currentTitleColor;	// 0x30277401
// declared property getter: - (id)currentTitleShadowColor;	// 0x302773b9
- (void)dealloc;	// 0x3014a869
- (unsigned long long)defaultAccessibilityTraits;	// 0x3028f585
- (void)encodeWithCoder:(id)coder;	// 0x30278939
// declared property getter: - (id)font;	// 0x301c7671
// declared property getter: - (UIEdgeInsets)imageEdgeInsets;	// 0x300b9939
- (id)imageForState:(unsigned)state;	// 0x300960f1
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x300b95e9
// declared property getter: - (id)imageView;	// 0x30277471
- (BOOL)isAccessibilityElementByDefault;	// 0x3028f3b1
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3028f3b5
- (void)layoutSubviews;	// 0x300b8a31
// declared property getter: - (int)lineBreakMode;	// 0x3027735d
- (CGPoint)pressFeedbackPosition;	// 0x300b9a31
// declared property getter: - (BOOL)reversesTitleShadowWhenHighlighted;	// 0x30277035
// declared property setter: - (void)setAdjustsImageWhenDisabled:(BOOL)disabled;	// 0x300b5c71
// declared property setter: - (void)setAdjustsImageWhenHighlighted:(BOOL)highlighted;	// 0x300b5c1d
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x300b6a0d
- (void)setBackgroundImage:(id)image forState:(unsigned)state;	// 0x30101d0d
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x300b64e5
- (void)setBounds:(CGRect)bounds;	// 0x300bb615
// declared property setter: - (void)setContentEdgeInsets:(UIEdgeInsets)insets;	// 0x300b687d
- (void)setContentHorizontalAlignment:(int)alignment;	// 0x300b5b75
- (void)setDisabledDimsImage:(BOOL)image;	// 0x300b5cc5
- (void)setEnabled:(BOOL)enabled;	// 0x300b6991
// declared property setter: - (void)setFont:(id)font;	// 0x30101e1d
- (void)setFrame:(CGRect)frame;	// 0x300b3b31
- (void)setHighlighted:(BOOL)highlighted;	// 0x300f824d
- (void)setImage:(id)image forState:(unsigned)state;	// 0x300f389d
- (void)setImage:(id)image forStates:(unsigned)states;	// 0x300b59f9
// declared property setter: - (void)setImageEdgeInsets:(UIEdgeInsets)insets;	// 0x300b6da5
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x30277349
// declared property setter: - (void)setReversesTitleShadowWhenHighlighted:(BOOL)highlighted;	// 0x302774c5
- (void)setSelected:(BOOL)selected;	// 0x301745c9
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x302772f9
// declared property setter: - (void)setShowsTouchWhenHighlighted:(BOOL)highlighted;	// 0x30170e71
// declared property setter: - (void)setTintColor:(id)color;	// 0x3027704d
- (void)setTitle:(id)title forState:(unsigned)state;	// 0x30102015
- (void)setTitle:(id)title forStates:(unsigned)states;	// 0x300bb429
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x30101e31
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x300b6955
// declared property setter: - (void)setTitleEdgeInsets:(UIEdgeInsets)insets;	// 0x301c7985
- (void)setTitleShadowColor:(id)color forState:(unsigned)state;	// 0x30101f19
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x300b543d
// declared property setter: - (void)setTitleShadowOffset:(CGSize)offset;	// 0x30102001
// declared property getter: - (BOOL)showsTouchWhenHighlighted;	// 0x30174649
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x300edcad
// declared property getter: - (id)tintColor;	// 0x30277049
- (id)titleColorForState:(unsigned)state;	// 0x3027745d
// declared property getter: - (UIEdgeInsets)titleEdgeInsets;	// 0x300d0169
- (id)titleForState:(unsigned)state;	// 0x300b6c19
// declared property getter: - (id)titleLabel;	// 0x3016f561
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x300b4235
- (id)titleShadowColorForState:(unsigned)state;	// 0x30277449
// declared property getter: - (CGSize)titleShadowOffset;	// 0x30277f15
@end

