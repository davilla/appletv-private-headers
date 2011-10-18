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
@property(readonly, assign, nonatomic) BOOL isIndexing;	// G=0x31ff5ef5; @synthesize=_isIndexing
@property(readonly, retain) NoteAccountObject *localAccount;	// G=0x31ff0455; converted property
@property(readonly, retain) NoteStoreObject *localStore;	// G=0x31ff03ed; converted property
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x31ff250d; 
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x31ff2621; converted property
@property(readonly, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x31ff2719; converted property
+ (BOOL)databaseIsCorrupt:(id)corrupt;	// 0x31fec4f9
+ (BOOL)shouldLogIndexing;	// 0x31fec489
- (id)init;	// 0x31fedc8d
- (id)initForMigrator;	// 0x31feda59
- (id)initWithTestingFilePrefix:(id)testingFilePrefix;	// 0x31feda85
- (id)initWithTestingFilePrefix:(id)testingFilePrefix atPath:(id)path inMigrator:(BOOL)migrator;	// 0x31fedaad
- (id)initWithTestingFilePrefix:(id)testingFilePrefix inMigrator:(BOOL)migrator;	// 0x31feda29
- (void).cxx_destruct;	// 0x31ff5f05
- (void)_createLocalAccount:(id *)account andStore:(id *)store;	// 0x31fec6d9
- (id)_notePropertyObjectForKey:(id)key;	// 0x31ff09e9
- (id)accountForAccountId:(id)accountId;	// 0x31ff0085
- (id)allAccounts;	// 0x31fefdf9
- (id)allNotes;	// 0x31fef3f1
- (id)allNotesInCollection:(id)collection;	// 0x31fef4b5
- (id)allNotesMatchingPredicate:(id)predicate;	// 0x31fef541
- (id)allNotesWithoutBodiesInCollection:(id)collection;	// 0x31fef7cd
- (id)allStores;	// 0x31fefa49
- (id)allVisibleNotes;	// 0x31feee49
- (id)allVisibleNotesInCollection:(id)collection;	// 0x31feee71
- (id)allVisibleNotesMatchingPredicate:(id)predicate;	// 0x31feeefd
- (void)cleanUpLocks;	// 0x31ff5cdd
- (void)clearCaches;	// 0x31fee1e9
- (id)collectionForInfo:(id)info;	// 0x31fef8bd
- (id)collectionForObjectID:(id)objectID;	// 0x31fee3a1
- (id)copyNotesForSearch:(void *)search complete:(char *)complete;	// 0x31ff55a9
- (id)copyNotesForSearch:(void *)search predicate:(id)predicate complete:(char *)complete;	// 0x31ff55c9
- (unsigned)countOfNotes;	// 0x31fef459
- (unsigned)countOfNotesInCollection:(id)collection;	// 0x31fef501
- (unsigned)countOfNotesMatchingPredicate:(id)notesMatchingPredicate;	// 0x31fef5cd
- (unsigned)countOfStores;	// 0x31fefc75
- (unsigned)countOfVisibleNotes;	// 0x31feee5d
- (unsigned)countOfVisibleNotesInCollection:(id)collection;	// 0x31feeebd
- (unsigned)countOfVisibleNotesMatchingPredicate:(id)visibleNotesMatchingPredicate;	// 0x31fef041
- (void)dealloc;	// 0x31fedcb5
- (id)defaultStoreForNewNote;	// 0x31ff02dd
- (BOOL)deleteAccount:(id)account;	// 0x31ff078d
- (void)deleteChanges:(id)changes;	// 0x31fee6b1
- (BOOL)deleteIndexFile;	// 0x31ff5e89
- (void)deleteNote:(id)note;	// 0x31fee471
- (void)deleteNoteRegardlessOfConstraints:(id)constraints;	// 0x31fee661
- (BOOL)deleteStore:(id)store;	// 0x31ff07e9
- (void)destroySearchIndex;	// 0x31ff378d
- (void)enableChangeLogging:(BOOL)logging;	// 0x31fee789
- (id)findNotesWithText:(id)text betweenDate:(id)date andDate:(id)date3;	// 0x31ff5865
- (BOOL)forceDeleteAccount:(id)account;	// 0x31ff067d
- (void)forceSetUpUniqueObjects;	// 0x31fecf05
- (id)getNextIdObject;	// 0x31ff190d
- (void)handleMigration;	// 0x31ff0de9
- (BOOL)handleSaveErrors:(id)errors;	// 0x31fee915
- (BOOL)hasMultipleEnabledStores;	// 0x31ff0985
- (void)indexInBatches:(BOOL)batches;	// 0x31ff3b69
- (void)indexNotes:(id)notes;	// 0x31ff2d35
- (void)invalidate;	// 0x31fee799
// declared property getter: - (BOOL)isIndexing;	// 0x31ff5ef5
- (id)liveNotesNeedingBodiesPredicate;	// 0x31fedd89
// converted property getter: - (id)localAccount;	// 0x31ff0455
// converted property getter: - (id)localStore;	// 0x31ff03ed
// declared property getter: - (id)managedObjectContext;	// 0x31ff250d
// converted property getter: - (id)managedObjectModel;	// 0x31ff2621
- (id)newFRCForCollection:(id)collection delegate:(id)delegate;	// 0x31feddf5
- (id)newFetchRequestForNotes;	// 0x31fee0bd
- (void *)newSearchContextWithText:(id)text;	// 0x31ff5545
- (id)newlyAddedAccount;	// 0x31ff0025
- (id)newlyAddedNote;	// 0x31fee2ad
- (id)newlyAddedStore;	// 0x31fef9e9
- (id)nextIndex;	// 0x31ff1e75
- (id)noteChangeWithType:(int)type store:(id)store;	// 0x31ff45f1
- (id)noteForObjectID:(id)objectID;	// 0x31fef64d
- (BOOL)noteIsSafeToAccess:(id)access;	// 0x31ff5d2d
- (id)notesForIntegerIds:(id)integerIds;	// 0x31fef6b5
- (id)notesToResumeIndexing;	// 0x31ff2c69
- (id)pathForIndex;	// 0x31ff233d
- (id)pathForPersistentStore;	// 0x31ff225d
// converted property getter: - (id)persistentStoreCoordinator;	// 0x31ff2719
- (id)propertyValueForKey:(id)key;	// 0x31ff0da1
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)changeLogging;	// 0x31ff3b79
- (void)removeConflictingSqliteAndIdxFiles;	// 0x31fed68d
- (void)removeSqliteAndIdxFiles;	// 0x31fed4bd
- (void)resetNotificationCount;	// 0x31ff3c55
- (void)resumeIndexing;	// 0x31ff3a69
- (id)rootDirectory;	// 0x31ff223d
- (BOOL)save:(id *)save;	// 0x31fee82d
- (void)saveNotesToResumeIndexing:(id)resumeIndexing;	// 0x31ff2a65
- (BOOL)saveOutsideApp:(id *)app;	// 0x31fee815
- (BOOL)saveSilently:(id *)silently;	// 0x31feed1d
- (CXIndexRef)searchIndex:(char *)index;	// 0x31ff3315
- (void)setHasPriorityInSaveConflicts:(BOOL)saveConflicts;	// 0x31ff2471
- (void)setPropertyValue:(id)value forKey:(id)key;	// 0x31ff0c99
- (void)setUpCoreDataStack;	// 0x31fed775
- (BOOL)setUpLastIndexTid;	// 0x31fecb79
- (BOOL)setUpLocalAccountAndStore;	// 0x31fec7e9
- (void)setUpUniqueObjects;	// 0x31fed025
- (BOOL)shouldDisableLocalStore;	// 0x31ff0925
- (BOOL)shouldResumeIndexing;	// 0x31ff2c05
- (void)sortNotes:(id)notes;	// 0x31fee209
- (id)storeForObjectID:(id)objectID;	// 0x31fee409
- (id)storeOptions;	// 0x31fec5e9
- (void)tearDownCoreDataStack;	// 0x31fed945
- (void)trackChanges:(id)changes;	// 0x31ff475d
- (void)updateSearchIndex:(id)index;	// 0x31ff3c69
- (id)urlForPersistentStore;	// 0x31ff241d
- (id)visibleNoteForObjectID:(id)objectID;	// 0x31fef179
- (id)visibleNotesForIntegerIds:(id)integerIds;	// 0x31fef255
- (id)visibleNotesPredicate;	// 0x31fedcf5
- (void)wrapUpIndexing;	// 0x31ff3821
@end

