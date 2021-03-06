/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"
#import "CoreData-Structs.h"

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore {
	NSDictionary *_storeMetadata;	// 44 = 0x2c
	unsigned long long _lastIdentifier;	// 48 = 0x30
	void *_reserveda;	// 56 = 0x38
	void *_reservedb;	// 60 = 0x3c
}
@property(retain) id metadata;	// G=0x35cd5555; S=0x35cd57e9; converted property
+ (id)identifierForNewStoreAtURL:(id)url;	// 0x35cd5351
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x35cd536d
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x35cd5445
- (void)_preflightCrossCheck;	// 0x35cd5da1
- (BOOL)_prepareForExecuteRequest:(id)executeRequest withContext:(id)context error:(id *)error;	// 0x35cd5b39
- (id)_rawMetadata__;	// 0x35cd5d91
- (void)dealloc;	// 0x35cd5501
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x35cd5ca5
- (BOOL)load:(id *)load;	// 0x35cd5551
- (BOOL)loadMetadata:(id *)metadata;	// 0x35cd5971
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x35cd5cd9
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x35cd5cdd
// converted property getter: - (id)metadata;	// 0x35cd5555
- (id)newObjectIDForEntity:(id)entity referenceObject:(id)object;	// 0x35cd5ce1
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x35cd5c71
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x35cd5c3d
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x35cd59a5
- (id)referenceObjectForObjectID:(id)objectID;	// 0x35cd5d1d
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x35cd57e9
@end

