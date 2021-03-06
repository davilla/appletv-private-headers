/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSInputStream.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSCFInputStream : NSInputStream {
}
@property(assign) id delegate;	// G=0x31a854d1; S=0x31a854d5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a8540d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a85409
- (id)initWithData:(id)data;	// 0x31a85415
- (id)initWithFileAtPath:(id)path;	// 0x31a85439
- (id)initWithURL:(id)url;	// 0x31a854a5
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x31a85675
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x31a8565d
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x31a8567d
- (BOOL)allowsWeakReference;	// 0x31a853a1
- (void)close;	// 0x31a854cd
// converted property getter: - (id)delegate;	// 0x31a854d1
- (void)finalize;	// 0x31a853c9
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x31a8562d
- (BOOL)hasBytesAvailable;	// 0x31a85651
- (unsigned)hash;	// 0x31a85389
- (BOOL)isEqual:(id)equal;	// 0x31a85371
- (void)open;	// 0x31a854c9
- (id)propertyForKey:(id)key;	// 0x31a85559
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x31a85625
- (oneway void)release;	// 0x31a8539d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a855c5
- (id)retain;	// 0x31a8538d
- (unsigned)retainCount;	// 0x31a853c5
- (BOOL)retainWeakReference;	// 0x31a853b5
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a85595
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31a854d5
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x31a85585
- (id)streamError;	// 0x31a855f9
- (unsigned)streamStatus;	// 0x31a855f5
@end

