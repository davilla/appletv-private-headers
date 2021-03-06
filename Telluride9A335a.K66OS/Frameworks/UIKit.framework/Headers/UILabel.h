/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIColor, UIFont, NSString;

@interface UILabel : UIView <NSCoding> {
@private
	CGSize _size;	// 48 = 0x30
	NSString *_text;	// 56 = 0x38
	UIColor *_color;	// 60 = 0x3c
	UIColor *_highlightedColor;	// 64 = 0x40
	UIColor *_shadowColor;	// 68 = 0x44
	UIFont *_font;	// 72 = 0x48
	CGSize _shadowOffset;	// 76 = 0x4c
	float _minFontSize;	// 84 = 0x54
	float _actualFontSize;	// 88 = 0x58
	int _numberOfLines;	// 92 = 0x5c
	float _lastLineBaseline;	// 96 = 0x60
	int _lineSpacing;	// 100 = 0x64
	struct {
		unsigned lineBreakMode : 3;
		unsigned highlighted : 1;
		unsigned autosizeTextToFit : 1;
		unsigned autotrackTextToFit : 1;
		unsigned baselineAdjustment : 2;
		unsigned alignment : 2;
		unsigned enabled : 1;
		unsigned wordRoundingEnabled : 1;
		unsigned explicitAlignment : 1;
		unsigned marqueeEnabled : 1;
		unsigned marqueeRunable : 1;
		unsigned marqueeRequired : 1;
		unsigned drawsLetterpress : 1;
		unsigned drawsUnderline : 1;
	} _textLabelFlags;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) float _lastLineBaseline;	// G=0x33b8da15; 
@property(assign) float actualFontSize;	// G=0x33b8d885; S=0x33b8d815; converted property
@property(assign, nonatomic) BOOL adjustsFontSizeToFitWidth;	// G=0x33b8d7f1; S=0x33a09ff1; 
@property(assign, nonatomic) BOOL autotrackTextToFit;	// G=0x33b8d9ed; S=0x33a13a19; 
@property(assign, nonatomic) int baselineAdjustment;	// G=0x33b8da01; S=0x33aca171; 
@property(assign) BOOL centersHorizontally;	// G=0x33b8db8d; S=0x33b8db6d; converted property
@property(retain) UIColor *color;	// G=0x33b8db5d; S=0x33a09fe1; converted property
@property(assign) BOOL drawsLetterpress;	// G=0x33b8dae5; S=0x33aa7179; converted property
@property(assign) BOOL drawsUnderline;	// G=0x33b8db45; S=0x33b8dafd; converted property
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x3399d4f1; S=0x339d01a9; 
@property(retain, nonatomic) UIFont *font;	// G=0x3398a7f5; S=0x339a7181; 
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x3399d581; S=0x33a472f1; 
@property(retain, nonatomic) UIColor *highlightedTextColor;	// G=0x33ab668d; S=0x339ddbc1; 
@property(retain) id letterpressStyle;	// G=0x3399d4e1; S=0x339eaa01; converted property
@property(assign, nonatomic) int lineBreakMode;	// G=0x339d0439; S=0x3397f4a9; 
@property(assign, nonatomic) int lineSpacing;	// G=0x33b8d9dd; S=0x33a30245; 
@property(assign) BOOL marqueeRunning;	// G=0x3397f025; S=0x3397efad; converted property
@property(assign, nonatomic) float minimumFontSize;	// G=0x33b8d805; S=0x339f0a85; 
@property(assign, nonatomic) int numberOfLines;	// G=0x3397f499; S=0x339d044d; 
@property(assign) CGSize rawSize;	// G=0x33b8dbf1; S=0x339e8741; converted property
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x3398aa6d; S=0x339a2d0d; 
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x339d02fd; S=0x339d0319; 
@property(copy, nonatomic) NSString *text;	// G=0x3398aa35; S=0x3397f1e1; 
@property(assign, nonatomic) int textAlignment;	// G=0x3399c8c5; S=0x339c95a1; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x3399d595; S=0x339a2c45; 
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// S=0x339c60c5; @dynamic
+ (id)defaultFont;	// 0x339c5ed1
- (id)initWithCoder:(id)coder;	// 0x33b8d191
- (id)initWithFrame:(CGRect)frame;	// 0x339c5d55
- (BOOL)_allowAscentRounding;	// 0x339a7679
- (id)_attributes;	// 0x3398a83d
- (void)_commonInit;	// 0x339c5da1
- (void)_coordinateBeginTimeForMarqueeAnimations:(double)marqueeAnimations;	// 0x33ae7e81
- (id)_disabledFontColor;	// 0x33af8aed
- (void)_drawTextInRect:(CGRect)rect baselineCalculationOnly:(BOOL)only;	// 0x3398aaa5
- (void)_invalidateTextSize;	// 0x33997b01
// declared property getter: - (float)_lastLineBaseline;	// 0x33b8da15
- (float)_maximumMarqueeTextWidth;	// 0x33ae7c4d
- (id)_scriptingInfo;	// 0x33ac3f89
- (void)_setShadowUIOffset:(UIOffset)offset;	// 0x33a2b801
- (void)_setWordRoundingEnabled:(BOOL)enabled;	// 0x339c612d
- (id)_siblingMarqueeLabels;	// 0x33ae7d51
- (void)_startMarquee;	// 0x33ae7281
- (void)_startMarqueeIfNecessary;	// 0x3397f4fd
- (void)_stopMarqueeWithRedisplay:(BOOL)redisplay;	// 0x33ae8131
- (CGRect)_textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines includingShadow:(BOOL)shadow;	// 0x3398a315
// converted property getter: - (float)actualFontSize;	// 0x33b8d885
// declared property getter: - (BOOL)adjustsFontSizeToFitWidth;	// 0x33b8d7f1
// declared property getter: - (BOOL)autotrackTextToFit;	// 0x33b8d9ed
// declared property getter: - (int)baselineAdjustment;	// 0x33b8da01
// converted property getter: - (BOOL)centersHorizontally;	// 0x33b8db8d
// converted property getter: - (id)color;	// 0x33b8db5d
- (id)currentTextColor;	// 0x3399d505
- (void)dealloc;	// 0x339ea951
- (unsigned long long)defaultAccessibilityTraits;	// 0x33c065c1
- (void)drawContentsInRect:(CGRect)rect;	// 0x33b274b1
- (void)drawRect:(CGRect)rect;	// 0x3398a031
- (void)drawTextInRect:(CGRect)rect;	// 0x3398a07d
// converted property getter: - (BOOL)drawsLetterpress;	// 0x33b8dae5
// converted property getter: - (BOOL)drawsUnderline;	// 0x33b8db45
- (void)encodeWithCoder:(id)coder;	// 0x33b8d541
// declared property getter: - (id)font;	// 0x3398a7f5
// declared property getter: - (id)highlightedTextColor;	// 0x33ab668d
- (BOOL)isAccessibilityElementByDefault;	// 0x33c065b9
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c065bd
// declared property getter: - (BOOL)isEnabled;	// 0x3399d4f1
// declared property getter: - (BOOL)isHighlighted;	// 0x3399d581
- (BOOL)isTextFieldCenteredLabel;	// 0x3399d4d9
// converted property getter: - (id)letterpressStyle;	// 0x3399d4e1
// declared property getter: - (int)lineBreakMode;	// 0x339d0439
// declared property getter: - (int)lineSpacing;	// 0x33b8d9dd
// converted property getter: - (BOOL)marqueeRunning;	// 0x3397f025
// declared property getter: - (float)minimumFontSize;	// 0x33b8d805
// declared property getter: - (int)numberOfLines;	// 0x3397f499
// converted property getter: - (CGSize)rawSize;	// 0x33b8dbf1
// converted property setter: - (void)setActualFontSize:(float)size;	// 0x33b8d815
// declared property setter: - (void)setAdjustsFontSizeToFitWidth:(BOOL)fitWidth;	// 0x33a09ff1
// declared property setter: - (void)setAutotrackTextToFit:(BOOL)fit;	// 0x33a13a19
// declared property setter: - (void)setBaselineAdjustment:(int)adjustment;	// 0x33aca171
// converted property setter: - (void)setCentersHorizontally:(BOOL)horizontally;	// 0x33b8db6d
// converted property setter: - (void)setColor:(id)color;	// 0x33a09fe1
// converted property setter: - (void)setDrawsLetterpress:(BOOL)letterpress;	// 0x33aa7179
// converted property setter: - (void)setDrawsUnderline:(BOOL)underline;	// 0x33b8dafd
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x339d01a9
// declared property setter: - (void)setFont:(id)font;	// 0x339a7181
- (void)setFrame:(CGRect)frame;	// 0x3397f389
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x33a472f1
// declared property setter: - (void)setHighlightedTextColor:(id)color;	// 0x339ddbc1
// converted property setter: - (void)setLetterpressStyle:(id)style;	// 0x339eaa01
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x3397f4a9
// declared property setter: - (void)setLineSpacing:(int)spacing;	// 0x33a30245
- (void)setMarqueeEnabled:(BOOL)enabled;	// 0x3397f2cd
// converted property setter: - (void)setMarqueeRunning:(BOOL)running;	// 0x3397efad
// declared property setter: - (void)setMinimumFontSize:(float)size;	// 0x339f0a85
// declared property setter: - (void)setNumberOfLines:(int)lines;	// 0x339d044d
// converted property setter: - (void)setRawSize:(CGSize)size;	// 0x339e8741
// declared property setter: - (void)setShadowColor:(id)color;	// 0x339a2d0d
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x339d0319
// declared property setter: - (void)setText:(id)text;	// 0x3397f1e1
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x339c95a1
// declared property setter: - (void)setTextColor:(id)color;	// 0x339a2c45
// declared property setter: - (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x339c60c5
// declared property getter: - (id)shadowColor;	// 0x3398aa6d
// declared property getter: - (CGSize)shadowOffset;	// 0x339d02fd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x339e3295
// declared property getter: - (id)text;	// 0x3398aa35
// declared property getter: - (int)textAlignment;	// 0x3399c8c5
// declared property getter: - (id)textColor;	// 0x3399d595
- (CGRect)textRectForBounds:(CGRect)bounds;	// 0x33b8dbad
- (CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines;	// 0x3398a2cd
- (CGSize)textSize;	// 0x3399d1d9
- (CGSize)textSizeForWidth:(float)width;	// 0x3398a279
@end

