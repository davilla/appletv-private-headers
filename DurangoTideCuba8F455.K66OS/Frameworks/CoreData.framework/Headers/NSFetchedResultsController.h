/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSFetchRequest, NSManagedObjectContext, NSArray, NSString;
@protocol NSFetchedResultsControllerDelegate;

@interface NSFetchedResultsController : NSObject {
@private
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
@property(readonly, assign, nonatomic) NSString *cacheName;	// G=0x33ef478d; @synthesize=_cacheName
@property(assign, nonatomic) id<NSFetchedResultsControllerDelegate> delegate;	// G=0x33ef477d; S=0x33e577cd; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSFetchRequest *fetchRequest;	// G=0x33e577bd; @synthesize=_fetchRequest
@property(readonly, assign, nonatomic) NSArray *fetchedObjects;	// G=0x33e59279; 
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x33e57a71; @synthesize=_managedObjectContext
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x33ef5a01; 
@property(readonly, assign, nonatomic) NSString *sectionNameKeyPath;	// G=0x33ef479d; @synthesize=_sectionNameKeyPath
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x33e59185; 
+ (id)_CoreDataSectionCachesPath;	// 0x33e58aed
+ (unsigned)_insertIndexForObject:(id)object inArray:(id)array lowIdx:(unsigned)idx highIdx:(unsigned)idx4 sortDescriptors:(id)descriptors;	// 0x33ef5095
+ (void)deleteCacheWithName:(id)name;	// 0x33ef4c4d
+ (void)initialize;	// 0x33e56edd
- (id)initWithFetchRequest:(id)fetchRequest managedObjectContext:(id)context sectionNameKeyPath:(id)path cacheName:(id)name;	// 0x33e56efd
- (void)_appendAffectedStoreInfoToData:(id)data adjustedOffset:(long long *)offset;	// 0x33e5eb79
- (BOOL)_computeSectionInfo:(id)info error:(id *)error;	// 0x33e61e05
- (BOOL)_computeSectionInfoWithGroupBy:(id)groupBy error:(id *)error;	// 0x33ef62cd
- (id)_createNewSectionForObject:(id)object;	// 0x33ef5f6d
- (BOOL)_didFailPostprocessing;	// 0x33ef47e1
- (BOOL)_didUpdateOnlyStoreInfo;	// 0x33ef47d1
- (BOOL)_didUseCachedSectionInfo;	// 0x33ef47c1
- (BOOL)_didUseGroupBy;	// 0x33ef47f1
- (void)_dumpSectionInfo;	// 0x33ef5bd5
- (id)_fetchedObjectsArrayOfObjectIDs;	// 0x33e626c9
- (BOOL)_hasFetchedObjects;	// 0x33ef47ad
- (unsigned)_indexOfFetchedID:(id)fetchedID;	// 0x33ef58c5
- (id)_indexPathForIndex:(unsigned)index;	// 0x33ef56d5
- (void)_insertObjectInFetchedObjects:(id)fetchedObjects atIndex:(unsigned)index;	// 0x33ef4a91
- (BOOL)_keyPathContainsNonPersistedProperties:(id)properties;	// 0x33e5764d
- (void)_makeMutableFetchedObjects;	// 0x33ef4add
- (void)_managedObjectContextDidChange:(id)_managedObjectContext;	// 0x33ef74f1
- (void)_managedObjectContextDidSave:(id)_managedObjectContext;	// 0x33e5dd91
- (BOOL)_objectInResults:(id)results;	// 0x33ef490d
- (BOOL)_postprocessDeletedObjects:(id)objects;	// 0x33ef51bd
- (BOOL)_postprocessInsertedObjects:(id)objects;	// 0x33ef54a5
- (BOOL)_postprocessUpdatedObjects:(id)objects;	// 0x33ef5cd5
- (void)_preprocessDeletedObjects:(id)objects deletesInfo:(id)info sectionsWithDeletes:(id)deletes;	// 0x33ef707d
- (void)_preprocessInsertedObjects:(id)objects insertsInfo:(id)info newSectionNames:(id)names;	// 0x33ef72ed
- (void)_preprocessUpdatedObjects:(id)objects insertsInfo:(id)info deletesInfo:(id)info3 updatesInfo:(id)info4 sectionsWithDeletes:(id)deletes newSectionNames:(id)names treatAsRefreshes:(BOOL)refreshes;	// 0x33ef6a41
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned)index;	// 0x33ef4a49
- (id)_resolveSectionIndexTitleForSectionName:(id)sectionName;	// 0x33ef4801
- (BOOL)_restoreCachedSectionInfo;	// 0x33e57fb9
- (id)_sectionCachePath;	// 0x33e58a75
- (id)_sectionNameForObject:(id)object;	// 0x33ef4c19
- (unsigned)_sectionNumberForIndex:(unsigned)index;	// 0x33ef57e5
- (void)_updateCachedStoreInfo;	// 0x33e5e9c1
- (void)_updateSectionOffsetsStartingAtSection:(id)section;	// 0x33ef484d
// declared property getter: - (id)cacheName;	// 0x33ef478d
- (void)dealloc;	// 0x33e5ef21
// declared property getter: - (id)delegate;	// 0x33ef477d
// declared property getter: - (id)fetchRequest;	// 0x33e577bd
// declared property getter: - (id)fetchedObjects;	// 0x33e59279
- (id)indexPathForObject:(id)object;	// 0x33ef4d25
// declared property getter: - (id)managedObjectContext;	// 0x33e57a71
- (id)objectAtIndexPath:(id)indexPath;	// 0x33ef4f29
- (BOOL)performFetch:(id *)fetch;	// 0x33e57a81
- (int)sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x33ef4de9
- (id)sectionIndexTitleForSectionName:(id)sectionName;	// 0x33ef4cb1
// declared property getter: - (id)sectionIndexTitles;	// 0x33ef5a01
// declared property getter: - (id)sectionNameKeyPath;	// 0x33ef479d
// declared property getter: - (id)sections;	// 0x33e59185
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33e577cd
@end

