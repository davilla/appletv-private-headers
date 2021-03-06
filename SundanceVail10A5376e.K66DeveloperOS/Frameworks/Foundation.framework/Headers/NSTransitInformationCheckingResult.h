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
	NSRange _range;	// 4 = 0x4
	NSDictionary *_components;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *components;	// G=0x34e25d11; converted property
@property(readonly, assign) NSRange range;	// G=0x34e25b45; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x34e25d21; 
- (id)initWithCoder:(id)coder;	// 0x34e25a11
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x34e258f9
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x34e25865
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x34e25c75
// converted property getter: - (id)components;	// 0x34e25d11
- (void)dealloc;	// 0x34e2591d
- (void)encodeWithCoder:(id)coder;	// 0x34e25981
// converted property getter: - (NSRange)range;	// 0x34e25b45
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x34e25b5d
- (unsigned long long)resultType;	// 0x34e25b3d
// declared property getter: - (void *)underlyingResult;	// 0x34e25d21
@end

