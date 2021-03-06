/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSThread : NSObject {
	id _private;	// 4 = 0x4
	unsigned char _bytes[44];	// 8 = 0x8
}
@property(retain) id name;	// G=0x346dfed5; S=0x34670e65; converted property
@property(assign) unsigned stackSize;	// G=0x346dff95; S=0x346dff69; converted property
@property(assign) double threadPriority;	// G=0x346dffc9; S=0x346e0089; converted property
+ (id)callStackReturnAddresses;	// 0x3467e1d9
+ (id)callStackSymbols;	// 0x346dfdb9
+ (id)currentThread;	// 0x3463a6c9
+ (void)detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)object;	// 0x34646c65
+ (void)exit;	// 0x346566f9
+ (BOOL)isDying;	// 0x346dfea1
+ (BOOL)isMainThread;	// 0x3463ab65
+ (BOOL)isMultiThreaded;	// 0x346dfc4d
+ (id)mainThread;	// 0x34639e01
+ (BOOL)setThreadPriority:(double)priority;	// 0x3466a7a1
+ (void)sleepForTimeInterval:(double)timeInterval;	// 0x3467dde1
+ (void)sleepUntilDate:(id)date;	// 0x346dfcc9
+ (double)threadPriority;	// 0x346dfc61
- (id)init;	// 0x34646dcd
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x34646cd1
- (void)_nq:(id)nq;	// 0x3463a35d
- (void)cancel;	// 0x346e01ed
- (void)dealloc;	// 0x34655759
- (id)description;	// 0x346e0235
- (BOOL)isCancelled;	// 0x346e01c9
- (BOOL)isDying;	// 0x346dfe7d
- (BOOL)isExecuting;	// 0x346e0179
- (BOOL)isFinished;	// 0x346e01a1
- (BOOL)isMainThread;	// 0x34668461
- (void)main;	// 0x3464704d
// converted property getter: - (id)name;	// 0x346dfed5
- (id)runLoop;	// 0x346dfe31
// converted property setter: - (void)setName:(id)name;	// 0x34670e65
// converted property setter: - (void)setStackSize:(unsigned)size;	// 0x346dff69
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x346e0089
// converted property getter: - (unsigned)stackSize;	// 0x346dff95
- (void)start;	// 0x34646f05
- (id)threadDictionary;	// 0x34666bb5
// converted property getter: - (double)threadPriority;	// 0x346dffc9
@end

