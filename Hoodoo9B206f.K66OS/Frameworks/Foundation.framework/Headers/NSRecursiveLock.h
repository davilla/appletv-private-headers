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
@property(retain) id name;	// G=0x31d75565; S=0x31d75529; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31cfb939
- (id)init;	// 0x31cfb941
- (void)dealloc;	// 0x31d2c389
- (id)description;	// 0x31d7545d
- (void)finalize;	// 0x31d751ed
- (BOOL)isLocking;	// 0x31d75571
- (void)lock;	// 0x31ceb925
- (BOOL)lockBeforeDate:(id)date;	// 0x31d752f1
// converted property getter: - (id)name;	// 0x31d75565
// converted property setter: - (void)setName:(id)name;	// 0x31d75529
- (BOOL)tryLock;	// 0x31d75431
- (void)unlock;	// 0x31ceb945
@end

