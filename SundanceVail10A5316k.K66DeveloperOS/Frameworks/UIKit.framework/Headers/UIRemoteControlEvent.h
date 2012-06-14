/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"


__attribute__((visibility("hidden")))
@interface UIRemoteControlEvent : UIInternalEvent {
@private
	int _subtype;	// 16 = 0x10
}
@property(readonly, assign) int subtype;	// G=0x302b02bd; converted property
- (id)_init;	// 0x300b8289
- (void)_setSubtype:(int)subtype;	// 0x302b02cd
- (void)_simpleRemoteActionNotification:(id)notification;	// 0x302b02dd
- (void)dealloc;	// 0x302b023d
// converted property getter: - (int)subtype;	// 0x302b02bd
- (int)type;	// 0x302b02b9
@end
