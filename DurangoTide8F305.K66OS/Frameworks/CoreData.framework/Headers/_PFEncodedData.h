/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSData.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface _PFEncodedData : NSData {
@private
	NSData *_aData;	// 4 = 0x4
	unsigned _byteCount;	// 8 = 0x8
}
- (id)init;	// 0x3437442d
- (id)initWithCoder:(id)coder;	// 0x34374419
- (const void *)bytes;	// 0x34373e89
- (id)copyWithZone:(NSZone *)zone;	// 0x34374329
- (id)description;	// 0x3437433d
- (void)encodeWithCoder:(id)coder;	// 0x343743e1
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x34374b01
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x34374475
- (BOOL)isEqualToData:(id)data;	// 0x342bfa3d
- (unsigned)length;	// 0x34373e79
- (id)mutableCopy;	// 0x34374311
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x343742d1
- (id)privateCopy;	// 0x34374291
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x34374565
- (void)release;	// 0x343743c1
- (id)retain;	// 0x342b44e5
- (unsigned)retainCount;	// 0x343743a1
- (id)subdataWithRange:(NSRange)range;	// 0x34374265
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x343741f5
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x34374219
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x34374185
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x343741a9
@end

