/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSLocking.h"


__attribute__((visibility("hidden")))
@interface _PFLock : NSObject <NSLocking> {
@private
	int _cd_rc;	// 4 = 0x4
	opaque_pthread_mutex_t _lock;	// 8 = 0x8
	opaque_pthread_t *_owner;	// 52 = 0x34
	unsigned _count;	// 56 = 0x38
}
+ (void)initialize;	// 0x33e45e39
- (id)init;	// 0x33e45e55
- (void)dealloc;	// 0x33e60509
- (void)finalize;	// 0x33e75d7d
- (void)lock;	// 0x33e25a1d
- (BOOL)tryLock;	// 0x33e64125
- (void)unlock;	// 0x33e31f3d
@end

