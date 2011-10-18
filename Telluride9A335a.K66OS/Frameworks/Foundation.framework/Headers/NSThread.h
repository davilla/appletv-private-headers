/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSThread : NSObject {
@private
	id _private;	// 4 = 0x4
	unsigned char _bytes[44];	// 8 = 0x8
}
@property(retain) id name;	// G=0x320a4dd1; S=0x3203ba95; converted property
@property(assign) unsigned stackSize;	// G=0x320a4e69; S=0x320a4e3d; converted property
@property(assign) double threadPriority;	// G=0x320a4e99; S=0x320a4f59; converted property
+ (id)callStackReturnAddresses;	// 0x32048e75
+ (id)callStackSymbols;	// 0x320a4cb1
+ (id)currentThread;	// 0x320057ed
+ (void)detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)object;	// 0x32011659
+ (void)exit;	// 0x32021381
+ (BOOL)isDying;	// 0x320a4d9d
+ (BOOL)isMainThread;	// 0x32005c31
+ (BOOL)isMultiThreaded;	// 0x320a4b59
+ (id)mainThread;	// 0x32004e65
+ (BOOL)setThreadPriority:(double)priority;	// 0x320357e9
+ (void)sleepForTimeInterval:(double)timeInterval;	// 0x32048a95
+ (void)sleepUntilDate:(id)date;	// 0x320a4bd1
+ (double)threadPriority;	// 0x320a4b69
- (id)init;	// 0x320117c1
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x320116c1
- (void)_nq:(id)nq;	// 0x320054d1
- (void)cancel;	// 0x320a50cd
- (void)dealloc;	// 0x320203d1
- (id)description;	// 0x320a5119
- (BOOL)isCancelled;	// 0x320a50a5
- (BOOL)isDying;	// 0x320a4d75
- (BOOL)isExecuting;	// 0x320a5055
- (BOOL)isFinished;	// 0x320a507d
- (BOOL)isMainThread;	// 0x32033301
- (void)main;	// 0x32011a49
// converted property getter: - (id)name;	// 0x320a4dd1
- (id)runLoop;	// 0x320a4d29
// converted property setter: - (void)setName:(id)name;	// 0x3203ba95
// converted property setter: - (void)setStackSize:(unsigned)size;	// 0x320a4e3d
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x320a4f59
// converted property getter: - (unsigned)stackSize;	// 0x320a4e69
- (void)start;	// 0x320118f5
- (id)threadDictionary;	// 0x32031a69
// converted property getter: - (double)threadPriority;	// 0x320a4e99
@end

