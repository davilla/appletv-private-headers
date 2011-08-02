/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

@interface UIKeyboardLanguageIndicator : UIView {
	UIImage *m_image;	// 44 = 0x2c
	float m_textSize;	// 48 = 0x30
	int m_style;	// 52 = 0x34
	BOOL m_portrait;	// 56 = 0x38
}
@property(assign, nonatomic, getter=isPortrait) BOOL portrait;	// G=0x30240b41; S=0x30240b51; @synthesize=m_portrait
@property(assign, nonatomic) float textSize;	// G=0x30240b2d; S=0x30240b81; 
- (id)initWithFrame:(CGRect)frame;	// 0x30240c35
- (void)dealloc;	// 0x30240bed
- (void)drawRect:(CGRect)rect;	// 0x30240cb5
- (void)fade;	// 0x30240b3d
// declared property getter: - (BOOL)isPortrait;	// 0x30240b41
- (void)setBackgroundImage:(id)image;	// 0x30240ba5
// declared property setter: - (void)setPortrait:(BOOL)portrait;	// 0x30240b51
- (void)setStyle:(int)style;	// 0x30240b61
// declared property setter: - (void)setTextSize:(float)size;	// 0x30240b81
// declared property getter: - (float)textSize;	// 0x30240b2d
@end

