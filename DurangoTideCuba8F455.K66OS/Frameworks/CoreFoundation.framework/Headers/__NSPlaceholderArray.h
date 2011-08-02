/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableArray.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderArray : NSMutableArray {
}
+ (id)immutablePlaceholder;	// 0x3422a135
+ (void)initialize;	// 0x3424d591
+ (id)mutablePlaceholder;	// 0x342289e9
- (id)init;	// 0x3423c1c5
- (id)initWithCapacity:(unsigned)capacity;	// 0x34230695
- (id)initWithContentsOfFile:(id)file;	// 0x34267ae9
- (id)initWithContentsOfURL:(id)url;	// 0x342b5759
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x342289f5
- (unsigned)count;	// 0x342b6059
- (void)dealloc;	// 0x342b5271
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x342b5ec9
- (id)objectAtIndex:(unsigned)index;	// 0x342b5f91
- (oneway void)release;	// 0x342b5265
- (void)removeObjectAtIndex:(unsigned)index;	// 0x342b5d39
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x342b5e01
- (id)retain;	// 0x342b5261
- (unsigned)retainCount;	// 0x342b5269
@end

