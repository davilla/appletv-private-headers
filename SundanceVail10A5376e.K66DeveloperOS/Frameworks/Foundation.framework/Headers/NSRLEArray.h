/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSMutableCopying.h"


@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
	NSRefCountedRunArray *theList;	// 4 = 0x4
}
- (id)init;	// 0x34d2fdf1
- (id)initWithRefCountedRunArray:(NSRefCountedRunArray *)refCountedRunArray;	// 0x34d2fe05
- (void)_makeNewListFrom:(NSRefCountedRunArray *)from;	// 0x34d2fe71
- (id)copyWithZone:(NSZone *)zone;	// 0x34d4cc61
- (unsigned)count;	// 0x34e1a78d
- (void)dealloc;	// 0x34d2f901
- (id)description;	// 0x34e1a7a1
- (void)finalize;	// 0x34e1a739
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34d4b4e9
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x34d2ed95
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range runIndex:(unsigned *)index3;	// 0x34d52b85
- (id)objectAtRunIndex:(unsigned)runIndex length:(unsigned *)length;	// 0x34d52c2d
@end

