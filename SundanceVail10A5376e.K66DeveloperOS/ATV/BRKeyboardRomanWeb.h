/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRImageControl, BRButtonControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanWeb : BRKeyboard {
	BRButtonControl *_previousButton;	// 48 = 0x30
	BRButtonControl *_nextButton;	// 52 = 0x34
	BRButtonControl *_autoFillButton;	// 56 = 0x38
	BRButtonControl *_clearButton;	// 60 = 0x3c
	BRImageControl *_rowDividerImageControl;	// 64 = 0x40
}
- (id)init;	// 0x2f8a5d
- (void)_autoFillButtonClick:(id)click;	// 0x2f9525
- (void)_generateKeyEventWithCharacters:(id)characters;	// 0x2f93d9
- (id)_keyboardDataFileName;	// 0x2f8bb1
- (float)_mainKeysVerticalSpacing;	// 0x2f93d1
- (void)_nextButtonClick:(id)click;	// 0x2f94dd
- (int)_numberOfMainKeyRows;	// 0x2f93cd
- (float)_preferredGlyphHeight:(id)height;	// 0x2f8bd5
- (float)_preferredGlyphWidth:(id)width;	// 0x2f8bcd
- (void)_prevousButtonClick:(id)click;	// 0x2f9495
- (BOOL)canShowLanguageSwitchButton;	// 0x2f93c5
- (BOOL)canWrapVertically;	// 0x2f92e1
- (id)customizeTextEntryControls:(id)controls;	// 0x2f8bdd
- (void)dealloc;	// 0x2f8ab9
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x2f8b69
- (id)name;	// 0x2f8b59
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x2f92e5
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x2f9211
- (BOOL)requiresTextFieldLabel;	// 0x2f93c9
@end
