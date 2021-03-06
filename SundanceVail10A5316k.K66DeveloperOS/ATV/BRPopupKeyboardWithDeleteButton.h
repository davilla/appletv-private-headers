/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRPopupKeyboardControl;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardWithDeleteButton : BRKeyboard {
	BRPopupKeyboardControl *_popupKeyboardControl;	// 48 = 0x30
}
- (id)_filterRawKeyboardData:(id)data;	// 0x2e0895
- (id)_keyboardDataFileName;	// 0x2e0e61
- (int)_numberOfActionKeyColumns;	// 0x2e0eb9
- (int)_numberOfActionKeyRows;	// 0x2e0eb5
- (int)_numberOfMainKeyColumns;	// 0x2e0e8d
- (int)_numberOfMainKeyRows;	// 0x2e0e89
- (void)dealloc;	// 0x2e0589
- (id)keyboardControl;	// 0x2e05d5
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x2e0841
@end

