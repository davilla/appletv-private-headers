/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSSimpleCString.h"


@interface NSConstantString : NSSimpleCString {
}
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length;	// 0x31048111
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x310480a1
- (id)autorelease;	// 0x310480bd
- (const char *)cString;	// 0x310480d1
- (unsigned)cStringLength;	// 0x31048069
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x31048271
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x310481e1
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x31048415
- (id)copy;	// 0x31048099
- (id)copyWithZone:(NSZone *)zone;	// 0x3104809d
- (void)dealloc;	// 0x310484ed
- (unsigned)fastestEncoding;	// 0x31048079
- (void)finalize;	// 0x310484d1
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x31048129
- (unsigned)hash;	// 0x310484a9
- (BOOL)isEqual:(id)equal;	// 0x31048509
- (BOOL)isEqualToString:(id)string;	// 0x310482b5
- (unsigned)length;	// 0x31048059
- (const char *)lossyCString;	// 0x310480e1
- (oneway void)release;	// 0x310480cd
- (id)retain;	// 0x310480c1
- (unsigned)retainCount;	// 0x310480c5
- (unsigned)smallestEncoding;	// 0x31048089
@end

