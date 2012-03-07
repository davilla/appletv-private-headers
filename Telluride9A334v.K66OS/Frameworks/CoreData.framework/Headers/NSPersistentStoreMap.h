/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMappedObjectStore, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSPersistentStoreMap : NSObject {
@private
	NSMappedObjectStore *_store;	// 4 = 0x4
	NSString *_databaseUUID;	// 8 = 0x8
	NSMutableDictionary *_storeMetadata;	// 12 = 0xc
	unsigned long long _nextPK64;	// 16 = 0x10
	NSMutableDictionary *_mappings;	// 24 = 0x18
}
@property(retain) NSString *databaseUUID;	// G=0x31ee4e3d; S=0x31ee4df5; converted property
@property(retain) id metadata;	// G=0x31ee4895; S=0x31ee49d5; converted property
@property(readonly, assign) unsigned long long nextPK64;	// G=0x31ee4e89; converted property
@property(readonly, retain) NSMappedObjectStore *store;	// G=0x31ee486d; converted property
+ (void)initialize;	// 0x31ee4949
- (id)initWithStore:(id)store;	// 0x31ee5015
- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;	// 0x31ee487d
- (void)_setMetadata:(id)metadata;	// 0x31ee4a09
- (id)_storeMetadataForSaving;	// 0x31ee4965
- (id)_updatedMetadataWithSeed:(id)seed includeVersioning:(BOOL)versioning;	// 0x31ee4a9d
- (void)addObject:(id)object objectIDMap:(id)map;	// 0x31ee4f8d
- (id)configurationName;	// 0x31ee4ff5
- (id)dataForKey:(id)key;	// 0x31ee4fc1
// converted property getter: - (id)databaseUUID;	// 0x31ee4e3d
- (void)dealloc;	// 0x31ee48a5
- (id)externalMapping;	// 0x31ee485d
- (id)handleFetchRequest:(id)request;	// 0x31ee4ef1
// converted property getter: - (id)metadata;	// 0x31ee4895
// converted property getter: - (unsigned long long)nextPK64;	// 0x31ee4e89
- (void)removeObject:(id)object objectIDMap:(id)map;	// 0x31ee4f59
- (id)retainedObjectIDsForRelationship:(id)relationship forObjectID:(id)objectID;	// 0x31ee4ebd
// converted property setter: - (void)setDatabaseUUID:(id)uuid;	// 0x31ee4df5
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x31ee49d5
// converted property getter: - (id)store;	// 0x31ee486d
- (void)updateObject:(id)object objectIDMap:(id)map;	// 0x31ee4f25
@end
