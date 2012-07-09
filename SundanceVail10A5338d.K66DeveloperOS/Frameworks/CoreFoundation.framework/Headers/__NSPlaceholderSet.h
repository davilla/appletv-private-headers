/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x36a39d35
+ (id)immutablePlaceholder;	// 0x369991d1
+ (void)initialize;	// 0x369a43d5
+ (id)mutablePlaceholder;	// 0x36980ea5
- (id)init;	// 0x36980eb5
- (id)initWithCapacity:(unsigned)capacity;	// 0x36980f11
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x36983c01
- (void)addObject:(id)object;	// 0x36a39fc5
- (unsigned)count;	// 0x36a39d6d
- (void)dealloc;	// 0x36a39d59
- (id)member:(id)member;	// 0x36a39e35
- (id)objectEnumerator;	// 0x36a39efd
- (oneway void)release;	// 0x36a39d4d
- (void)removeObject:(id)object;	// 0x36a3a08d
- (id)retain;	// 0x36a39d49
- (unsigned)retainCount;	// 0x36a39d51
@end
