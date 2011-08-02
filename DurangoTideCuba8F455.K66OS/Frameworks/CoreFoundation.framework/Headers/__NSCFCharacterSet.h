/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "__NSCFType.h"


__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x34292991
- (void)addCharactersInRange:(NSRange)range;	// 0x34295395
- (void)addCharactersInString:(id)string;	// 0x3429456d
- (id)bitmapRepresentation;	// 0x342956e1
- (BOOL)characterIsMember:(unsigned short)member;	// 0x34294519
- (Class)classForCoder;	// 0x342945c1
- (id)copyWithZone:(NSZone *)zone;	// 0x342956b9
- (void)encodeWithCoder:(id)coder;	// 0x342945e9
- (void)finalize;	// 0x34292d29
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x34294591
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x34294585
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x34294549
- (unsigned)hash;	// 0x34293915
- (void)invert;	// 0x3429459d
- (id)invertedSet;	// 0x34295709
- (BOOL)isEqual:(id)equal;	// 0x34293409
- (BOOL)isSupersetOfSet:(id)set;	// 0x34294539
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x34294529
- (void)makeCharacterSetCompact;	// 0x342945a9
- (void)makeCharacterSetFast;	// 0x342945b5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x342956cd
- (oneway void)release;	// 0x34292b25
- (void)removeCharactersInRange:(NSRange)range;	// 0x34294559
- (void)removeCharactersInString:(id)string;	// 0x34294579
- (id)retain;	// 0x34292aad
- (unsigned)retainCount;	// 0x34292ba9
@end

