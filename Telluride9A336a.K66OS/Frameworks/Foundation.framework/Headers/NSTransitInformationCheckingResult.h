/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSDictionary *_components;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *components;	// G=0x33736761; converted property
@property(readonly, assign) NSRange range;	// G=0x33736585; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x33736771; 
- (id)initWithCoder:(id)coder;	// 0x33736455
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x33736349
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x337362b5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x337366c5
// converted property getter: - (id)components;	// 0x33736761
- (void)dealloc;	// 0x3373636d
- (void)encodeWithCoder:(id)coder;	// 0x337363cd
// converted property getter: - (NSRange)range;	// 0x33736585
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x337365a1
- (unsigned long long)resultType;	// 0x3373657d
// declared property getter: - (void *)underlyingResult;	// 0x33736771
@end
