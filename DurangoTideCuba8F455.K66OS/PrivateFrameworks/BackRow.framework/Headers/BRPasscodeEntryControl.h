/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"
#import "BRTextField.h"

@class BRDeviceKeyboardMessage, BRPasscodeSelectionLayer;
@protocol BRTextFieldDelegate;

@interface BRPasscodeEntryControl : BRControl <BRTextField> {
@private
	BRPasscodeSelectionLayer *_passcodeLayer;	// 44 = 0x2c
	unsigned _numDigits;	// 48 = 0x30
	BOOL _isUserEditable;	// 52 = 0x34
	CGSize _passcodeLayerSize;	// 56 = 0x38
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 64 = 0x40
	id<BRTextFieldDelegate> _textFieldDelegate;	// 68 = 0x44
}
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x32f98069
- (void)_handlePlayPauseButton:(id)button;	// 0x32f97a41
- (void)_layoutUI;	// 0x32f979ed
- (id)accessibilityLabel;	// 0x32f97429
- (id)accessibilityTraits;	// 0x32f97449
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32f97f01
- (BOOL)brEventAction:(id)action;	// 0x32f97be5
- (void)controlWasFocused;	// 0x32f97b69
- (void)controlWasUnfocused;	// 0x32f97b2d
- (void)dealloc;	// 0x32f97fe5
- (void)deviceKeyboardClose;	// 0x32f97971
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x32f974c1
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x32f97869
- (BOOL)isAccessibilityElement;	// 0x32f97425
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x32f9832d
- (void)reset;	// 0x32f97f15
- (void)setDelegate:(id)delegate;	// 0x32f97415
- (void)setFrame:(CGRect)frame;	// 0x32f97ea5
- (void)setInitialPasscode:(id)passcode;	// 0x32f97fa5
- (void)setKeyboardTitle:(id)title;	// 0x32f97af9
- (void)setString:(id)string;	// 0x32f97ab9
- (void)shake;	// 0x32f981b9
- (id)stringValue;	// 0x32f97ad9
- (float)widthOfDigitsFromScreenSize:(CGSize)screenSize;	// 0x32f97fc5
@end

