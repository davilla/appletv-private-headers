/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMURangeArray.h"
#import "Symbolication-Structs.h"


@interface VMUNonOverlappingRangeArray : VMURangeArray {
}
- (void)_mergeAllBitsOfRange:(VMURange)range excludingRanges:(id)ranges mergeRanges:(BOOL)ranges3;	// 0x31f83951
- (void)addRange:(VMURange)range;	// 0x31f83d91
- (VMURange)largestUnusedWithInUse:(id)use;	// 0x31f83775
- (void)mergeRange:(VMURange)range;	// 0x31f83c19
- (void)mergeRange:(VMURange)range excludingRanges:(id)ranges;	// 0x31f83b21
- (void)mergeRanges:(id)ranges;	// 0x31f83b9d
- (void)mergeRanges:(id)ranges excludingRanges:(id)ranges2;	// 0x31f83aa1
- (void)sortAndMergeRanges;	// 0x31f836b5
- (id)subtract:(id)subtract mergeRanges:(BOOL)ranges;	// 0x31f83891
@end

