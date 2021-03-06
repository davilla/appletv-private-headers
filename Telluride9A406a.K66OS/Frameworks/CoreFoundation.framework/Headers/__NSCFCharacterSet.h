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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x340adb75
- (BOOL)_isDeallocating;	// 0x340adb21
- (BOOL)_tryRetain;	// 0x340adb0d
- (void)addCharactersInRange:(NSRange)range;	// 0x34067141
- (void)addCharactersInString:(id)string;	// 0x34079da1
- (id)bitmapRepresentation;	// 0x340adba9
- (BOOL)characterIsMember:(unsigned short)member;	// 0x34063931
- (Class)classForCoder;	// 0x340adbf5
- (id)copyWithZone:(NSZone *)zone;	// 0x34060d85
- (void)encodeWithCoder:(id)coder;	// 0x340adc21
- (void)finalize;	// 0x340adb31
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x340adbe5
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x340602c5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x340adb99
- (unsigned)hash;	// 0x340adb09
- (void)invert;	// 0x34060141
- (id)invertedSet;	// 0x34079f1d
- (BOOL)isEqual:(id)equal;	// 0x340adaf1
- (BOOL)isSupersetOfSet:(id)set;	// 0x340adb89
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x340adb79
- (void)makeCharacterSetCompact;	// 0x340adbed
- (void)makeCharacterSetFast;	// 0x340adbf1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3406011d
- (oneway void)release;	// 0x34060da9
- (void)removeCharactersInRange:(NSRange)range;	// 0x340adbd5
- (void)removeCharactersInString:(id)string;	// 0x340adbdd
- (id)retain;	// 0x340673a9
- (unsigned)retainCount;	// 0x340adb2d
@end

