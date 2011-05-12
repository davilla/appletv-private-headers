/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCharacterSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface _NSPlaceholderCharacterSet : NSCharacterSet {
@private
	NSCharacterSet *_original;	// 4 = 0x4
	NSCharacterSet *_invertedSet;	// 8 = 0x8
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	} _flags;	// 12 = 0xc
}
@property(readonly, retain) NSCharacterSet *invertedSet;	// G=0x327777b5; converted property
- (id)initWithSet:(id)set options:(unsigned)options;	// 0x327775f1
- (void)_expandInverted;	// 0x32784f21
- (CFCharacterSetRef)_expandedCFCharacterSet;	// 0x32784221
- (id)autorelease;	// 0x327850c9
- (id)bitmapRepresentation;	// 0x32785375
- (BOOL)characterIsMember:(unsigned short)member;	// 0x32784339
- (void)dealloc;	// 0x32784fa1
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x32785315
// converted property getter: - (id)invertedSet;	// 0x327777b5
- (BOOL)isEmpty;	// 0x327842d1
- (BOOL)isEqual:(id)equal;	// 0x32785161
- (BOOL)isSupersetOfSet:(id)set;	// 0x3278528d
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x32785245
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32784351
- (oneway void)release;	// 0x3278500d
- (id)replacementObjectForCoder:(id)coder;	// 0x32784251
- (id)replacementObjectForKeyedArchiver:(id)keyedArchiver;	// 0x32784291
- (id)retain;	// 0x3278508d
- (unsigned)retainCount;	// 0x32785049
@end

