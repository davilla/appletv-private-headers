/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "NSCopying.h"

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPDisposable> {
	unsigned length;	// 4 = 0x4
	CPPDFChar **charArray;	// 8 = 0x8
	unsigned previousSize;	// 12 = 0xc
	unsigned size;	// 16 = 0x10
	CPMemoryOwner *sharedMemory;	// 20 = 0x14
	BOOL wasMerged;	// 24 = 0x18
}
@property(readonly, assign) CPPDFChar **charArray;	// G=0x3029a6b1; converted property
@property(readonly, assign) unsigned length;	// G=0x3029a6a1; converted property
@property(readonly, assign) BOOL wasMerged;	// G=0x3029a6c1; converted property
- (id)initWithChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x3029afe1
- (id)initWithSizeFor:(unsigned)aFor;	// 0x3029b0bd
- (void)addChar:(CPPDFChar *)aChar;	// 0x3029aef1
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x3029ae7d
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3029ade9
- (void)addCharsFromSequence:(id)sequence;	// 0x3029b201
- (CGRect)bounds;	// 0x3029b731
- (CGRect)boundsFrom:(unsigned)from length:(unsigned)length;	// 0x3029b25d
// converted property getter: - (CPPDFChar **)charArray;	// 0x3029a6b1
- (CPPDFChar *)charAtIndex:(unsigned)index;	// 0x3029b601
- (void)copyToSubsequence:(id)subsequence from:(unsigned)from length:(unsigned)length;	// 0x3029b885
- (void)copyToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3029aa85
- (id)copyWithZone:(NSZone *)zone;	// 0x3029b121
- (void)dealloc;	// 0x3029af4d
- (void)dispose;	// 0x3029a93d
- (void)finalize;	// 0x3029afa5
// converted property getter: - (unsigned)length;	// 0x3029a6a1
- (BOOL)map:(/*function-pointer*/ void *)map passing:(void *)passing;	// 0x3029a6d1
- (BOOL)map:(/*function-pointer*/ void *)map whereNeighborsWith:(id)with passing:(void *)passing;	// 0x3029a805
- (BOOL)mapToPairs:(/*function-pointer*/ void *)pairs passing:(void *)passing;	// 0x3029a765
- (BOOL)mapToPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x3029a7b1
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index from:(unsigned)from length:(unsigned)length passing:(void *)passing;	// 0x3029b35d
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x3029a719
- (void)merge:(id)merge by:(/*function-pointer*/ void *)by;	// 0x3029b921
- (void)mergeByAnchorXIncreasingYDecreasing:(id)decreasing;	// 0x3029acf9
- (void)mergeByAnchorYDecreasingXIncreasing:(id)increasing;	// 0x3029ad15
- (id)newSubsequenceFrom:(unsigned)from length:(unsigned)length;	// 0x3029b3d9
- (void)removeAllChars;	// 0x3029ad69
- (void)removeChar;	// 0x3029b5c9
- (void)removeCharAtIndex:(unsigned)index;	// 0x3029b649
- (void)removeFrom:(unsigned)from;	// 0x3029b515
- (BOOL)removeSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3029ab25
- (BOOL)removeToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3029a995
- (void)replaceCharAtIndex:(unsigned)index withChar:(CPPDFChar *)aChar;	// 0x3029b561
- (void)resize:(unsigned)resize;	// 0x3029b761
- (void)sortBy:(/*function-pointer*/ void *)by;	// 0x3029b6dd
- (void)sortByAnchorXIncreasingYDecreasing;	// 0x3029ad31
- (void)sortByAnchorYDecreasingXIncreasing;	// 0x3029ad4d
- (void)splitToSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3029ac29
// converted property getter: - (BOOL)wasMerged;	// 0x3029a6c1
@end

