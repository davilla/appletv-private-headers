/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDRoot : ESDObject {
@private
	NSMutableArray *mChildren;	// 16 = 0x10
}
- (id)init;	// 0x32af659d
- (id)initFromReader:(OcReader *)reader;	// 0x32c0f039
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x32af6901
- (void)addChild:(id)child;	// 0x32cdf9b1
- (id)childAt:(unsigned)at;	// 0x32b83ed9
- (unsigned)childCount;	// 0x32b83eb9
- (void)dealloc;	// 0x32afafdd
- (EshRoot *)eshRoot;	// 0x32be7369
- (id)pbInitWithState:(id)state;	// 0x32be71b1
- (id)pbReferenceWithID:(unsigned long)anId;	// 0x32b83e21
@end

