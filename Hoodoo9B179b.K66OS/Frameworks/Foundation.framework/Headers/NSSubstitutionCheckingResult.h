/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSString;

@interface NSSubstitutionCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSString *_replacementString;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x310eeab9; converted property
@property(readonly, retain) NSString *replacementString;	// G=0x310eec7d; converted property
- (id)initWithCoder:(id)coder;	// 0x310ee991
- (id)initWithRange:(NSRange)range replacementString:(id)string;	// 0x310ee7e5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x310eebe1
- (void)dealloc;	// 0x310ee84d
- (id)description;	// 0x310ee899
- (void)encodeWithCoder:(id)coder;	// 0x310ee909
// converted property getter: - (NSRange)range;	// 0x310eeab9
// converted property getter: - (id)replacementString;	// 0x310eec7d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x310eead5
@end

