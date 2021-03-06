/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableData.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	long _length;	// 8 = 0x8
	long _capacity;	// 12 = 0xc
	CFAllocatorRef _bytesDeallocator;	// 16 = 0x10
	char *_bytes;	// 20 = 0x14
}
@property(assign) unsigned length;	// G=0x327126b5; S=0x32761e5d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32761e55
- (BOOL)_isDeallocating;	// 0x32761e01
- (BOOL)_tryRetain;	// 0x32761ded
- (const void *)bytes;	// 0x3270fc0d
- (id)copyWithZone:(NSZone *)zone;	// 0x32731885
- (void)finalize;	// 0x32761e11
- (unsigned)hash;	// 0x32761de9
- (BOOL)isEqual:(id)equal;	// 0x32761dd1
// converted property getter: - (unsigned)length;	// 0x327126b5
- (void *)mutableBytes;	// 0x32761e59
- (oneway void)release;	// 0x326ff59d
- (id)retain;	// 0x32713ffd
- (unsigned)retainCount;	// 0x32761e0d
// converted property setter: - (void)setLength:(unsigned)length;	// 0x32761e5d
@end

