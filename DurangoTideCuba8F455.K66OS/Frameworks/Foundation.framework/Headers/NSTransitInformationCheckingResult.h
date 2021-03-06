/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSDictionary *_components;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *components;	// G=0x310ca6e1; converted property
@property(readonly, assign) NSRange range;	// G=0x310ca6c9; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x310ca6f1; 
- (id)initWithCoder:(id)coder;	// 0x310cd9ad
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x310ca785
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x310cb4ad
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x310cc2f9
// converted property getter: - (id)components;	// 0x310ca6e1
- (void)dealloc;	// 0x310cb451
- (void)encodeWithCoder:(id)coder;	// 0x310ca701
// converted property getter: - (NSRange)range;	// 0x310ca6c9
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x310cc39d
- (unsigned long long)resultType;	// 0x310ca6c1
// declared property getter: - (void *)underlyingResult;	// 0x310ca6f1
@end

