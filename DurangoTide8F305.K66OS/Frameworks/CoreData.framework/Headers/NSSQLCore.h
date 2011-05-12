/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPersistentStore.h"

@class NSSQLRow, NSSQLRowCache, NSSQLEntity, NSMutableArray, NSMutableSet, NSSet, NSSaveChangesRequest, NSSQLAdapter, NSSQLModel, NSString, NSManagedObjectContext, NSMutableDictionary, NSSQLConnection;

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
	int _currentGeneration;	// 140 = 0x8c
	int _debug;	// 144 = 0x90
	sqlCoreFlags _sqlCoreFlags;	// 148 = 0x94
}
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x34298119; converted property
@property(readonly, retain) NSMutableArray *channels;	// G=0x3429daf9; converted property
@property(readonly, retain) NSSQLConnection *connection;	// G=0x34296a51; converted property
@property(retain) NSManagedObjectContext *currentContext;	// G=0x3429db7d; S=0x34297111; converted property
@property(retain) id databaseUUID;	// G=0x342c0339; S=0x34335755; converted property
@property(readonly, retain) NSString *externalDataReferencesDirectory;	// G=0x34336855; converted property
@property(readonly, retain) NSMutableArray *externalDataReferencesToDelete;	// G=0x34335795; converted property
@property(readonly, retain) NSMutableArray *externalDataReferencesToSave;	// G=0x343357e1; converted property
@property(retain) id metadata;	// G=0x342bf215; S=0x342c0749; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x34297e19; converted property
@property(readonly, retain) NSSQLRowCache *rowCache;	// G=0x34297e59; converted property
+ (BOOL)SQLGenerationV1Default;	// 0x3429852d
+ (BOOL)_destroyPersistentStoreAtURL:(id)url error:(id *)error;	// 0x343354c9
+ (BOOL)coloredLoggingDefault;	// 0x342bc9e9
+ (int)debugDefault;	// 0x342bc9dd
+ (void)initialize;	// 0x342b0c09
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x343372c5
+ (Class)migrationManagerClass;	// 0x34336511
+ (BOOL)sanityCheckFileAtURL:(id)url error:(id *)error;	// 0x343437f9
+ (void)setColoredLoggingDefault:(BOOL)aDefault;	// 0x34335239
+ (void)setDebugDefault:(int)aDefault;	// 0x3433522d
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x34337065
+ (void)setSQLGenerationV1Default:(BOOL)aDefault;	// 0x34335245
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x342b6ed9
- (id)_addDatabaseContextStateToException:(id)exception;	// 0x34335f31
- (void)_addDeletesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x34335bfd
- (void)_addInsertsToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x343389e1
- (void)_addManyToManysToDatabaseOp:(id)databaseOp;	// 0x34336b3d
- (void)_addUpdatesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x34338c4d
- (void)_assertValidStateWithSelector:(SEL)selector;	// 0x3433a3d5
- (id)_availableChannel;	// 0x3429d9e9
- (id)_availableChannelFromRegisteredChannels;	// 0x3429da89
- (void)_beginTransaction:(id)transaction;	// 0x3433a481
- (void)_checkAndRepairCorrelationTables:(BOOL)tables storeVersionNumber:(id)number;	// 0x3433666d
- (void)_cleanUpAfterSave;	// 0x34336119
- (void)_cleanUpAfterTransaction;	// 0x3433632d
- (id)_collectSkewedComponents:(id *)components;	// 0x34337a5d
- (void)_commitTransaction:(id)transaction;	// 0x3433904d
- (id)_databaseContextState;	// 0x343360f9
- (void)_disconnect;	// 0x342d0b59
- (id)_dissectCorrelationTableCreationSQL:(id)sql;	// 0x34341f31
- (void)_ensureDatabaseMatchesModel;	// 0x342bfbad
- (void)_ensureMetadataLoaded;	// 0x342bc9f9
- (id)_entityForObject:(id)object;	// 0x343358f9
- (unsigned)_knownEntityKeyForObject:(id)object;	// 0x34335dc9
- (unsigned)_knownEntityKeyForObjectID:(id)objectID;	// 0x34335df9
- (long long)_knownPrimaryKeyForObject:(id)object;	// 0x34335e85
- (long long)_knownPrimaryKeyForObjectID:(id)objectID;	// 0x34335eb9
- (void)_loadOrSetMetadata;	// 0x342bca1d
- (id)_newAdapterForModel:(id)model;	// 0x342bcb1d
- (id)_newConflictRecordForObject:(id)object originalRow:(id)row newRow:(id)row3;	// 0x3433582d
- (id)_newObjectGraphStyleForSQLRow:(id)sqlrow withObject:(id)object;	// 0x3433c389
- (id)_newRowsForFetchPlan:(XXStruct_lqIlCC *)fetchPlan selectedBy:(SEL)by withArgument:(id)argument;	// 0x3429cac9
- (Class)_objectIDClass;	// 0x342c16c1
- (id)_obtainOpenChannel;	// 0x3429d901
- (void)_performChangesWithAdapterOps:(id)adapterOps;	// 0x34337725
- (id)_performExhaustiveConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x34340005
- (BOOL)_performFastConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x343402f9
- (void)_performPostSaveTasks;	// 0x34335271
- (void)_populateRowForOp:(id)op withObject:(id)object;	// 0x3433b4ed
- (id)_predicateForSelectingObjectForOperation:(id)operation;	// 0x34336d61
- (void)_prefetchRelationshipKey:(id)key sourceEntityDescription:(id)description sourceObjectIDs:(id)ids prefetchRelationshipKeys:(id)keys inContext:(id)context;	// 0x34342035
- (void)_prefetchWithFetchRequest:(id)fetchRequest withObjectIDs:(id)objectIDs inContext:(id)context;	// 0x34335295
- (id)_prepareDictionaryResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(XXStruct_lqIlCC *)plan;	// 0x3433a7cd
- (id)_prepareResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(XXStruct_lqIlCC *)plan withMatchingRows:(id *)matchingRows;	// 0x3429fb19
- (void)_purgeRowCache;	// 0x342d4169
- (void)_registerForAdapterContextNotifications:(id)adapterContextNotifications;	// 0x34335251
- (void)_repairDatabaseCorrelationTables:(id)tables brokenHashModel:(id)model storeVersionNumber:(id)number recurse:(BOOL)recurse;	// 0x34337f8d
- (void)_rollbackTransaction:(id)transaction;	// 0x343362b5
- (CFArrayRef)_rowsForConflictDetection:(id)conflictDetection withChannel:(id)channel;	// 0x34343a95
- (void)_setMetadata:(id)metadata;	// 0x342bf125
- (void)_unregisterForAdapterContextNotifications:(id)adapterContextNotifications;	// 0x34335255
// converted property getter: - (id)adapter;	// 0x34298119
- (id)availableChannel;	// 0x34336181
- (void)beginTransaction;	// 0x343363cd
// converted property getter: - (id)channels;	// 0x3429daf9
- (void)commitChanges:(id)changes;	// 0x3433e045
- (void)commitTransaction;	// 0x343362d9
// converted property getter: - (id)connection;	// 0x34296a51
- (id)countForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x34339589
- (void)createAdapterOperationsForDatabaseOperation:(id)databaseOperation;	// 0x34335b11
- (id)createChannel;	// 0x34335259
// converted property getter: - (id)currentContext;	// 0x3429db7d
- (id)databaseOperationForGlobalID:(id)globalID;	// 0x3433a6c1
- (id)databaseOperationForObject:(id)object;	// 0x34339275
// converted property getter: - (id)databaseUUID;	// 0x342c0339
- (void)dealloc;	// 0x342d1331
- (void)deleteExternalDataReferences:(id)references;	// 0x34338501
- (id)entityForEntityDescription:(id)entityDescription;	// 0x343365e1
- (id)entityForFetchRequest:(id)fetchRequest;	// 0x342980cd
- (id)entityForObject:(id)object;	// 0x3433660d
- (id)entityNameOrderingArrayForEntities:(id)entities;	// 0x3433525d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x34296745
// converted property getter: - (id)externalDataReferencesDirectory;	// 0x34336855
// converted property getter: - (id)externalDataReferencesToDelete;	// 0x34335795
// converted property getter: - (id)externalDataReferencesToSave;	// 0x343357e1
- (id)fetchRowForObjectID:(NSScalarObjectID *)objectID;	// 0x34341681
- (void)forgetSnapshotForGlobalID:(id)globalID;	// 0x3433a599
- (void)forgetSnapshotsForGlobalIDs:(id)globalIDs;	// 0x3433a70d
- (void)generatePrimaryKeysForEntity:(id)entity;	// 0x34336a89
- (id)hackQueryForManyToManyPrefetching:(id)manyPrefetching andSourceObjectIDs:(id)ids;	// 0x34341c4d
- (BOOL)handlesFetchRequest:(id)request;	// 0x34335925
- (id)identifier;	// 0x342c0325
- (void)insertEntity:(id)entity intoOrderingArray:(id)array withDependencies:(id)dependencies processingSet:(id)set;	// 0x34335a2d
- (void)invalidateObjectsWithGlobalIDs:(id)globalIDs;	// 0x3433616d
- (const id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x34339d1d
- (BOOL)load:(id *)load;	// 0x342bfa91
- (id)localSnapshotForGlobalID:(id)globalID;	// 0x3433a6dd
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x34338fa5
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x34338efd
// converted property getter: - (id)metadata;	// 0x342bf215
- (id)missingObjectGlobalIDs;	// 0x343361a9
// converted property getter: - (id)model;	// 0x34297e19
- (id)newAdapterForModel:(id)model;	// 0x3433641d
- (id)newFaultingPredicateForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x34335511
- (id)newFetchedPKsForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x34341205
- (NSScalarObjectID *)newForeignKeyID:(long long)anId entity:(id)entity;	// 0x3433648d
- (NSScalarObjectID *)newObjectIDForEntity:(id)entity pk:(long long)pk;	// 0x343364d1
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)manyPrefetchingRequest andSourceObjectIDs:(id)ids;	// 0x3433fbb5
- (id)newRowsForFetchPlan:(void *)fetchPlan;	// 0x34297ee5
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x34339a25
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x34339e1d
- (id)objectIDFactoryForEntity:(id)entity;	// 0x34336f91
- (Class)objectIDFactoryForSQLEntity:(id)sqlentity;	// 0x342a0d95
- (id)objectsForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x34297121
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x343404a1
- (id)orderAdapterOperations;	// 0x3433ef09
- (BOOL)ownsGlobalID:(id)anId;	// 0x3433599d
- (BOOL)ownsObject:(id)object;	// 0x34335941
- (void)performChanges;	// 0x3433e6ed
- (void)prepareForSave:(id)save;	// 0x3433f785
- (id)rawSQLTextForToManyFaultStatement:(id)manyFaultStatement stripBindVariables:(BOOL)variables swapEKPK:(BOOL)ekpk;	// 0x34343c79
- (void)recordChangesInContext:(id)context;	// 0x34338715
- (void)recordDatabaseOperation:(id)operation;	// 0x3433dff1
- (void)recordDeleteForObject:(id)object;	// 0x3433ddb9
- (void)recordPrimaryKey:(long long)key forInsertedObject:(id)insertedObject withSQLEntity:(id)sqlentity;	// 0x34335d19
- (void)recordSnapshot:(id)snapshot forObjectID:(id)objectID;	// 0x3433a18d
- (void)recordSnapshots:(id)snapshots;	// 0x34339f91
- (void)recordToMany:(id)many forSourceObjectID:(id)sourceObjectID relationshipName:(id)name;	// 0x3433a02d
- (void)recordToManyInsertsForObject:(id)object withOperation:(id)operation;	// 0x3433d7f9
- (void)recordToManyUpdatesForObject:(id)object withOperation:(id)operation;	// 0x3433c559
- (void)recordUpdateForObject:(id)object;	// 0x34336f05
- (void)recordValuesForInsertedObject:(id)insertedObject;	// 0x34335cc5
- (id)refreshObjects:(id)objects;	// 0x34335261
- (void)registerChannel:(id)channel;	// 0x342c152d
- (void)rollbackChanges;	// 0x343375e9
- (void)rollbackTransaction;	// 0x34336261
// converted property getter: - (id)rowCache;	// 0x34297e59
- (id)rowForObjectID:(id)objectID;	// 0x343361c9
- (id)rowForObjectID:(id)objectID after:(double)after;	// 0x343361f1
- (id)saveChanges:(id)changes;	// 0x342cbc19
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x34297111
// converted property setter: - (void)setDatabaseUUID:(id)uuid;	// 0x34335755
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x3433644d
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x342c0749
- (void)setURL:(id)url;	// 0x34336ff9
- (id)type;	// 0x342bf0f1
- (void)unregisterChannel:(id)channel;	// 0x3433a305
- (void)willRemoveFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x342d0871
- (id)writeExternalDataReferences;	// 0x34338599
@end

