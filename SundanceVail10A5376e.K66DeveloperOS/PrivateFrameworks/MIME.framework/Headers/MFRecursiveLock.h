/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSRecursiveLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x369ab4f9
- (id)init;	// 0x369ab569
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x369ab595
- (void)dealloc;	// 0x369abb05
- (id)description;	// 0x369aba6d
- (BOOL)isLockedByMe;	// 0x369ab5f9
- (void)lock;	// 0x369ab651
- (BOOL)lockBeforeDate:(id)date;	// 0x369ab7f5
- (BOOL)tryLock;	// 0x369ab795
- (void)unlock;	// 0x369ab859
@end
