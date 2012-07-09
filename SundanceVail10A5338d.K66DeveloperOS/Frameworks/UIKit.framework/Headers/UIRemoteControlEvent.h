/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"


__attribute__((visibility("hidden")))
@interface UIRemoteControlEvent : UIInternalEvent {
	int _subtype;	// 16 = 0x10
}
@property(readonly, assign) int subtype;	// G=0x30e36485; converted property
- (id)_init;	// 0x30c3ac81
- (void)_setSubtype:(int)subtype;	// 0x30e36495
- (void)_simpleRemoteActionNotification:(id)notification;	// 0x30e364a5
- (void)dealloc;	// 0x30e36405
// converted property getter: - (int)subtype;	// 0x30e36485
- (int)type;	// 0x30e36481
@end
