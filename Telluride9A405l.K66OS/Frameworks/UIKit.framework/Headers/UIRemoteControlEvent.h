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
@property(readonly, assign) int subtype;	// G=0x32ea74ed; converted property
- (id)_init;	// 0x32ca54b1
- (void)_setSubtype:(int)subtype;	// 0x32ea74fd
- (void)_simpleRemoteActionNotification:(id)notification;	// 0x32ea750d
- (void)dealloc;	// 0x32ea746d
// converted property getter: - (int)subtype;	// 0x32ea74ed
- (int)type;	// 0x32ea74e9
@end
