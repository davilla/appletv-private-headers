/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString, NSManagedObjectContext, NSArray, NSFetchRequest;
@protocol NSFetchedResultsControllerDelegate;

@interface NSFetchedResultsController : NSObject {
	NSFetchRequest *_fetchRequest;	// 4 = 0x4
	NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
	NSString *_sectionNameKeyPath;	// 12 = 0xc
	NSString *_sectionNameKey;	// 16 = 0x10
	NSString *_cacheName;	// 20 = 0x14
	void *_cache;	// 24 = 0x18
	fetchResultsControllerFlags _flags;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	id _sortKeys;	// 36 = 0x24
	id _fetchedObjects;	// 40 = 0x28
	id _sections;	// 44 = 0x2c
	id _sectionsByName;	// 48 = 0x30
	id _sectionIndexTitles;	// 52 = 0x34
	id _sectionIndexTitlesSections;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) NSString *cacheName;	// G=0x36657199; @synthesize=_cacheName
@property(assign, nonatomic) id<NSFetchedResultsControllerDelegate> delegate;	// G=0x366571a9; S=0x36656351; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSFetchRequest *fetchRequest;	// G=0x36657169; @synthesize=_fetchRequest
@property(readonly, assign, nonatomic) NSArray *fetchedObjects;	// G=0x36656ab5; 
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x36657179; @synthesize=_managedObjectContext
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x36656dd5; 
@property(readonly, assign, nonatomic) NSString *sectionNameKeyPath;	// G=0x36657189; @synthesize=_sectionNameKeyPath
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x36656fb9; 
+ (id)_CoreDataSectionCachesPath;	// 0x3665cecd
+ (unsigned)_insertIndexForObject:(id)object inArray:(id)array lowIdx:(unsigned)idx highIdx:(unsigned)idx4 sortDescriptors:(id)descriptors;	// 0x3665d109
+ (void)deleteCacheWithName:(id)name;	// 0x366570f5
+ (void)initialize;	// 0x36655ac5
- (id)initWithFetchRequest:(id)fetchRequest managedObjectContext:(id)context sectionNameKeyPath:(id)path cacheName:(id)name;	// 0x36655ae1
- (void)_appendAffectedStoreInfoToData:(id)data adjustedOffset:(long long *)offset;	// 0x3665c005
- (BOOL)_computeSectionInfo:(id)info error:(id *)error;	// 0x36657cf5
- (BOOL)_computeSectionInfoWithGroupBy:(id)groupBy error:(id *)error;	// 0x3665853d
- (id)_createNewSectionForObject:(id)object;	// 0x36659a69
- (BOOL)_didFailPostprocessing;	// 0x3665d0e9
- (BOOL)_didUpdateOnlyStoreInfo;	// 0x3665d0d9
- (BOOL)_didUseCachedSectionInfo;	// 0x3665d0c9
- (BOOL)_didUseGroupBy;	// 0x3665d0f9
- (void)_dumpSectionInfo;	// 0x3665d251
- (id)_fetchedObjectsArrayOfObjectIDs;	// 0x36658e69
- (BOOL)_hasFetchedObjects;	// 0x366571b9
- (unsigned)_indexOfFetchedID:(id)fetchedID;	// 0x36658fd1
- (id)_indexPathForIndex:(unsigned)index;	// 0x366592a9
- (void)_insertObjectInFetchedObjects:(id)fetchedObjects atIndex:(unsigned)index;	// 0x36659101
- (BOOL)_keyPathContainsNonPersistedProperties:(id)properties;	// 0x3665d3b5
- (void)_makeMutableFetchedObjects;	// 0x36658d2d
- (void)_managedObjectContextDidChange:(id)_managedObjectContext;	// 0x3665ad31
- (void)_managedObjectContextDidSave:(id)_managedObjectContext;	// 0x3665c3d5
- (BOOL)_objectInResults:(id)results;	// 0x366593d1
- (BOOL)_postprocessDeletedObjects:(id)objects;	// 0x3665a0b5
- (BOOL)_postprocessInsertedObjects:(id)objects;	// 0x36659805
- (BOOL)_postprocessUpdatedObjects:(id)objects;	// 0x3665aa65
- (void)_preprocessDeletedObjects:(id)objects deletesInfo:(id)info sectionsWithDeletes:(id)deletes;	// 0x36659e19
- (void)_preprocessInsertedObjects:(id)objects insertsInfo:(id)info newSectionNames:(id)names;	// 0x36659501
- (void)_preprocessUpdatedObjects:(id)objects insertsInfo:(id)info deletesInfo:(id)info3 updatesInfo:(id)info4 sectionsWithDeletes:(id)deletes newSectionNames:(id)names treatAsRefreshes:(BOOL)refreshes;	// 0x3665a3f1
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned)index;	// 0x36659159
- (id)_resolveSectionIndexTitleForSectionName:(id)sectionName;	// 0x3665d355
- (BOOL)_restoreCachedSectionInfo;	// 0x3665720d
- (id)_sectionCachePath;	// 0x3665ce59
- (id)_sectionNameForObject:(id)object;	// 0x366571d1
- (unsigned)_sectionNumberForIndex:(unsigned)index;	// 0x366591ad
- (void)_updateCachedStoreInfo;	// 0x3665c20d
- (void)_updateSectionOffsetsStartingAtSection:(id)section;	// 0x36659441
// declared property getter: - (id)cacheName;	// 0x36657199
- (void)dealloc;	// 0x366561b9
// declared property getter: - (id)delegate;	// 0x366571a9
// declared property getter: - (id)fetchRequest;	// 0x36657169
// declared property getter: - (id)fetchedObjects;	// 0x36656ab5
- (id)indexPathForObject:(id)object;	// 0x36656c69
// declared property getter: - (id)managedObjectContext;	// 0x36657179
- (id)objectAtIndexPath:(id)indexPath;	// 0x36656ac5
- (BOOL)performFetch:(id *)fetch;	// 0x366565d9
- (int)sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x36656fc9
- (id)sectionIndexTitleForSectionName:(id)sectionName;	// 0x36656d61
// declared property getter: - (id)sectionIndexTitles;	// 0x36656dd5
// declared property getter: - (id)sectionNameKeyPath;	// 0x36657189
// declared property getter: - (id)sections;	// 0x36656fb9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36656351
@end
