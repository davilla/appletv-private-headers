/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextField.h"
#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVIPv4AddressSelectionControl, BRTextControl;
@protocol BRTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressEntryControl : BRControl <BRTextField> {
@private
	ATVIPv4AddressSelectionControl *_addressPicker;	// 48 = 0x30
	BRTextControl *_labelLayer;	// 52 = 0x34
	CGSize _addressPickerSize;	// 56 = 0x38
	float _labelPadding;	// 64 = 0x40
	id<BRTextFieldDelegate> _textFieldDelegate;	// 68 = 0x44
}
- (id)init;	// 0x32fa5f0d
- (void)_handlePlayPauseButton:(id)button;	// 0x32fa6639
- (void)_layoutUI;	// 0x32fa6751
- (id)accessibilityLabel;	// 0x32fa6731
- (id)accessibilityTraits;	// 0x32fa66ad
- (BOOL)brEventAction:(id)action;	// 0x32fa6371
- (void)dealloc;	// 0x32fa5ff9
- (BOOL)isAccessibilityElement;	// 0x32fa66a9
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x32fa6059
- (void)reset;	// 0x32fa62e1
- (void)setDelegate:(id)delegate;	// 0x32fa6159
- (void)setFrame:(CGRect)frame;	// 0x32fa6329
- (void)setInitialAddress:(id)address;	// 0x32fa62c1
- (void)setLabel:(id)label;	// 0x32fa6169
- (void)setString:(id)string;	// 0x32fa6619
- (id)stringValue;	// 0x32fa65f9
@end

