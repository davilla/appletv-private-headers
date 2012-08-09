/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFData : NSMutableData {
	unsigned char _cfinfo[4];	// 4 = 0x4
	long _length;	// 8 = 0x8
	long _capacity;	// 12 = 0xc
	CFAllocatorRef _bytesDeallocator;	// 16 = 0x10
	char *_bytes;	// 20 = 0x14
}
@property(assign) unsigned length;	// G=0x346a0389; S=0x346a0395; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x346a0331
- (BOOL)allowsWeakReference;	// 0x346a02c9
- (const void *)bytes;	// 0x346a038d
- (id)copyWithZone:(NSZone *)zone;	// 0x346a0335
- (void)finalize;	// 0x346a02f1
- (unsigned)hash;	// 0x346a02b1
- (BOOL)isEqual:(id)equal;	// 0x346a0299
// converted property getter: - (unsigned)length;	// 0x346a0389
- (void *)mutableBytes;	// 0x346a0391
- (oneway void)release;	// 0x346a02c5
- (id)retain;	// 0x346a02b5
- (unsigned)retainCount;	// 0x346a02ed
- (BOOL)retainWeakReference;	// 0x346a02dd
// converted property setter: - (void)setLength:(unsigned)length;	// 0x346a0395
@end
