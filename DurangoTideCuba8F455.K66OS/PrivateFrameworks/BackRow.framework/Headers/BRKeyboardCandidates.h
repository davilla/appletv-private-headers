/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRKeyboardRomanSquare.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyboardCandidates : BRKeyboardRomanSquare {
@private
	NSArray *_rawKeyboardDataStrings;	// 40 = 0x28
}
- (id)_keyboardDataFileName;	// 0x32f83289
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x32f82cf1
- (float)_mainKeysVerticalSpacing;	// 0x32f82ced
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x32f82d7d
- (int)_numberOfMainKeyRows;	// 0x32f82df9
- (float)_preferredGlyphHeight:(id)height;	// 0x32f82ce1
- (id)_rawKeyboardData;	// 0x32f832a1
- (int)_scrollDirectionForMainKeys;	// 0x32f82ce9
- (id)actionKeyRows;	// 0x32f82cd9
- (id)actionKeysContainer;	// 0x32f82cdd
- (id)attributesForTextFieldLabel;	// 0x32f82cc9
- (id)bottomRow;	// 0x32f82e21
- (void)dealloc;	// 0x32f83241
- (id)mainKeysContainer;	// 0x32f8315d
- (id)name;	// 0x32f82ccd
- (void)setRawKeyboardDataStrings:(id)strings;	// 0x32f83031
- (void)updateMainKeysContainer:(id)container;	// 0x32f82e45
@end

