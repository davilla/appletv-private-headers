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
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x302cd959
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x302cd969
- (void)_proxyNonGCFinalize;	// 0x302cd9d1
- (unsigned)count;	// 0x302cda25
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x302cda55
- (id)objectAtIndex:(unsigned)index;	// 0x302cdac9
- (id)objectsAtIndexes:(id)indexes;	// 0x302cdb89
@end

