/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class UIColor, NSString, UIFont;

@interface SBTextDisplayView : UIView {
	NSString *_text;	// 48 = 0x30
	UIFont *_font;	// 52 = 0x34
	UIColor *_fontColor;	// 56 = 0x38
}
- (id)initWithWidth:(float)width font:(id)font fontColor:(id)color;	// 0x35e86795
- (id)_scriptingInfo;	// 0x35e86835
- (void)_updateText;	// 0x35e86a3d
- (void)dealloc;	// 0x35e86ae5
- (void)drawRect:(CGRect)rect;	// 0x35e86895
- (void)setFont:(id)font;	// 0x35e8698d
- (void)setFontColor:(id)color;	// 0x35e86935
- (void)setText:(id)text;	// 0x35e869e5
@end

