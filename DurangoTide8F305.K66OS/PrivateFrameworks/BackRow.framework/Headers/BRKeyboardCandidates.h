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
- (id)_keyboardDataFileName;	// 0x329841a5
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x32983c0d
- (float)_mainKeysVerticalSpacing;	// 0x32983c09
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x32983c99
- (int)_numberOfMainKeyRows;	// 0x32983d15
- (float)_preferredGlyphHeight:(id)height;	// 0x32983bfd
- (id)_rawKeyboardData;	// 0x329841bd
- (int)_scrollDirectionForMainKeys;	// 0x32983c05
- (id)actionKeyRows;	// 0x32983bf5
- (id)actionKeysContainer;	// 0x32983bf9
- (id)attributesForTextFieldLabel;	// 0x32983be5
- (id)bottomRow;	// 0x32983d3d
- (void)dealloc;	// 0x3298415d
- (id)mainKeysContainer;	// 0x32984079
- (id)name;	// 0x32983be9
- (void)setRawKeyboardDataStrings:(id)strings;	// 0x32983f4d
- (void)updateMainKeysContainer:(id)container;	// 0x32983d61
@end

