/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRPopupKeyboardControl;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardWithDeleteButton : BRKeyboard {
	BRPopupKeyboardControl *_popupKeyboardControl;	// 48 = 0x30
}
- (id)_filterRawKeyboardData:(id)data;	// 0x2f9dbd
- (id)_keyboardDataFileName;	// 0x2fa389
- (int)_numberOfActionKeyColumns;	// 0x2fa3e1
- (int)_numberOfActionKeyRows;	// 0x2fa3dd
- (int)_numberOfMainKeyColumns;	// 0x2fa3b5
- (int)_numberOfMainKeyRows;	// 0x2fa3b1
- (void)dealloc;	// 0x2f9ab1
- (id)keyboardControl;	// 0x2f9afd
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x2f9d69
@end

