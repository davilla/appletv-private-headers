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
@property(readonly, assign) NSRange range;	// G=0x3280844d; converted property
- (id)initWithCoder:(id)coder;	// 0x3280c545
- (id)initWithRange:(NSRange)range details:(id)details;	// 0x32809d8d
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x3280b335
- (void)dealloc;	// 0x32809d45
- (void)encodeWithCoder:(id)coder;	// 0x3280c251
- (id)grammarDetails;	// 0x32808465
// converted property getter: - (NSRange)range;	// 0x3280844d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x3280b3d9
- (unsigned long long)resultType;	// 0x32808445
@end

