/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"


@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {
	BOOL mySet[32];	// 4 = 0x4
}
+ (id)ASCIIByteSet;	// 0x32fabb99
+ (id)asciiWhitespaceSet;	// 0x32fabbe5
+ (id)nonASCIIByteSet;	// 0x32fabb4d
+ (id)suspiciousCodepage1252ByteSet;	// 0x32fabb01
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x32faba21
- (id)initWithCString:(const char *)cstring;	// 0x32fabc79
- (id)initWithRange:(NSRange)range;	// 0x32fab971
- (id)_initWithSet:(const char *)set;	// 0x32faba7d
- (BOOL)byteIsMember:(BOOL)member;	// 0x32fab8ed
- (id)copyWithZone:(NSZone *)zone;	// 0x32fababd
- (id)invertedSet;	// 0x32fab935
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32fabc35
@end
