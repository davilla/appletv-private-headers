/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRTableRow : BRControl {
	NSArray *_items;	// 80 = 0x50
	NSArray *_widthValues;	// 84 = 0x54
}
+ (id)tableRowWithItems:(id)items widthValues:(id)values;	// 0x2847bd
- (id)initWithItems:(id)items widthValues:(id)values;	// 0x2847fd
- (void)dealloc;	// 0x284875
- (void)layoutSubcontrols;	// 0x2849c5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2848d9
@end

