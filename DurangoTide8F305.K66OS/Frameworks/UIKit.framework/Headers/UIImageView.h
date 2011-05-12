/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage, NSArray;

@interface UIImageView : UIView {
@private
	id _storage;	// 44 = 0x2c
}
@property(assign, getter=isAnimating) BOOL animating;	// G=0x31fa66ed; S=0x320fe6ad; converted property
@property(assign, nonatomic) double animationDuration;	// G=0x320fe849; S=0x320fe8b9; 
@property(copy, nonatomic) NSArray *animationImages;	// G=0x3204a249; S=0x320fee41; 
@property(assign, nonatomic) int animationRepeatCount;	// G=0x320fe6f5; S=0x320fe761; 
@property(assign, nonatomic) int drawMode;	// G=0x31fa6485; S=0x31fb623d; @dynamic
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x31fa5f85; S=0x3202aee9; 
@property(copy, nonatomic) NSArray *highlightedAnimationImages;	// G=0x3202b0e1; S=0x320fe9ad; 
@property(retain, nonatomic) UIImage *highlightedImage;	// G=0x3202b079; S=0x32006ed9; 
@property(retain, nonatomic) UIImage *image;	// G=0x31f7a12d; S=0x31fa5ff1; 
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// @dynamic
- (id)initWithCoder:(id)coder;	// 0x320ff045
- (id)initWithFrame:(CGRect)frame;	// 0x31fb60d5
- (id)initWithImage:(id)image;	// 0x31fa5d9d
- (id)initWithImage:(id)image highlightedImage:(id)image2;	// 0x3200bf99
- (BOOL)_canDrawContent;	// 0x31fa5e39
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x320febd5
- (BOOL)_shouldDrawImage:(id)image;	// 0x31fa6645
- (void)_updateState;	// 0x31fa6149
// declared property getter: - (double)animationDuration;	// 0x320fe849
// declared property getter: - (id)animationImages;	// 0x3204a249
// declared property getter: - (int)animationRepeatCount;	// 0x320fe6f5
- (void)dealloc;	// 0x31ff86f9
- (unsigned long long)defaultAccessibilityTraits;	// 0x3218c549
// declared property getter: - (int)drawMode;	// 0x31fa6485
- (void)drawRect:(CGRect)rect;	// 0x320716c9
- (void)encodeWithCoder:(id)coder;	// 0x320fec31
// declared property getter: - (id)highlightedAnimationImages;	// 0x3202b0e1
// declared property getter: - (id)highlightedImage;	// 0x3202b079
// declared property getter: - (id)image;	// 0x31f7a12d
- (CGImageRef)imageRef;	// 0x32072085
- (BOOL)isAccessibilityElementByDefault;	// 0x3218c3c1
// converted property getter: - (BOOL)isAnimating;	// 0x31fa66ed
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3218c3c5
// declared property getter: - (BOOL)isHighlighted;	// 0x31fa5f85
// converted property setter: - (void)setAnimating:(BOOL)animating;	// 0x320fe6ad
// declared property setter: - (void)setAnimationDuration:(double)duration;	// 0x320fe8b9
// declared property setter: - (void)setAnimationImages:(id)images;	// 0x320fee41
// declared property setter: - (void)setAnimationRepeatCount:(int)count;	// 0x320fe761
- (void)setBackgroundColor:(id)color;	// 0x3202afe9
- (void)setBounds:(CGRect)bounds;	// 0x32002f2d
- (void)setCGImageRef:(CGImageRef)ref;	// 0x320fe6d1
// declared property setter: - (void)setDrawMode:(int)mode;	// 0x31fb623d
- (void)setFrame:(CGRect)frame;	// 0x31f7925d
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3202aee9
// declared property setter: - (void)setHighlightedAnimationImages:(id)images;	// 0x320fe9ad
// declared property setter: - (void)setHighlightedImage:(id)image;	// 0x32006ed9
// declared property setter: - (void)setImage:(id)image;	// 0x31fa5ff1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3204a32d
- (void)startAnimating;	// 0x320ff375
- (void)stopAnimating;	// 0x31ff8755
- (BOOL)useBlockyMagnificationInClassic;	// 0x320fe6a9
@end

