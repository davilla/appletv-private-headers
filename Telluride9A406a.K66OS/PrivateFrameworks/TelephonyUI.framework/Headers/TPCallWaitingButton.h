/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIImageView.h> // Unknown library

@class TPButton;

@interface TPCallWaitingButton : UIImageView {
	TPButton *_innerButton;	// 52 = 0x34
	unsigned _type : 1;	// 56 = 0x38
}
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x3601ec35; S=0x3601ec59; converted property
+ (CGSize)defaultSizeForType:(int)type;	// 0x3601eb99
+ (float)defaultVerticalCenteringOffset;	// 0x3601eb45
- (id)initBottomForIncomingCallWaiting;	// 0x3601ef09
- (id)initBottomForSecondIncomingCallWaiting;	// 0x3601edfd
- (id)initBottomForTTYWithTitle:(id)title;	// 0x3601ed35
- (id)initTopForIncomingCallWaiting;	// 0x3601f075
- (id)initTopForTTY;	// 0x3601efbd
- (id)initWithFrame:(CGRect)frame type:(int)type;	// 0x3601f12d
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x3601ed09
- (void)addTarget:(id)target action:(SEL)action forEvents:(int)events;	// 0x3601eca9
- (void)dealloc;	// 0x3601eb4d
// converted property getter: - (BOOL)isEnabled;	// 0x3601ec35
- (void)removeTarget:(id)target forControlEvents:(unsigned)controlEvents;	// 0x3601ecd5
- (void)removeTarget:(id)target forEvents:(int)events;	// 0x3601ec7d
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3601ec59
@end

