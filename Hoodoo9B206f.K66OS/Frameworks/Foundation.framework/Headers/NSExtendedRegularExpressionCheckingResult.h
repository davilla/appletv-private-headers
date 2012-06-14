/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRegularExpressionCheckingResult.h"

@class NSRegularExpression;

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
@private
	NSRegularExpression *_regularExpression;	// 4 = 0x4
	NSRange _ranges[7];	// 8 = 0x8
}
@property(readonly, retain) NSRegularExpression *regularExpression;	// G=0x31dd8725; converted property
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x31dd8635
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x31dd8525
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x31dd8751
- (void)dealloc;	// 0x31dd86d9
- (unsigned)numberOfRanges;	// 0x31dd8819
- (NSRange)range;	// 0x31dd8735
- (id)rangeArray;	// 0x31dd88d5
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x31dd884d
// converted property getter: - (id)regularExpression;	// 0x31dd8725
@end
