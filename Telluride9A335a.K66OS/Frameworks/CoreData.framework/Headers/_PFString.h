/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSString.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFString : NSString {
@private
	int _reserved1;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	id _sourceData;	// 16 = 0x10
	int _reserved2;	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x33107a81; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33107a69
+ (id)alloc;	// 0x33107fc1
+ (id)allocWithZone:(NSZone *)zone;	// 0x33107fc9
- (const char *)UTF8String;	// 0x33107ae1
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x33107add
- (BOOL)_isDeallocating;	// 0x33107b35
- (BOOL)_tryRetain;	// 0x33107b5d
- (const char *)cString;	// 0x33107ad9
- (unsigned)cStringLength;	// 0x33107ae5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x33107a91
- (id)copy;	// 0x33107c7d
- (id)copyWithZone:(NSZone *)zone;	// 0x33107c8d
- (void)dealloc;	// 0x33107af9
- (id)description;	// 0x33107cd9
- (void)encodeWithCoder:(id)coder;	// 0x33107c39
- (void)getCString:(char *)string;	// 0x33107e09
- (void)getCharacters:(unsigned short *)characters;	// 0x33107a9d
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x33107abd
- (unsigned)hash;	// 0x33107e2d
- (BOOL)isEqual:(id)equal;	// 0x33107f55
- (BOOL)isEqualToString:(id)string;	// 0x33107f99
// converted property getter: - (unsigned)length;	// 0x33107a81
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33107c9d
- (oneway void)release;	// 0x33107bb9
- (id)retain;	// 0x33107afd
- (unsigned)retainCount;	// 0x33107a6d
@end

