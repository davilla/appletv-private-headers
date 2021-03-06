/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSInputStream.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFInputStream : NSInputStream {
}
@property(assign) id delegate;	// G=0x370fe0b5; S=0x370fe0b9; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x370fdfdd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x370fdfd9
- (id)initWithData:(id)data;	// 0x370fdfe1
- (id)initWithFileAtPath:(id)path;	// 0x370fe011
- (id)initWithURL:(id)url;	// 0x370fe07d
- (BOOL)_isDeallocating;	// 0x370fdf89
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x370fe259
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x370fe241
- (BOOL)_tryRetain;	// 0x370fdf79
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x370fe261
- (void)close;	// 0x370fe0b1
// converted property getter: - (id)delegate;	// 0x370fe0b5
- (void)finalize;	// 0x370fdf99
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x370fe211
- (BOOL)hasBytesAvailable;	// 0x370fe235
- (unsigned)hash;	// 0x370fdf61
- (BOOL)isEqual:(id)equal;	// 0x370fdf49
- (void)open;	// 0x370fe0ad
- (id)propertyForKey:(id)key;	// 0x370fe13d
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x370fe209
- (oneway void)release;	// 0x370fdf75
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x370fe1a9
- (id)retain;	// 0x370fdf65
- (unsigned)retainCount;	// 0x370fdf95
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x370fe179
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x370fe0b9
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x370fe169
- (id)streamError;	// 0x370fe1dd
- (unsigned)streamStatus;	// 0x370fe1d9
@end

