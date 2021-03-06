/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSSet, NSPersistentStoreMap;

__attribute__((visibility("hidden")))
@interface NSMappedObjectStore : NSPersistentStore {
@private
	NSPersistentStoreMap *_theMap;	// 44 = 0x2c
	NSSet *_entitiesToFetch;	// 48 = 0x30
}
@property(retain) id metadata;	// G=0x3314fc11; S=0x3314fdbd; converted property
- (id)init;	// 0x3314fc31
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x3315113d
- (void)_addObject:(id)object objectIDMap:(id)map;	// 0x3314fb41
- (id)_pathFromURI:(id)uri;	// 0x3314f805
- (id)_rawMetadata__;	// 0x3314fbf1
- (void)_removeObject:(id)object objectIDMap:(id)map;	// 0x3314fb71
- (void)_setMap:(id)map;	// 0x3314f799
- (id)_theMap;	// 0x3314f781
- (void)_updateObject:(id)object objectIDMap:(id)map;	// 0x3314fba1
- (id)dataForKey:(id)key;	// 0x3314f7e1
- (void)dealloc;	// 0x33151095
- (id)executeCountRequest:(id)request withContext:(id)context;	// 0x3314f8a5
- (id)executeFetchRequest:(id)request withContext:(id)context;	// 0x331504ed
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x3314fc8d
- (id)executeSaveChangesRequest:(id)request withContext:(id)context;	// 0x3314ff19
- (id)getNewIDForObject:(id)object;	// 0x3314fa7d
- (id)identifier;	// 0x3314fbd1
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x3314f791
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x3314f795
// converted property getter: - (id)metadata;	// 0x3314fc11
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x3314f9fd
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x3314f9a9
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x3314fe05
- (void)save;	// 0x3314f861
- (void)saveDocumentToPath:(id)path;	// 0x33151061
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x3314fdbd
@end

