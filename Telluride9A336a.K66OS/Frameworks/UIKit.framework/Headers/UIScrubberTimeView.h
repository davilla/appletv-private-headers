/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIScrubberTimeView : UIView {
@private
	NSString *_time;	// 48 = 0x30
	UIColor *_timeColor;	// 52 = 0x34
	UIColor *_timeShadowColor;	// 56 = 0x38
	unsigned _align : 2;	// 60 = 0x3c
}
@property(retain) NSString *time;	// G=0x352c9aa9; S=0x352c9985; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x352c9841
- (void)dealloc;	// 0x352c9911
- (void)drawRect:(CGRect)rect;	// 0x352c9ab9
// converted property setter: - (void)setTime:(id)time;	// 0x352c9985
- (void)setTimeColor:(id)color;	// 0x352c99f9
- (void)setTimeShadowColor:(id)color;	// 0x352c9a51
// converted property getter: - (id)time;	// 0x352c9aa9
@end

