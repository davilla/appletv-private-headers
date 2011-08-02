/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSNotification.h"

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSConcreteNotification : NSNotification {
@private
	NSString *name;	// 4 = 0x4
	id object;	// 8 = 0x8
	NSDictionary *userInfo;	// 12 = 0xc
	BOOL dyingObject;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x31014045; converted property
@property(readonly, retain) id object;	// G=0x31014055; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x310086fd; converted property
+ (id)newTempNotificationWithName:(id)name object:(id)object userInfo:(id)info;	// 0x310025f9
- (id)initWithName:(id)name object:(id)object userInfo:(id)info;	// 0x31013f15
- (void)dealloc;	// 0x310026c1
// converted property getter: - (id)name;	// 0x31014045
// converted property getter: - (id)object;	// 0x31014055
- (void)recycle;	// 0x31002681
// converted property getter: - (id)userInfo;	// 0x310086fd
@end

