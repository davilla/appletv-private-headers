/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOutputStream.h"


__attribute__((visibility("hidden")))
@interface __NSCFOutputStream : NSOutputStream {
}
@property(assign) id delegate;	// G=0x32e82c25; S=0x32e82c59; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x32e82a75
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32e809a5
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x32e838d9
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x32e80e9d
- (id)initToMemory;	// 0x32e838ad
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x32e83901
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x32e82c8d
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x32e82c45
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x32e82cc5
- (void)close;	// 0x32e82c19
// converted property getter: - (id)delegate;	// 0x32e82c25
- (void)finalize;	// 0x32e80c39
- (BOOL)hasSpaceAvailable;	// 0x32e82d19
- (unsigned)hash;	// 0x32e818e5
- (BOOL)isEqual:(id)equal;	// 0x32e813b9
- (void)open;	// 0x32e82c0d
- (id)propertyForKey:(id)key;	// 0x32e8394d
- (oneway void)release;	// 0x32e80b0d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x32e82cd5
- (id)retain;	// 0x32e80a8d
- (unsigned)retainCount;	// 0x32e80b79
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x32e82c9d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32e82c59
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x32e82bfd
- (id)streamError;	// 0x32e8396d
- (unsigned)streamStatus;	// 0x32e82cfd
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x32e82d09
@end

