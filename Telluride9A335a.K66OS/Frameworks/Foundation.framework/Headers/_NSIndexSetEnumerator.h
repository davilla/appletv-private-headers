/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSEnumerator.h> // Unknown library

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface _NSIndexSetEnumerator : NSEnumerator {
@private
	NSIndexSet *_indexSet;	// 4 = 0x4
	unsigned _index;	// 8 = 0x8
}
- (id)initWithIndexSet:(id)indexSet;	// 0x3207b449
- (void)dealloc;	// 0x3207b4bd
- (id)nextObject;	// 0x3207b509
@end

