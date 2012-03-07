/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, UIImage;

@interface UIClipCornerView : UIView {
	float _cornerRadius;	// 48 = 0x30
	int _rectCorner;	// 52 = 0x34
	CGPoint _pathOrigin;	// 56 = 0x38
	CGPathRef _clipPath;	// 64 = 0x40
	UIImage *_backgroundImage;	// 68 = 0x44
	UIColor *_cornerMaskColor;	// 72 = 0x48
	CGRect _backgroundImageSubrect;	// 76 = 0x4c
	CGAffineTransform _backgroundTransform;	// 92 = 0x5c
	BOOL _useSnapshot;	// 116 = 0x74
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x33c99641; S=0x33c9937d; @synthesize=_backgroundImage
@property(assign, nonatomic) CGRect backgroundImageSubrect;	// G=0x33c99661; S=0x33c9942d; @synthesize=_backgroundImageSubrect
@property(retain, nonatomic) UIColor *cornerMaskColor;	// G=0x33c99651; S=0x33c993d5; @synthesize=_cornerMaskColor
@property(assign, nonatomic) float cornerRadius;	// G=0x33c99631; S=0x33c99079; @synthesize=_cornerRadius
@property(assign, nonatomic) BOOL useSnapshot;	// G=0x33c99685; S=0x33c9949d; @synthesize=_useSnapshot
- (id)initWithCornerRadius:(float)cornerRadius forCorner:(int)corner;	// 0x33c98f5d
- (void)_updateCornerPath;	// 0x33c9893d
- (void)_updateSnapshot;	// 0x33c98a39
// declared property getter: - (id)backgroundImage;	// 0x33c99641
// declared property getter: - (CGRect)backgroundImageSubrect;	// 0x33c99661
// declared property getter: - (id)cornerMaskColor;	// 0x33c99651
// declared property getter: - (float)cornerRadius;	// 0x33c99631
- (void)dealloc;	// 0x33c995c9
- (void)drawRect:(CGRect)rect;	// 0x33c990cd
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x33c9937d
// declared property setter: - (void)setBackgroundImageSubrect:(CGRect)subrect;	// 0x33c9942d
// declared property setter: - (void)setCornerMaskColor:(id)color;	// 0x33c993d5
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x33c99079
- (void)setFrame:(CGRect)frame;	// 0x33c994e1
// declared property setter: - (void)setUseSnapshot:(BOOL)snapshot;	// 0x33c9949d
// declared property getter: - (BOOL)useSnapshot;	// 0x33c99685
@end
