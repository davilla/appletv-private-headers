/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectContext, NSMutableDictionary, NSString, NSNotification, NSPersistentStoreCoordinator, NSDictionary;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsHelper : NSObject {
@private
	NSDictionary *_transactionRecordContent;	// 4 = 0x4
	NSDictionary *_transactionObjectsData;	// 8 = 0x8
	NSString *_externalRecordsPath;	// 12 = 0xc
	NSString *_transactionLogPath;	// 16 = 0x10
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 20 = 0x14
	NSManagedObjectContext *_managedObjectContext;	// 24 = 0x18
	NSString *_storeIdentifier;	// 28 = 0x1c
	NSMutableDictionary *_deletedObjectsByPK;	// 32 = 0x20
	NSMutableDictionary *_updatedObjectsByPK;	// 36 = 0x24
	NSMutableDictionary *_insertedObjectsByPK;	// 40 = 0x28
	NSMutableDictionary *_allWorkingObjectsByPK;	// 44 = 0x2c
	NSMutableDictionary *_externalAttributesByEntityName;	// 48 = 0x30
	NSMutableDictionary *_externalRelationshipsByEntityName;	// 52 = 0x34
	NSNotification *_importContextSaveNotification;	// 56 = 0x38
	int _ubiquity_import_debug_level;	// 60 = 0x3c
	BOOL _importAllRecords;	// 64 = 0x40
}
@property(readonly, assign) NSDictionary *deletedObjectsByPK;	// G=0x331b943d; @synthesize=_deletedObjectsByPK
@property(retain) NSString *externalRecordsPath;	// G=0x331b9751; S=0x331b972d; @synthesize=_externalRecordsPath
@property(assign) BOOL importAllRecords;	// G=0x331b93fd; S=0x331b940d; @synthesize=_importAllRecords
@property(retain) NSNotification *importContextSaveNotification;	// G=0x331b97c9; S=0x331b97a5; @synthesize=_importContextSaveNotification
@property(readonly, assign) NSDictionary *insertedObjectsByPK;	// G=0x331b941d; @synthesize=_insertedObjectsByPK
@property(assign) NSManagedObjectContext *managedObjectContext;	// G=0x331b944d; S=0x331b945d; @synthesize=_managedObjectContext
@property(assign) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x331b946d; S=0x331b947d; @synthesize=_persistentStoreCoordinator
@property(retain) NSString *storeIdentifier;	// G=0x331b978d; S=0x331b9769; @synthesize=_storeIdentifier
@property(retain) NSString *transactionLogPath;	// G=0x331b9715; S=0x331b96f1; @synthesize=_transactionLogPath
@property(retain) NSDictionary *transactionObjectsData;	// G=0x331b96d9; S=0x331b96b5; @synthesize=_transactionObjectsData
@property(retain) NSDictionary *transactionRecordContent;	// G=0x331b969d; S=0x331b9679; @synthesize=_transactionRecordContent
@property(readonly, assign) NSDictionary *updatedObjectsByPK;	// G=0x331b942d; @synthesize=_updatedObjectsByPK
- (id)initForImportWithExternalRecordsPath:(id)externalRecordsPath persistentStoreCoordinator:(id)coordinator;	// 0x331b948d
- (void)_importContextDidSave:(id)_importContext;	// 0x331b97e1
- (id)_initializeTransactionRecord:(id *)record;	// 0x331bb365
- (id)_objectsWithPrimaryKeys:(id)primaryKeys error:(id *)error;	// 0x331b97f1
- (id)_prepareFullImportTransactionContent:(id *)content;	// 0x331bb1e1
- (BOOL)_prepareTransactionObjects:(id *)objects;	// 0x331baa69
- (BOOL)_processDeletedObjects:(id *)objects;	// 0x331ba94d
- (BOOL)_processInsertedObjects:(id *)objects;	// 0x331ba829
- (BOOL)_processUpdatedObjects:(id *)objects;	// 0x331ba705
- (BOOL)_setStateForObject:(id)object error:(id *)error;	// 0x331ba089
- (void)dealloc;	// 0x331bbbad
// declared property getter: - (id)deletedObjectsByPK;	// 0x331b943d
- (id)externalAttributesForEntity:(id)entity;	// 0x331b9f1d
// declared property getter: - (id)externalRecordsPath;	// 0x331b9751
- (id)externalRelationshipsForEntity:(id)entity;	// 0x331b9db1
// declared property getter: - (BOOL)importAllRecords;	// 0x331b93fd
// declared property getter: - (id)importContextSaveNotification;	// 0x331b97c9
- (id)importUbiquityExternalRecords:(id *)records;	// 0x331bb7a9
// declared property getter: - (id)insertedObjectsByPK;	// 0x331b941d
// declared property getter: - (id)managedObjectContext;	// 0x331b944d
- (id)objectForEntityName:(id)entityName primaryKey:(id)key;	// 0x331b9b3d
// declared property getter: - (id)persistentStoreCoordinator;	// 0x331b946d
// declared property setter: - (void)setExternalRecordsPath:(id)path;	// 0x331b972d
// declared property setter: - (void)setImportAllRecords:(BOOL)records;	// 0x331b940d
// declared property setter: - (void)setImportContextSaveNotification:(id)notification;	// 0x331b97a5
// declared property setter: - (void)setManagedObjectContext:(id)context;	// 0x331b945d
// declared property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x331b947d
// declared property setter: - (void)setStoreIdentifier:(id)identifier;	// 0x331b9769
// declared property setter: - (void)setTransactionLogPath:(id)path;	// 0x331b96f1
// declared property setter: - (void)setTransactionObjectsData:(id)data;	// 0x331b96b5
// declared property setter: - (void)setTransactionRecordContent:(id)content;	// 0x331b9679
// declared property getter: - (id)storeIdentifier;	// 0x331b978d
// declared property getter: - (id)transactionLogPath;	// 0x331b9715
// declared property getter: - (id)transactionObjectsData;	// 0x331b96d9
// declared property getter: - (id)transactionRecordContent;	// 0x331b969d
// declared property getter: - (id)updatedObjectsByPK;	// 0x331b942d
@end

