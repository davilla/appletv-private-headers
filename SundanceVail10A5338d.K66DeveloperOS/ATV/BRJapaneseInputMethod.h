/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRInputMethod.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRJapaneseInputMethod : BRInputMethod {
	NSString *_mostRecentCandidateBaseCharacter;	// 32 = 0x20
}
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x2d9e79
- (id)candidates;	// 0x2d9e75
- (void)dealloc;	// 0x2d9dd5
- (BOOL)inputText:(id)text;	// 0x2d9e71
- (id)isoLanguageCode;	// 0x2d9e2d
- (id)name;	// 0x2d9e21
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x2d9e39
@end

