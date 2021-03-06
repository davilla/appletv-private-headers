/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import "_CTGlyphStorage.h"


@interface _CTNativeGlyphStorage : _CTGlyphStorage {
	const int *_attachCounts;	// 24 = 0x18
	unsigned _retainCount;	// 28 = 0x1c
	GlyphStack *_stack;	// 32 = 0x20
	long _capacity;	// 36 = 0x24
	void *_preallocatedStorage;	// 40 = 0x28
}
@property(readonly, assign) unsigned retainCount;	// G=0x34acc5c9; converted property
+ (id)newWithCount:(long)count;	// 0x34aa4ee9
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x34acc965
- (id)initWithCount:(long)count;	// 0x34aa4fc5
- (BOOL)_isDeallocating;	// 0x34acc5c5
- (BOOL)_tryRetain;	// 0x34acc5c1
- (long)attachmentCountAtIndex:(long)index;	// 0x34aa64f9
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x34acc4d9
- (void)dealloc;	// 0x34aaa535
- (void)finalize;	// 0x34acc5dd
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x34acc755
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x34acc8b5
- (void)popGlyphAtIndex:(long)index;	// 0x34acca69
- (void)prepareWithCapacity:(long)capacity preallocated:(bool)preallocated;	// 0x34aa5069
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x34acc71d
- (void)pushGlyphAtIndex:(long)index;	// 0x34acc9b1
- (oneway void)release;	// 0x34aa7a81
- (id)retain;	// 0x34aa64c1
// converted property getter: - (unsigned)retainCount;	// 0x34acc5c9
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x34acc6e5
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x34acc669
- (void)setCapacity:(long)capacity;	// 0x34accb35
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x34acc6cd
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x34acc6b5
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x34acc705
- (const int *)stringIndices;	// 0x34acc655
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x34acc7c1
@end

