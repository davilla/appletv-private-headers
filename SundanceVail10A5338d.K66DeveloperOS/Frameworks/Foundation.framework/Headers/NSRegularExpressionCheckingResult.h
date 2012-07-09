/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSArray, NSRegularExpression;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult {
}
@property(readonly, assign) NSArray *rangeArray;	// G=0x373f88c9; 
@property(readonly, assign) NSRegularExpression *regularExpression;	// G=0x373f88c5; 
- (id)initWithCoder:(id)coder;	// 0x373f8a01
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x373f88a1
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x373f887d
- (id)description;	// 0x373f88cd
- (void)encodeWithCoder:(id)coder;	// 0x373f893d
// declared property getter: - (id)rangeArray;	// 0x373f88c9
// declared property getter: - (id)regularExpression;	// 0x373f88c5
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x373f8b05
- (unsigned long long)resultType;	// 0x373f8afd
@end
