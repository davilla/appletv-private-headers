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
+ (void)initialize;	// 0x346b2c6d
- (id)init;	// 0x346b15b9
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x346b2601
- (void)dealloc;	// 0x346b253d
- (id)description;	// 0x346b2585
- (BOOL)isLockedByMe;	// 0x346b1f91
- (void)lock;	// 0x346b29bd
- (BOOL)lockBeforeDate:(id)date;	// 0x346b2909
- (BOOL)tryLock;	// 0x346b2965
- (void)unlock;	// 0x346b2c05
@end
