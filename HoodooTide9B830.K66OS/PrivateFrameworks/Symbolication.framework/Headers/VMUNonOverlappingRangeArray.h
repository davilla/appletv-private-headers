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
- (void)_mergeAllBitsOfRange:(VMURange)range excludingRanges:(id)ranges mergeRanges:(BOOL)ranges3;	// 0x31be3951
- (void)addRange:(VMURange)range;	// 0x31be3d91
- (VMURange)largestUnusedWithInUse:(id)use;	// 0x31be3775
- (void)mergeRange:(VMURange)range;	// 0x31be3c19
- (void)mergeRange:(VMURange)range excludingRanges:(id)ranges;	// 0x31be3b21
- (void)mergeRanges:(id)ranges;	// 0x31be3b9d
- (void)mergeRanges:(id)ranges excludingRanges:(id)ranges2;	// 0x31be3aa1
- (void)sortAndMergeRanges;	// 0x31be36b5
- (id)subtract:(id)subtract mergeRanges:(BOOL)ranges;	// 0x31be3891
@end

