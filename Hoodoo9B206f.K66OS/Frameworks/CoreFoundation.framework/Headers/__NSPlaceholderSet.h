/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a60705
+ (id)immutablePlaceholder;	// 0x319c9735
+ (void)initialize;	// 0x319d4d35
+ (id)mutablePlaceholder;	// 0x319b1b69
- (id)init;	// 0x319b1b79
- (id)initWithCapacity:(unsigned)capacity;	// 0x319b1bcd
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x319b4e25
- (void)addObject:(id)object;	// 0x31a60979
- (unsigned)count;	// 0x31a6072d
- (void)dealloc;	// 0x31a60729
- (id)member:(id)member;	// 0x31a607f1
- (id)objectEnumerator;	// 0x31a608b5
- (oneway void)release;	// 0x31a6071d
- (void)removeObject:(id)object;	// 0x31a60a3d
- (id)retain;	// 0x31a60719
- (unsigned)retainCount;	// 0x31a60721
@end

