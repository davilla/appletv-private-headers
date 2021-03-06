/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSString.h> // Unknown library
#import "CoreData-Structs.h"


@interface _PFString : NSString {
	int _reserved1;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	id _sourceData;	// 16 = 0x10
	int _reserved2;	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x35bd68f1; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x35c11eed
+ (id)alloc;	// 0x35c11f41
+ (id)allocWithZone:(NSZone *)zone;	// 0x35c11f49
- (const char *)UTF8String;	// 0x35bdbb19
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x35bdb755
- (BOOL)_isDeallocating;	// 0x35c12069
- (BOOL)_tryRetain;	// 0x35c12019
- (const char *)cString;	// 0x35c12125
- (unsigned)cStringLength;	// 0x35c1214d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x35bf7775
- (id)copy;	// 0x35bde7e9
- (id)copyWithZone:(NSZone *)zone;	// 0x35c120d9
- (void)dealloc;	// 0x35c11f51
- (id)description;	// 0x35c12181
- (void)encodeWithCoder:(id)coder;	// 0x35c12095
- (void)getCString:(char *)string;	// 0x35c12129
- (void)getCharacters:(unsigned short *)characters;	// 0x35bde921
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x35bdc699
- (unsigned)hash;	// 0x35bd6795
- (BOOL)isEqual:(id)equal;	// 0x35bd67a9
- (BOOL)isEqualToString:(id)string;	// 0x35c1215d
// converted property getter: - (unsigned)length;	// 0x35bd68f1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35c120e9
- (oneway void)release;	// 0x35c11f8d
- (id)retain;	// 0x35c11f55
- (unsigned)retainCount;	// 0x35c12005
@end

