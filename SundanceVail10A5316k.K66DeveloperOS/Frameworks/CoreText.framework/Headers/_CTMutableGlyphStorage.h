/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import "_CTGlyphStorageAdvanceLookup.h"
#import "_CTGlyphStorage.h"

@class CTGlyphStorageInterface;

__attribute__((visibility("hidden")))
@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {
@private
	CTGlyphStorageInterface *_interface;	// 24 = 0x18
}
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x33965c79
- (id)initWithInterface:(id)interface;	// 0x339658a9
- (long)attachmentCountAtIndex:(long)index;	// 0x33965a01
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x339659a5
- (CGSize)customAdvanceForIndex:(long)index;	// 0x339659d5
- (void)disposeGlyphStack;	// 0x33965cd9
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x33965b2d
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x33965b6d
- (void)popGlyphAtIndex:(long)index;	// 0x33965cb9
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x33965acd
- (void)pushGlyphAtIndex:(long)index;	// 0x33965c99
- (void *)refCon;	// 0x339659c5
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x33965a8d
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x33965a2d
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x33965a6d
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x33965a4d
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x33965aad
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x33965b4d
- (void)sync;	// 0x33965b9d
@end

