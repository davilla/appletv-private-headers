/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPersistentStore.h"

@class NSSet, NSMutableDictionary, NSSaveChangesRequest, NSSQLAdapter, NSSQLModel, NSManagedObjectContext, NSSQLConnection, NSSQLEntity, NSSQLRow, NSMutableArray, NSSQLRowCache, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLCore : NSPersistentStore {
@private
	NSSQLModel *_model;	// 44 = 0x2c
	NSSQLAdapter *_adapter;	// 48 = 0x30
	NSSQLConnection *_connection;	// 52 = 0x34
	NSMutableArray *_channels;	// 56 = 0x38
	NSManagedObjectContext *_currentContext;	// 60 = 0x3c
	NSSQLEntity *_lastEntity;	// 64 = 0x40
	NSSQLRowCache *_rowCache;	// 68 = 0x44
	NSMutableDictionary *_uniqueTable;	// 72 = 0x48
	NSMutableArray *_toManyCache;	// 76 = 0x4c
	CFSetRef _deleteTable;	// 80 = 0x50
	NSSet *_lockedObjects;	// 84 = 0x54
	CFDictionaryRef _dbOperationsByGlobalID;	// 88 = 0x58
	NSSaveChangesRequest *_currentSaveRequest;	// 92 = 0x5c
	int _lazyFaultDebugLevel;	// 96 = 0x60
	NSMutableDictionary *_batchFaultBuffer;	// 100 = 0x64
	NSMutableDictionary *_batchToManyFaultBuffer;	// 104 = 0x68
	NSScalarObjectID *_currentGlobalID;	// 108 = 0x6c
	NSSQLRow *_currentRow;	// 112 = 0x70
	id _observer;	// 116 = 0x74
	NSMutableSet *_missingObjectGIDs;	// 120 = 0x78
	NSMutableDictionary *_storeMetadata;	// 124 = 0x7c
	NSMutableArray *_externalDataReferencesToSave;	// 128 = 0x80
	NSMutableArray *_externalDataReferencesToDelete;	// 132 = 0x84
	NSString *_externalDataReferencesDirectory;	// 136 = 0x88
	NSString *_externalDataLinksDirectory;	// 140 = 0x8c
	int _transactionInMemorySequence;	// 144 = 0x90
	int _debug;	// 148 = 0x94
	sqlCoreFlags _sqlCoreFlags;	// 152 = 0x98
}
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x33f3e139; converted property
@property(readonly, retain) NSMutableArray *channels;	// G=0x33f51a65; converted property
@property(readonly, retain) NSSQLConnection *connection;	// G=0x33f3e0e9; converted property
@property(retain) NSManagedObjectContext *currentContext;	// G=0x33f51c89; S=0x33f47e31; converted property
@property(retain) id databaseUUID;	// G=0x33f449cd; S=0x33fe7765; converted property
@property(readonly, retain) NSString *externalDataLinksDirectory;	// G=0x33f42d95; converted property
@property(readonly, retain) NSString *externalDataReferencesDirectory;	// G=0x33f42961; converted property
@property(readonly, retain) NSMutableArray *externalDataReferencesToDelete;	// G=0x33fe7599; converted property
@property(readonly, retain) NSMutableArray *externalDataReferencesToSave;	// G=0x33fe754d; converted property
@property(retain) id metadata;	// G=0x33f4343d; S=0x33f44de1; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x33f4499d; converted property
@property(readonly, retain) NSSQLRowCache *rowCache;	// G=0x33f487a9; converted property
+ (BOOL)SQLGenerationV1Default;	// 0x33f48e81
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x33fe800d
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x33fe8061
+ (BOOL)coloredLoggingDefault;	// 0x33f3dd25
+ (int)debugDefault;	// 0x33f3dd15
+ (void)initialize;	// 0x33f659d9
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x33fe8f91
+ (Class)migrationManagerClass;	// 0x33fe7dd9
+ (BOOL)sanityCheckFileAtURL:(id)url error:(id *)error;	// 0x33fe7df5
+ (void)setColoredLoggingDefault:(BOOL)aDefault;	// 0x33fe5d85
+ (void)setDebugDefault:(int)aDefault;	// 0x33fe5d75
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x33fe8c49
+ (void)setSQLGenerationV1Default:(BOOL)aDefault;	// 0x33fe5d95
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x33f37bc5
- (id)_addDatabaseContextStateToException:(id)exception;	// 0x33fe6729
- (void)_addDeletesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x33fe6d6d
- (void)_addInsertsToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x33ff1b6d
- (void)_addManyToManysToDatabaseOp:(id)databaseOp;	// 0x33fe83e9
- (void)_addUpdatesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x33ff1e95
- (void)_assertValidStateWithSelector:(SEL)selector;	// 0x33ff6581
- (id)_availableChannel;	// 0x33f5193d
- (id)_availableChannelFromRegisteredChannels;	// 0x33f519ed
- (void)_beginTransaction:(id)transaction;	// 0x33ff846d
- (void)_checkAndRepairCorrelationTables:(BOOL)tables storeVersionNumber:(id)number;	// 0x33fe8711
- (void)_cleanUpAfterSave;	// 0x33fe66ad
- (void)_cleanUpAfterTransaction;	// 0x33fe6081
- (id)_collectSkewedComponents:(id *)components;	// 0x33fee375
- (void)_commitTransaction:(id)transaction;	// 0x33ff8211
- (id)_databaseContextState;	// 0x33fe670d
- (void)_disconnect;	// 0x33f5f215
- (id)_dissectCorrelationTableCreationSQL:(id)sql;	// 0x33fee94d
- (void)_ensureDatabaseMatchesModel;	// 0x33f44029
- (id)_entityForObject:(id)object;	// 0x33fe7175
- (unsigned)_knownEntityKeyForObject:(id)object;	// 0x33fe6a71
- (unsigned)_knownEntityKeyForObjectID:(id)objectID;	// 0x33fe69d5
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from inverseToMany:(id)many;	// 0x33ff6495
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from orderedManyToMany:(id)many;	// 0x33ff63a9
- (long long)_knownPrimaryKeyForObject:(id)object;	// 0x33fe699d
- (long long)_knownPrimaryKeyForObjectID:(id)objectID;	// 0x33fe6919
- (id)_loadAndSetMetadata;	// 0x33f3dfdd
- (id)_loadAndSetMetadataReadOnly;	// 0x33fe7755
- (id)_newAdapterForModel:(id)model;	// 0x33f3e179
- (id)_newConflictRecordForObject:(id)object originalRow:(id)row newRow:(id)row3;	// 0x33fe7421
- (id)_newObjectGraphStyleForSQLRow:(id)sqlrow withObject:(id)object;	// 0x33ff0afd
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)relationship rowCacheOriginal:(id)original originalSnapshot:(id)snapshot value:(id)value added:(id)added deleted:(id)deleted sourceRowPK:(long long)pk properties:(id)properties sourceObject:(id)object reorderedIndexes:(char **)indexes;	// 0x33ff2fc1
- (id)_newRowsForFetchPlan:(id)fetchPlan selectedBy:(SEL)by withArgument:(id)argument;	// 0x33f504e9
- (Class)_objectIDClass;	// 0x33f54331
- (id)_obtainOpenChannel;	// 0x33f5184d
- (unsigned)_orderKeyForObject:(id)object fromSourceObjectID:(id)sourceObjectID inverseRelationship:(id)relationship inOrderedSet:(id)orderedSet;	// 0x33fe6bad
- (void)_performChangesWithAdapterOps:(id)adapterOps;	// 0x33ff04f9
- (id)_performExhaustiveConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x33ff07a9
- (BOOL)_performFastConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x33ff0d29
- (void)_performPostSaveTasks;	// 0x33fe7db1
- (void)_populateOrderKeysInOrderedSet:(id)orderedSet usingSourceObjectID:(id)anId inverseRelationship:(id)relationship reorderedIndexes:(char **)indexes;	// 0x33fe6aa9
- (void)_populateRowForOp:(id)op withObject:(id)object;	// 0x33ff54f9
- (id)_predicateForSelectingObjectForOperation:(id)operation;	// 0x33fe8225
- (void)_prefetchRelationshipKey:(id)key sourceEntityDescription:(id)description sourceObjectIDs:(id)ids prefetchRelationshipKeys:(id)keys inContext:(id)context;	// 0x33fea245
- (void)_prefetchWithFetchRequest:(id)fetchRequest withObjectIDs:(id)objectIDs inContext:(id)context;	// 0x33fe7b09
- (id)_prepareDictionaryResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(id)plan;	// 0x33ff6d21
- (id)_prepareResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(id)plan withMatchingRows:(id *)matchingRows;	// 0x33f53065
- (void)_purgeRowCache;	// 0x33fe7d89
- (void)_repairDatabaseCorrelationTables:(id)tables brokenHashModel:(id)model storeVersionNumber:(id)number recurse:(BOOL)recurse;	// 0x33feea81
- (CFArrayRef)_rowsForConflictDetection:(id)conflictDetection withChannel:(id)channel;	// 0x33fe71a9
- (void)_setMetadata:(id)metadata;	// 0x33f433a1
- (id)_ubiquityDictionaryForAttribute:(id)attribute onObject:(id)object;	// 0x33fe75e5
// converted property getter: - (id)adapter;	// 0x33f3e139
- (id)availableChannel;	// 0x33fe6671
- (void)beginTransaction;	// 0x33fe5f39
- (void)beginTransaction_NotificationFree;	// 0x33fe5f29
- (void)beginTransaction_core;	// 0x33fe5ed1
// converted property getter: - (id)channels;	// 0x33f51a65
- (void)commitChanges:(id)changes;	// 0x33fef7e1
- (void)commitTransaction;	// 0x33fe6191
- (void)commitTransaction_NotificationFree;	// 0x33fe6181
- (void)commitTransaction_core;	// 0x33fe6125
// converted property getter: - (id)connection;	// 0x33f3e0e9
- (id)countForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x33ff6635
- (void)createAdapterOperationsForDatabaseOperation:(id)databaseOperation;	// 0x33fe6e4d
- (id)createChannel;	// 0x33fe5da5
// converted property getter: - (id)currentContext;	// 0x33f51c89
- (id)databaseOperationForGlobalID:(id)globalID;	// 0x33ff5241
- (id)databaseOperationForObject:(id)object;	// 0x33fe88d1
// converted property getter: - (id)databaseUUID;	// 0x33f449cd
- (void)dealloc;	// 0x33f5faa9
- (void)deleteExternalDataReferences:(id)references;	// 0x33fef5a9
- (id)entityForEntityDescription:(id)entityDescription;	// 0x33fe8151
- (id)entityForFetchRequest:(id)fetchRequest;	// 0x33f48bd5
- (id)entityForObject:(id)object;	// 0x33fe80e1
- (id)entityNameOrderingArrayForEntities:(id)entities;	// 0x33fe5da9
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x33f47a79
// converted property getter: - (id)externalDataLinksDirectory;	// 0x33f42d95
// converted property getter: - (id)externalDataReferencesDirectory;	// 0x33f42961
// converted property getter: - (id)externalDataReferencesToDelete;	// 0x33fe7599
// converted property getter: - (id)externalDataReferencesToSave;	// 0x33fe754d
- (id)externalLocationForFileWithUUID:(id)uuid;	// 0x33fe74f5
- (id)fetchRowForObjectID:(NSScalarObjectID *)objectID;	// 0x33fedc25
- (int)fileProtectionLevel;	// 0x33f3f001
- (void)forgetSnapshotForGlobalID:(id)globalID;	// 0x33ff7add
- (void)forgetSnapshotsForGlobalIDs:(id)globalIDs;	// 0x33ff79f5
- (void)generatePrimaryKeysForEntity:(id)entity;	// 0x33fe8641
- (id)hackQueryForManyToManyPrefetching:(id)manyPrefetching andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x33fed379
- (BOOL)handlesFetchRequest:(id)request;	// 0x33fe7155
- (id)identifier;	// 0x33f449bd
- (void)insertEntity:(id)entity intoOrderingArray:(id)array withDependencies:(id)dependencies processingSet:(id)set;	// 0x33fe6f4d
- (void)invalidateObjectsWithGlobalIDs:(id)globalIDs;	// 0x33fe669d
- (const id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x33ff8da9
- (BOOL)load:(id *)load;	// 0x33f43ee5
- (BOOL)loadMetadata:(id *)metadata;	// 0x33f3dda1
- (id)localSnapshotForGlobalID:(id)globalID;	// 0x33ff7ab5
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x33ff8ead
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x33f5d27d
// converted property getter: - (id)metadata;	// 0x33f4343d
- (id)missingObjectGlobalIDs;	// 0x33fe6651
// converted property getter: - (id)model;	// 0x33f4499d
- (id)newAdapterForModel:(id)model;	// 0x33fe5e99
- (id)newFaultingPredicateForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x33fe7881
- (id)newFetchedPKsForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x33fec1ad
- (NSScalarObjectID *)newForeignKeyID:(long long)anId entity:(id)entity;	// 0x33fe5dfd
- (NSScalarObjectID *)newObjectIDForEntity:(id)entity pk:(long long)pk;	// 0x33fe5dbd
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)manyPrefetchingRequest andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x33fecd1d
- (id)newRowsForFetchPlan:(id)fetchPlan;	// 0x33f489a9
- (id)newSortDescriptorForOrderedRelationship:(id)orderedRelationship;	// 0x33fe780d
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x33ff8685
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x33f5a995
- (id)objectIDFactoryForEntity:(id)entity;	// 0x33ff8f65
- (Class)objectIDFactoryForSQLEntity:(id)sqlentity;	// 0x33f54235
- (id)objectsForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x33f47e41
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x33fe97e5
- (id)orderAdapterOperations;	// 0x33ff1689
- (BOOL)ownsGlobalID:(id)anId;	// 0x33fe7049
- (BOOL)ownsObject:(id)object;	// 0x33fe70ed
- (void)performChanges;	// 0x33feff99
- (id)permanentObjectIDForObjectInTransaction:(id)transaction;	// 0x33fe6cad
- (void)prepareForSave:(id)save;	// 0x33ff11fd
- (id)rawSQLTextForToManyFaultStatement:(id)manyFaultStatement stripBindVariables:(BOOL)variables swapEKPK:(BOOL)ekpk;	// 0x33fed7bd
- (void)recomputePrimaryKeyMaxForEntities:(id)entities;	// 0x33fe950d
- (void)recordChangesInContext:(id)context;	// 0x33ff0ee1
- (void)recordDatabaseOperation:(id)operation;	// 0x33ff5265
- (void)recordDeleteForObject:(id)object;	// 0x33ff52bd
- (void)recordPrimaryKey:(long long)key forInsertedObject:(id)insertedObject withSQLEntity:(id)sqlentity;	// 0x33fe6bed
- (void)recordSnapshot:(id)snapshot forObjectID:(id)objectID;	// 0x33ff80b5
- (void)recordToMany:(id)many forSourceObjectID:(id)sourceObjectID relationshipName:(id)name orderKeys:(id)keys;	// 0x33ff7bf9
- (void)recordToManyInsertsForObject:(id)object withOperation:(id)operation;	// 0x33ff4d21
- (void)recordToManyUpdatesForObject:(id)object withOperation:(id)operation;	// 0x33ff231d
- (void)recordUpdateForObject:(id)object;	// 0x33fe8185
- (void)recordValuesForInsertedObject:(id)insertedObject;	// 0x33fe6d0d
- (id)refreshObjects:(id)objects;	// 0x33fe5dad
- (void)registerChannel:(id)channel;	// 0x33f51b25
- (void)rollbackChanges;	// 0x33fefcc1
- (void)rollbackTransaction;	// 0x33fe645d
- (void)rollbackTransaction_core;	// 0x33fe63f1
// converted property getter: - (id)rowCache;	// 0x33f487a9
- (id)rowForObjectID:(id)objectID;	// 0x33fe661d
- (id)rowForObjectID:(id)objectID after:(double)after;	// 0x33fe65a5
- (id)safeguardLocationForFileWithUUID:(id)uuid;	// 0x33fe7521
- (id)saveChanges:(id)changes;	// 0x33fef0cd
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x33f47e31
// converted property setter: - (void)setDatabaseUUID:(id)uuid;	// 0x33fe7765
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x33fe5e51
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x33f44de1
- (void)setURL:(id)url;	// 0x33ff8fd5
- (id)type;	// 0x33f43369
- (void)unregisterChannel:(id)channel;	// 0x33ff85ad
- (void)willRemoveFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x33f5eed1
- (id)writeExternalDataReferences;	// 0x33fef64d
@end
