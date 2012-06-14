/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library
#import "Notes-Structs.h"

@class NSNumber, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSPredicate, CPExclusiveLock, NoteStoreObject, NoteAccountObject, NSMutableDictionary, NSString;

@interface NoteContext : NSObject {
@private
	NSManagedObjectModel *_managedObjectModel;	// 4 = 0x4
	NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 12 = 0xc
	NSPredicate *_searchPredicate;	// 16 = 0x10
	NoteStoreObject *_localStore;	// 20 = 0x14
	NoteAccountObject *_localAccount;	// 24 = 0x18
	CXIndexRef __SharedNoteStoreSearchIndex;	// 28 = 0x1c
	CPExclusiveLock *__SharedNoteStoreSearchIndexLock;	// 32 = 0x20
	int __SharedNoteStoreSearchIndexCount;	// 36 = 0x24
	BOOL _isIndexing;	// 40 = 0x28
	NSManagedObjectContext *_nextIdContext;	// 44 = 0x2c
	CPExclusiveLock *_nextIdLock;	// 48 = 0x30
	NSNumber *_nextId;	// 52 = 0x34
	CPExclusiveLock *_objectCreationLock;	// 56 = 0x38
	unsigned _notificationCount;	// 60 = 0x3c
	BOOL _logChanges;	// 64 = 0x40
	BOOL _indexInBatches;	// 65 = 0x41
	BOOL _hasPriorityInSaveConflicts;	// 66 = 0x42
	BOOL _inMigrator;	// 67 = 0x43
	NSString *_testingFilePrefix;	// 68 = 0x44
	NSString *_testingFilePath;	// 72 = 0x48
	NSMutableDictionary *_notePropertyObjectsRealized;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) BOOL isIndexing;	// G=0x30f0500d; @synthesize=_isIndexing
@property(readonly, retain) NoteAccountObject *localAccount;	// G=0x30efd1dd; converted property
@property(readonly, retain) NoteStoreObject *localStore;	// G=0x30efd155; converted property
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x30efffe5; 
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x30f0015d; converted property
@property(readonly, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x30f00359; converted property
+ (BOOL)databaseIsCorrupt:(id)corrupt;	// 0x30ef7f61
+ (BOOL)shouldLogIndexing;	// 0x30ef7ee5
- (id)init;	// 0x30ef9f51
- (id)initForMigrator;	// 0x30ef9c0d
- (id)initWithTestingFilePrefix:(id)testingFilePrefix;	// 0x30ef9c75
- (id)initWithTestingFilePrefix:(id)testingFilePrefix atPath:(id)path inMigrator:(BOOL)migrator;	// 0x30ef9ce9
- (id)initWithTestingFilePrefix:(id)testingFilePrefix inMigrator:(BOOL)migrator;	// 0x30ef9b79
- (void).cxx_destruct;	// 0x30f05029
- (void)_createLocalAccount:(id *)account andStore:(id *)store;	// 0x30ef8251
- (id)_notePropertyObjectForKey:(id)key;	// 0x30efd989
- (id)accountForAccountId:(id)accountId;	// 0x30efcd75
- (id)allAccounts;	// 0x30efca69
- (id)allNotes;	// 0x30efbd8d
- (id)allNotesInCollection:(id)collection;	// 0x30efbe8d
- (id)allNotesMatchingPredicate:(id)predicate;	// 0x30efbf71
- (id)allNotesWithoutBodiesInCollection:(id)collection;	// 0x30efc295
- (id)allStores;	// 0x30efc5e9
- (id)allVisibleNotes;	// 0x30efb63d
- (id)allVisibleNotesInCollection:(id)collection;	// 0x30efb681
- (id)allVisibleNotesMatchingPredicate:(id)predicate;	// 0x30efb765
- (void)cleanUpLocks;	// 0x30f04d31
- (void)clearCaches;	// 0x30efa5ad
- (id)collectionForInfo:(id)info;	// 0x30efc3d1
- (id)collectionForObjectID:(id)objectID;	// 0x30efa7b5
- (id)copyNotesForSearch:(void *)search complete:(char *)complete;	// 0x30f043bd
- (id)copyNotesForSearch:(void *)search predicate:(id)predicate complete:(char *)complete;	// 0x30f043f1
- (unsigned)countOfNotes;	// 0x30efbe15
- (unsigned)countOfNotesInCollection:(id)collection;	// 0x30efbf05
- (unsigned)countOfNotesMatchingPredicate:(id)notesMatchingPredicate;	// 0x30efc019
- (unsigned)countOfStores;	// 0x30efc889
- (unsigned)countOfVisibleNotes;	// 0x30efb661
- (unsigned)countOfVisibleNotesInCollection:(id)collection;	// 0x30efb6f9
- (unsigned)countOfVisibleNotesMatchingPredicate:(id)visibleNotesMatchingPredicate;	// 0x30efb8dd
- (void)dealloc;	// 0x30ef9fb1
- (id)defaultStoreForNewNote;	// 0x30efd02d
- (BOOL)deleteAccount:(id)account;	// 0x30efd5b1
- (void)deleteChanges:(id)changes;	// 0x30efab91
- (BOOL)deleteIndexFile;	// 0x30f04f8d
- (void)deleteNote:(id)note;	// 0x30efa8ed
- (void)deleteNoteRegardlessOfConstraints:(id)constraints;	// 0x30efab3d
- (BOOL)deleteStore:(id)store;	// 0x30efd63d
- (void)destroySearchIndex;	// 0x30f019b5
- (void)enableChangeLogging:(BOOL)logging;	// 0x30efacc9
- (id)findNotesWithText:(id)text betweenDate:(id)date andDate:(id)date3;	// 0x30f04745
- (BOOL)forceDeleteAccount:(id)account;	// 0x30efd43d
- (void)forceSetUpUniqueObjects;	// 0x30ef8c9d
- (id)getNextIdObject;	// 0x30efef9d
- (void)handleMigration;	// 0x30efde25
- (BOOL)handleSaveErrors:(id)errors;	// 0x30efaf09
- (BOOL)hasMultipleEnabledStores;	// 0x30efd8c1
- (void)indexInBatches:(BOOL)batches;	// 0x30f01e91
- (void)indexNotes:(id)notes;	// 0x30f00c5d
- (void)invalidate;	// 0x30efaced
// declared property getter: - (BOOL)isIndexing;	// 0x30f0500d
- (id)liveNotesNeedingBodiesPredicate;	// 0x30efa09d
// converted property getter: - (id)localAccount;	// 0x30efd1dd
// converted property getter: - (id)localStore;	// 0x30efd155
// declared property getter: - (id)managedObjectContext;	// 0x30efffe5
// converted property getter: - (id)managedObjectModel;	// 0x30f0015d
- (id)newFRCForCollection:(id)collection delegate:(id)delegate;	// 0x30efa115
- (id)newFetchRequestForNotes;	// 0x30efa469
- (void *)newSearchContextWithText:(id)text;	// 0x30f0432d
- (id)newlyAddedAccount;	// 0x30efcd09
- (id)newlyAddedNote;	// 0x30efa675
- (id)newlyAddedStore;	// 0x30efc57d
- (id)nextIndex;	// 0x30eff625
- (id)noteChangeWithType:(int)type store:(id)store;	// 0x30f02f8d
- (id)noteForObjectID:(id)objectID;	// 0x30efc0b1
- (BOOL)noteIsSafeToAccess:(id)access;	// 0x30f04d99
- (id)notesForIntegerIds:(id)integerIds;	// 0x30efc14d
- (id)notesToResumeIndexing;	// 0x30f00b59
- (id)pathForIndex;	// 0x30effd65
- (id)pathForPersistentStore;	// 0x30effc1d
// converted property getter: - (id)persistentStoreCoordinator;	// 0x30f00359
- (id)propertyValueForKey:(id)key;	// 0x30efddbd
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)changeLogging;	// 0x30f01eb5
- (void)removeConflictingSqliteAndIdxFiles;	// 0x30ef96f9
- (void)removeSqliteAndIdxFiles;	// 0x30ef9491
- (void)resetNotificationCount;	// 0x30f01fdd
- (void)resumeIndexing;	// 0x30f01d69
- (id)rootDirectory;	// 0x30effbe5
- (BOOL)save:(id *)save;	// 0x30efad99
- (void)saveNotesToResumeIndexing:(id)resumeIndexing;	// 0x30f008c9
- (BOOL)saveOutsideApp:(id *)app;	// 0x30efad71
- (BOOL)saveSilently:(id *)silently;	// 0x30efb4b9
- (CXIndexRef)searchIndex:(char *)index;	// 0x30f013f1
- (void)setHasPriorityInSaveConflicts:(BOOL)saveConflicts;	// 0x30efff0d
- (void)setPropertyValue:(id)value forKey:(id)key;	// 0x30efdcad
- (void)setUpCoreDataStack;	// 0x30ef9815
- (BOOL)setUpLastIndexTid;	// 0x30ef8825
- (BOOL)setUpLocalAccountAndStore;	// 0x30ef8381
- (void)setUpUniqueObjects;	// 0x30ef8dc9
- (BOOL)shouldDisableLocalStore;	// 0x30efd811
- (BOOL)shouldResumeIndexing;	// 0x30f00ae5
- (void)sortNotes:(id)notes;	// 0x30efa5d5
- (id)storeForObjectID:(id)objectID;	// 0x30efa851
- (id)storeOptions;	// 0x30ef8115
- (void)tearDownCoreDataStack;	// 0x30ef9a7d
- (void)trackChanges:(id)changes;	// 0x30f03135
- (void)updateSearchIndex:(id)index;	// 0x30f01ffd
- (id)urlForPersistentStore;	// 0x30effead
- (id)visibleNoteForObjectID:(id)objectID;	// 0x30efba45
- (id)visibleNotesForIntegerIds:(id)integerIds;	// 0x30efbba9
- (id)visibleNotesPredicate;	// 0x30ef9ff1
- (void)wrapUpIndexing;	// 0x30f01a9d
@end
