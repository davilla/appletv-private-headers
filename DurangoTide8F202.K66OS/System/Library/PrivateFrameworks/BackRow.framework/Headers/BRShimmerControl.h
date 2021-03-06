/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRShimmerControl : BRControl {
@private
	BRControl *_base;	// 44 = 0x2c
	BRImageControl *_shimmer;	// 48 = 0x30
	float _offset;	// 52 = 0x34
}
@property(assign) float offset;	// G=0x3296f8b1; S=0x3296f9bd; converted property
+ (id)shimmerWithOffset:(float)offset;	// 0x3296fa21
- (id)init;	// 0x3296fa09
- (id)initWithOffset:(float)offset;	// 0x3296fa79
- (id)_calculateKeyTimes;	// 0x3296f8c1
- (id)_calculatePositionValues;	// 0x3296fbd5
- (void)dealloc;	// 0x3296f961
- (void)layoutSubcontrols;	// 0x3296fc9d
// converted property getter: - (float)offset;	// 0x3296f8b1
// converted property setter: - (void)setOffset:(float)offset;	// 0x3296f9bd
@end

