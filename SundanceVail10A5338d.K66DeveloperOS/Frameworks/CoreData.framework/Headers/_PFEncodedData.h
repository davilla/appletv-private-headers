/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSData.h> // Unknown library


@interface _PFEncodedData : NSData {
	NSData *_aData;	// 4 = 0x4
	unsigned _byteCount;	// 8 = 0x8
}
- (id)init;	// 0x36667cb9
- (id)initWithCoder:(id)coder;	// 0x36667d0d
- (BOOL)_isDeallocating;	// 0x36667dc9
- (BOOL)_tryRetain;	// 0x36667ded
- (const void *)bytes;	// 0x36667f45
- (id)copyWithZone:(NSZone *)zone;	// 0x36667e81
- (id)description;	// 0x36667e11
- (void)encodeWithCoder:(id)coder;	// 0x36667d1d
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x36667f49
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x36667f5d
- (BOOL)isEqualToData:(id)data;	// 0x36667f99
- (unsigned)length;	// 0x36667f35
- (id)mutableCopy;	// 0x36667e91
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36667ea5
- (id)privateCopy;	// 0x36667eed
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x36667ff1
- (void)release;	// 0x36667d89
- (id)retain;	// 0x36667d61
- (unsigned)retainCount;	// 0x36667da9
- (id)subdataWithRange:(NSRange)range;	// 0x36667f75
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x366680ed
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3666809d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x3666815d
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3666810d
@end

