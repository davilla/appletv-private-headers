/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PINView.h"

@class UIPasscodeField;

@interface NumericPINView : PINView {
	UIPasscodeField *_passcodeField;	// 108 = 0x6c
}
@property(retain) id stringValue;	// G=0x34db8d85; S=0x34db8da5; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x34db881d
- (void)appendString:(id)string;	// 0x34db8de5
- (void)deleteLastCharacter;	// 0x34db8dc5
- (void)hidePasscodeField:(BOOL)field;	// 0x34db8c75
- (void)layoutSubviews;	// 0x34db8a79
// converted property setter: - (void)setStringValue:(id)value;	// 0x34db8da5
// converted property getter: - (id)stringValue;	// 0x34db8d85
@end
