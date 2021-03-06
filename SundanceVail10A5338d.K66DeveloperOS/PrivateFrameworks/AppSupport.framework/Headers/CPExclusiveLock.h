/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"

@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {
	int _fd;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
}
@property(retain) NSString *name;	// G=0x3455f36d; S=0x3455f271; converted property
- (id)init;	// 0x3455f005
- (id)initWithName:(id)name;	// 0x3455f019
- (void)dealloc;	// 0x3455f0f1
- (void)lock;	// 0x3455f13d
// converted property getter: - (id)name;	// 0x3455f36d
// converted property setter: - (void)setName:(id)name;	// 0x3455f271
- (BOOL)tryLock;	// 0x3455f1e5
- (void)unlock;	// 0x3455f1bd
@end

