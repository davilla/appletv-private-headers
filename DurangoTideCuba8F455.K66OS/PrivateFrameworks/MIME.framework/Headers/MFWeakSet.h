/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFWeakObject.h"
#import "MIME-Structs.h"
#import "MFWeakReferenceHolder.h"


@interface MFWeakSet : MFWeakObject <MFWeakReferenceHolder> {
@private
	CFSetRef _set;	// 4 = 0x4
}
- (id)init;	// 0x3150e4e9
- (void)addObject:(id)object;	// 0x3150e585
- (id)allObjects;	// 0x3150e5f5
- (void)applyFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x3150e64d
- (void)dealloc;	// 0x3150e531
- (void)objectWillBeDeallocated:(id)object;	// 0x3150e56d
- (void)removeObject:(id)object;	// 0x3150e5bd
@end

