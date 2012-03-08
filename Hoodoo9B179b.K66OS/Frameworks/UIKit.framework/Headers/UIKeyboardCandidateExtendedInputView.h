/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIKeyboardCandidateExtendedInputTextField, UIKeyboardCandidateArrowButton;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateExtendedInputView : UIView {
@private
	UIKeyboardCandidateExtendedInputTextField *_textField;	// 48 = 0x30
	UIKeyboardCandidateArrowButton *_arrowButton;	// 52 = 0x34
}
@property(retain, nonatomic) UIKeyboardCandidateArrowButton *arrowButton;	// G=0x3326575d; S=0x3326576d; @synthesize=_arrowButton
@property(retain, nonatomic) UIKeyboardCandidateExtendedInputTextField *textField;	// G=0x33265729; S=0x33265739; @synthesize=_textField
- (id)initWithFrame:(CGRect)frame;	// 0x332653d9
// declared property getter: - (id)arrowButton;	// 0x3326575d
- (void)dealloc;	// 0x332654ad
- (void)drawRect:(CGRect)rect;	// 0x33265525
- (void)layoutArrowButton;	// 0x332655e1
// declared property setter: - (void)setArrowButton:(id)button;	// 0x3326576d
- (void)setFrame:(CGRect)frame;	// 0x332656e1
// declared property setter: - (void)setTextField:(id)field;	// 0x33265739
// declared property getter: - (id)textField;	// 0x33265729
@end
