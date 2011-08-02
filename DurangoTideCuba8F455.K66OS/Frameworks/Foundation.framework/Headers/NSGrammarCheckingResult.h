/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSArray *_details;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x310ca44d; converted property
- (id)initWithCoder:(id)coder;	// 0x310ce545
- (id)initWithRange:(NSRange)range details:(id)details;	// 0x310cbd8d
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x310cd335
- (void)dealloc;	// 0x310cbd45
- (void)encodeWithCoder:(id)coder;	// 0x310ce251
- (id)grammarDetails;	// 0x310ca465
// converted property getter: - (NSRange)range;	// 0x310ca44d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x310cd3d9
- (unsigned long long)resultType;	// 0x310ca445
@end

