/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPreferencesTableCell.h"
#import "UITextFieldDelegate.h"

@class UILabel, UITextField;

@interface UIPreferencesTextTableCell : UIPreferencesTableCell <UITextFieldDelegate> {
@private
	UITextField *_textField;	// 104 = 0x68
	UILabel *_valueSuffixLabel;	// 108 = 0x6c
	float _textFieldOffset;	// 112 = 0x70
	SEL _returnAction;	// 116 = 0x74
}
@property(readonly, retain) UITextField *textField;	// G=0x30224c69; converted property
@property(assign) float textFieldOffset;	// G=0x30224c35; S=0x302255b5; converted property
@property(retain) id value;	// G=0x30224fe5; S=0x302250e5; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x302255e9
- (id)_disabledFontColor;	// 0x302254a1
- (void)_textFieldEndEditing:(id)editing;	// 0x30224e31
- (void)_textFieldEndEditingOnReturn:(id)aReturn;	// 0x30224dad
- (void)_textFieldStartEditing:(id)editing;	// 0x30224f51
- (void)_textValueChanged:(id)changed;	// 0x30224cc5
- (void)_updateSuffixFrame;	// 0x30225ac1
- (BOOL)becomeFirstResponder;	// 0x3022547d
- (BOOL)canBecomeFirstResponder;	// 0x30225459
- (void)dealloc;	// 0x302254f1
- (BOOL)hasValueSuffix;	// 0x30224c55
- (void)layoutSubviews;	// 0x3022587d
- (BOOL)resignFirstResponder;	// 0x30225435
- (void)setPlaceHolderValue:(id)value;	// 0x30224c79
- (void)setReturnAction:(SEL)action;	// 0x30224c45
// converted property setter: - (void)setTextFieldOffset:(float)offset;	// 0x302255b5
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x30225365
// converted property setter: - (void)setValue:(id)value;	// 0x302250e5
- (void)setValueSuffix:(id)suffix;	// 0x302251a9
// converted property getter: - (id)textField;	// 0x30224c69
- (void)textFieldClearButtonPressed:(id)pressed;	// 0x30224cad
- (void)textFieldDidBecomeFirstResponder:(id)textField;	// 0x3022507d
// converted property getter: - (float)textFieldOffset;	// 0x30224c35
// converted property getter: - (id)value;	// 0x30224fe5
- (id)valueTextLabel;	// 0x30224fa5
@end

