/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSAutoreleasePool : NSObject {
@private
	void *_token;	// 4 = 0x4
	void *_reserved3;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (void)addObject:(id)object;	// 0x31d44e45
+ (id)allocWithZone:(NSZone *)zone;	// 0x31ceb7d5
+ (BOOL)autoreleasePoolExists;	// 0x31d44f9d
+ (unsigned)autoreleasedObjectCount;	// 0x31d44f95
+ (void)enableFreedObjectCheck:(BOOL)check;	// 0x31d44fa5
+ (void)enableRelease:(BOOL)release;	// 0x31d44fa1
+ (unsigned)poolCountHighWaterMark;	// 0x31d44fa9
+ (unsigned)poolCountHighWaterResolution;	// 0x31d44fb1
+ (void)releaseAllPools;	// 0x31d44f91
+ (void)resetTotalAutoreleasedObjects;	// 0x31d44fbd
+ (void)setPoolCountHighWaterMark:(unsigned)mark;	// 0x31d44fad
+ (void)setPoolCountHighWaterResolution:(unsigned)resolution;	// 0x31d44fb5
+ (void)showPools;	// 0x31d44f8d
+ (unsigned)topAutoreleasePoolCount;	// 0x31d44f99
+ (unsigned)totalAutoreleasedObjects;	// 0x31d44fb9
- (id)init;	// 0x31ceb84d
- (id)initWithCapacity:(unsigned)capacity;	// 0x31d44e4d
- (void)addObject:(id)object;	// 0x31d44e81
- (id)autorelease;	// 0x31d44f25
- (void)dealloc;	// 0x31d44f71
- (void)drain;	// 0x31cf4a61
- (oneway void)release;	// 0x31cedbd1
- (id)retain;	// 0x31d44ed5
- (unsigned)retainCount;	// 0x31d44f21
@end
