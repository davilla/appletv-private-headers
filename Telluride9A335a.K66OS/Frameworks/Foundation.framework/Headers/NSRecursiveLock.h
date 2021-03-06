/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSLocking.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSRecursiveLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x3208c575; S=0x3208c539; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x32012949
- (id)init;	// 0x32012951
- (void)dealloc;	// 0x32043399
- (id)description;	// 0x3208c46d
- (void)finalize;	// 0x3208c1fd
- (BOOL)isLocking;	// 0x3208c581
- (void)lock;	// 0x32002935
- (BOOL)lockBeforeDate:(id)date;	// 0x3208c301
// converted property getter: - (id)name;	// 0x3208c575
// converted property setter: - (void)setName:(id)name;	// 0x3208c539
- (BOOL)tryLock;	// 0x3208c441
- (void)unlock;	// 0x32002955
@end

