/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableArray.h"

@class NSKeyValueNonmutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray {
@private
	NSKeyValueNonmutatingArrayMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x30676959
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x30676969
- (void)_proxyNonGCFinalize;	// 0x306769d1
- (unsigned)count;	// 0x30676a25
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x30676a55
- (id)objectAtIndex:(unsigned)index;	// 0x30676ac9
- (id)objectsAtIndexes:(id)indexes;	// 0x30676b89
@end

