/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStoreRequest.h"

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {
	NSSet *_insertedObjects;	// 8 = 0x8
	NSSet *_updatedObjects;	// 12 = 0xc
	NSSet *_deletedObjects;	// 16 = 0x10
	NSSet *_optimisticallyLockedObjects;	// 20 = 0x14
	void *_reserved1;	// 24 = 0x18
	void *_reserved2;	// 28 = 0x1c
}
@property(retain) NSSet *deletedObjects;	// G=0x35c741c1; S=0x35c741e5; converted property
@property(readonly, retain) NSSet *insertedObjects;	// G=0x35c741a1; converted property
@property(readonly, retain) NSSet *updatedObjects;	// G=0x35c741b1; converted property
+ (void)initialize;	// 0x35c73fc9
- (id)init;	// 0x35c74139
- (id)initWithInsertedObjects:(id)insertedObjects updatedObjects:(id)objects deletedObjects:(id)objects3 lockedObjects:(id)objects4;	// 0x35c73fe5
- (void)dealloc;	// 0x35c74091
// converted property getter: - (id)deletedObjects;	// 0x35c741c1
- (BOOL)hasChanges;	// 0x35c74241
// converted property getter: - (id)insertedObjects;	// 0x35c741a1
- (id)lockedObjects;	// 0x35c741d1
- (unsigned)requestType;	// 0x35c741e1
// converted property setter: - (void)setDeletedObjects:(id)objects;	// 0x35c741e5
// converted property getter: - (id)updatedObjects;	// 0x35c741b1
@end
