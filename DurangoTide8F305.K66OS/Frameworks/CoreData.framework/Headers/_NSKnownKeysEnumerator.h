/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSEnumerator.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface _NSKnownKeysEnumerator : NSEnumerator {
@private
	id _target;	// 4 = 0x4
	id *_list;	// 8 = 0x8
	id *_referenceItems;	// 12 = 0xc
	NSRange _range;	// 16 = 0x10
	unsigned long _index;	// 24 = 0x18
	unsigned long _flags;	// 28 = 0x1c
}
- (id)initWithArray:(const id *)array forTarget:(id)target withReferenceValues:(const id *)referenceValues andRange:(NSRange)range andCopyItems:(BOOL)items;	// 0x342fdd41
- (void)_invalidate;	// 0x342fbf21
- (void)dealloc;	// 0x342fd1a1
- (id)nextObject;	// 0x342fbdfd
@end

