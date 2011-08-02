/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRGridView, BRImage;

__attribute__((visibility("hidden")))
@interface BRDotArrayControl : BRControl {
@private
	long _dotCount;	// 44 = 0x2c
	long _activeDot;	// 48 = 0x30
	BRGridView *_dotGrid;	// 52 = 0x34
	BRImage *_dotOnImage;	// 56 = 0x38
	BRImage *_dotOffImage;	// 60 = 0x3c
}
@property(assign) long activeDot;	// G=0x33018391; S=0x3301843d; converted property
@property(assign) long dotCount;	// G=0x33018381; S=0x33018489; converted property
- (id)init;	// 0x330184bd
- (id)initWithDotCount:(long)dotCount;	// 0x33018541
// converted property getter: - (long)activeDot;	// 0x33018391
- (void)dealloc;	// 0x330184d5
// converted property getter: - (long)dotCount;	// 0x33018381
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x330187a5
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x330183c1
- (void)layoutSubcontrols;	// 0x330186c1
- (long)numberOfColumnsInGrid:(id)grid;	// 0x330183b1
- (long)numberOfItemsInGrid:(id)grid;	// 0x330183a1
// converted property setter: - (void)setActiveDot:(long)dot;	// 0x3301843d
// converted property setter: - (void)setDotCount:(long)count;	// 0x33018489
@end

