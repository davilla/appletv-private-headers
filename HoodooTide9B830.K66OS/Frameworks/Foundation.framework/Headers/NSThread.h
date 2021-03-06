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
@property(retain) id name;	// G=0x3160ddc1; S=0x315a4a85; converted property
@property(assign) unsigned stackSize;	// G=0x3160de59; S=0x3160de2d; converted property
@property(assign) double threadPriority;	// G=0x3160de89; S=0x3160df49; converted property
+ (id)callStackReturnAddresses;	// 0x315b1e65
+ (id)callStackSymbols;	// 0x3160dca1
+ (id)currentThread;	// 0x3156e7dd
+ (void)detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)object;	// 0x3157a649
+ (void)exit;	// 0x3158a371
+ (BOOL)isDying;	// 0x3160dd8d
+ (BOOL)isMainThread;	// 0x3156ec21
+ (BOOL)isMultiThreaded;	// 0x3160db49
+ (id)mainThread;	// 0x3156de55
+ (BOOL)setThreadPriority:(double)priority;	// 0x3159e7d9
+ (void)sleepForTimeInterval:(double)timeInterval;	// 0x315b1a85
+ (void)sleepUntilDate:(id)date;	// 0x3160dbc1
+ (double)threadPriority;	// 0x3160db59
- (id)init;	// 0x3157a7b1
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x3157a6b1
- (void)_nq:(id)nq;	// 0x3156e4c1
- (void)cancel;	// 0x3160e0bd
- (void)dealloc;	// 0x315893c1
- (id)description;	// 0x3160e109
- (BOOL)isCancelled;	// 0x3160e095
- (BOOL)isDying;	// 0x3160dd65
- (BOOL)isExecuting;	// 0x3160e045
- (BOOL)isFinished;	// 0x3160e06d
- (BOOL)isMainThread;	// 0x3159c2f1
- (void)main;	// 0x3157aa39
// converted property getter: - (id)name;	// 0x3160ddc1
- (id)runLoop;	// 0x3160dd19
// converted property setter: - (void)setName:(id)name;	// 0x315a4a85
// converted property setter: - (void)setStackSize:(unsigned)size;	// 0x3160de2d
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x3160df49
// converted property getter: - (unsigned)stackSize;	// 0x3160de59
- (void)start;	// 0x3157a8e5
- (id)threadDictionary;	// 0x3159aa59
// converted property getter: - (double)threadPriority;	// 0x3160de89
@end

