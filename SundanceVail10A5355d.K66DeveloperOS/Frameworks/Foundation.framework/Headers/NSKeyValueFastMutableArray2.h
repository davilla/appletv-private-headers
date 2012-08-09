/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableArray.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x346babd9
- (id)_nonNilArrayValueWithSelector:(SEL)selector;	// 0x346baca1
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x346babe9
- (void)_proxyNonGCFinalize;	// 0x346bac51
- (unsigned)count;	// 0x346bad35
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x346bad61
- (id)objectAtIndex:(unsigned)index;	// 0x346bad99
- (id)objectsAtIndexes:(id)indexes;	// 0x346badc9
@end
