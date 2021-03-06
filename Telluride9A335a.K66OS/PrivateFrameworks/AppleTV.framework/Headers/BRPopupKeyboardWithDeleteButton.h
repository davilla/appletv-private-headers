/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRPopupKeyboardControl;

__attribute__((visibility("hidden")))
@interface BRPopupKeyboardWithDeleteButton : BRKeyboard {
@private
	BRPopupKeyboardControl *_popupKeyboardControl;	// 48 = 0x30
}
- (id)_filterRawKeyboardData:(id)data;	// 0x342242fd
- (id)_keyboardDataFileName;	// 0x342248d5
- (int)_numberOfActionKeyColumns;	// 0x3422492d
- (int)_numberOfActionKeyRows;	// 0x34224929
- (int)_numberOfMainKeyColumns;	// 0x34224901
- (int)_numberOfMainKeyRows;	// 0x342248fd
- (void)dealloc;	// 0x3422400d
- (id)keyboardControl;	// 0x34224059
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x342242a9
@end

