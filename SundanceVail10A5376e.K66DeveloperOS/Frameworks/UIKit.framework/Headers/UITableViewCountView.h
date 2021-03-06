/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCountView : UILabel {
	NSString *_countString;	// 144 = 0x90
	int _count;	// 148 = 0x94
}
@property(assign) int count;	// G=0x302b3fed; S=0x302b3f6d; converted property
- (id)initWithFrame:(CGRect)frame withCountString:(id)countString withCount:(int)count;	// 0x302b3e19
// converted property getter: - (int)count;	// 0x302b3fed
- (void)dealloc;	// 0x3038e971
// converted property setter: - (void)setCount:(int)count;	// 0x302b3f6d
- (void)setCountString:(id)string withCount:(int)count;	// 0x302b3f11
@end

