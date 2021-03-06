/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class NSString, UIWebPaginationInfo, UITextView, UIColor, UIFont;

@interface UISimpleTextPrintFormatter : UIPrintFormatter {
@private
	UITextView *_textView;	// 44 = 0x2c
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
}
@property(retain, nonatomic) UIColor *color;	// G=0x30374ce5; S=0x30374d05; @dynamic
@property(retain, nonatomic) UIFont *font;	// G=0x30374c59; S=0x30374c79; @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x30374bb1; S=0x30374bd1; @dynamic
@property(assign, nonatomic) int textAlignment;	// G=0x30374d61; S=0x30374d81; @dynamic
- (id)initWithText:(id)text;	// 0x30374969
- (int)_recalcPageCount;	// 0x30374e29
// declared property getter: - (id)color;	// 0x30374ce5
- (id)copyWithZone:(NSZone *)zone;	// 0x30374a05
- (void)dealloc;	// 0x30374b51
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x30374fc9
// declared property getter: - (id)font;	// 0x30374c59
- (CGRect)rectForPageAtIndex:(int)index;	// 0x30374f1d
- (void)removeFromPrintPageRenderer;	// 0x30374dd5
// declared property setter: - (void)setColor:(id)color;	// 0x30374d05
// declared property setter: - (void)setFont:(id)font;	// 0x30374c79
// declared property setter: - (void)setText:(id)text;	// 0x30374bd1
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x30374d81
// declared property getter: - (id)text;	// 0x30374bb1
// declared property getter: - (int)textAlignment;	// 0x30374d61
@end

