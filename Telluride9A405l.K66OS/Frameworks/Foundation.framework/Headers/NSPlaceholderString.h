/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSString.h"
#import "Foundation-Structs.h"


@interface NSPlaceholderString : NSString {
}
- (id)init;	// 0x3028eea5
- (id)initWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x302585e5
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x3029ffd1
- (id)initWithCString:(const char *)cstring;	// 0x302f09c9
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x30252ce5
- (id)initWithCString:(const char *)cstring length:(unsigned)length;	// 0x302f0999
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x30254555
- (id)initWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x30255ab1
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3025a39d
- (id)initWithData:(id)data encoding:(unsigned)encoding;	// 0x30294019
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x30253c61
- (id)initWithString:(id)string;	// 0x3027747d
- (BOOL)_isDeallocating;	// 0x302f098d
- (BOOL)_tryRetain;	// 0x302f0991
- (id)autorelease;	// 0x302f0979
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x302f0a21
- (void)dealloc;	// 0x302f0995
- (unsigned)length;	// 0x302f09f1
- (oneway void)release;	// 0x302f0989
- (id)retain;	// 0x302f097d
- (unsigned)retainCount;	// 0x302f0981
@end

