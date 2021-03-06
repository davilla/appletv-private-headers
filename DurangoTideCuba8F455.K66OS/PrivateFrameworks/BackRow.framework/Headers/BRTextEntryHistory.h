/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSArray, NSManagedObjectContext;

@interface BRTextEntryHistory : BRSingleton {
@private
	NSManagedObjectContext *_managedObjectContext;	// 4 = 0x4
	NSManagedObjectModel *_managedObjectModel;	// 8 = 0x8
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 12 = 0xc
	NSArray *_clientIdentifiers;	// 16 = 0x10
	NSArray *_behaviorIdentifiers;	// 20 = 0x14
	NSArray *_behaviorsCache;	// 24 = 0x18
	NSArray *_historyItemStringsCache;	// 28 = 0x1c
	BOOL _allClientsCached;	// 32 = 0x20
	BOOL _allBehaviorsCached;	// 33 = 0x21
}
@property(readonly, retain) NSManagedObjectContext *managedObjectContext;	// G=0x33029301; converted property
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x33029259; converted property
@property(readonly, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x3302a7cd; converted property
+ (void)setSingleton:(id)singleton;	// 0x33029135
+ (id)singleton;	// 0x33029129
- (id)init;	// 0x33029665
- (void)_addClient:(id)client behaviors:(id)behaviors maxItemsPerBehavior:(id)behavior;	// 0x3302af05
- (void)_addHistoryItem:(id)item forClient:(id)client;	// 0x3302ac75
- (void)_deleteAllHistoryItemsForClient:(id)client;	// 0x33029f15
- (void)_deleteAllTextEntryHistory;	// 0x33029dad
- (void)_deleteHistoryItem:(id)item forClient:(id)client;	// 0x33029fe1
- (void)_displayAllTextEntryHistory;	// 0x3302a945
- (void)_performAction:(int)action withHistoryItem:(id)historyItem forClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x3302a0e5
- (void)_refreshDataCacheForClients:(id)clients behaviors:(id)behaviors;	// 0x330297dd
- (void)_saveContext;	// 0x3302a779
- (void)_validateCacheAgainstClientIdentifiers:(id)identifiers behaviorIdentifiers:(id)identifiers2;	// 0x33029145
- (void)dealloc;	// 0x330295b1
- (void)deleteAllHistoryItemsForClients:(id)clients;	// 0x3302a4ad
- (void)deleteAllHistoryItemsForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x330293e1
- (void)deleteHistoryItem:(id)item forClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x33029431
- (void)deleteTextEntryBehaviors:(id)behaviors forClients:(id)clients;	// 0x33029141
- (id)historyForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x330294e9
// converted property getter: - (id)managedObjectContext;	// 0x33029301
// converted property getter: - (id)managedObjectModel;	// 0x33029259
// converted property getter: - (id)persistentStoreCoordinator;	// 0x3302a7cd
- (void)registerClient:(id)client withTextEntryBehaviors:(id)textEntryBehaviors maxItemsPerBehavior:(id)behavior;	// 0x33029541
- (void)setHistoryItem:(id)item forClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x33029485
@end

