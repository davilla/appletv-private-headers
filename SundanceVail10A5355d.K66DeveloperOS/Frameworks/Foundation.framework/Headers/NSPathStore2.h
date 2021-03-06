/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSString.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString {
	unsigned _lengthAndRefCount;	// 4 = 0x4
	unsigned short _characters[0];	// 8 = 0x8
}
+ (id)pathStoreWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x3463aef1
+ (id)pathWithComponents:(id)components;	// 0x34648145
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;	// 0x34642c15
- (id)_stringByStandardizingPathUsingCache:(BOOL)cache;	// 0x346468e5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x34642de9
- (id)copyWithZone:(NSZone *)zone;	// 0x34642d8d
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x3463c9d9
- (unsigned)hash;	// 0x34642bf1
- (BOOL)isAbsolutePath;	// 0x34648815
- (BOOL)isEqualToString:(id)string;	// 0x3463afad
- (id)lastPathComponent;	// 0x34658d21
- (unsigned)length;	// 0x3463c9c5
- (id)pathComponents;	// 0x346cfe65
- (id)pathExtension;	// 0x346424a5
- (id)stringByAbbreviatingWithTildeInPath;	// 0x34668d8d
- (id)stringByAppendingPathComponent:(id)component;	// 0x3464042d
- (id)stringByAppendingPathExtension:(id)extension;	// 0x346574d1
- (id)stringByDeletingLastPathComponent;	// 0x34642421
- (id)stringByDeletingPathExtension;	// 0x34658c45
- (id)stringByExpandingTildeInPath;	// 0x34668a19
- (id)stringByResolvingSymlinksInPath;	// 0x34666ae5
- (id)stringByStandardizingPath;	// 0x346667b5
@end

