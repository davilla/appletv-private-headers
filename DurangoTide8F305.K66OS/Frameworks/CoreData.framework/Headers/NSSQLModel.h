/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSKnownKeysDictionary, NSManagedObjectModel, NSMutableArray, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLModel : NSStoreMapping {
@private
	NSString *_configuration;	// 8 = 0x8
	NSManagedObjectModel *_mom;	// 12 = 0xc
	NSKnownKeysDictionary *_entitiesByName;	// 16 = 0x10
	NSMutableArray *_entities;	// 20 = 0x14
	unsigned _brokenHashVersion;	// 24 = 0x18
	NSMutableDictionary *_cachedFabricatedEntities;	// 28 = 0x1c
	BOOL _retainLeopardStyleDictionaries;	// 32 = 0x20
	BOOL _modelHasPrecomputedKeyOrder;	// 33 = 0x21
}
@property(readonly, retain) NSMutableArray *entities;	// G=0x342c0315; converted property
@property(readonly, retain) NSKnownKeysDictionary *entitiesByName;	// G=0x343518a9; converted property
- (id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name;	// 0x3435193d
- (id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name brokenHashVersion:(unsigned)version;	// 0x342b7899
- (id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name retainHashHack:(BOOL)hack;	// 0x34351911
- (id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name retainHashHack:(BOOL)hack brokenHashVersion:(unsigned)version;	// 0x342b78c5
- (void)_addIndexedEntity:(id)entity;	// 0x342b8f39
- (id)_entityMapping;	// 0x343518f1
- (void)_generateModel:(id)model;	// 0x342b79c9
- (BOOL)_modelHasPrecomputedKeyOrder;	// 0x342baad9
- (id)_precomputedKeyOrderForEntity:(id)entity;	// 0x342bc7c9
- (BOOL)_retainHashHack;	// 0x343518b9
- (BOOL)_useLeopardStyleHashing;	// 0x342bc7a1
- (BOOL)_useSnowLeopardStyleHashing;	// 0x342bc7b5
- (id)configurationName;	// 0x34351899
- (void)dealloc;	// 0x342d160d
// converted property getter: - (id)entities;	// 0x342c0315
// converted property getter: - (id)entitiesByName;	// 0x343518a9
- (id)entityForID:(unsigned long)anId;	// 0x34351965
- (unsigned long)entityIDForName:(id)name;	// 0x343518c9
- (id)entityNamed:(id)named;	// 0x34297e39
- (id)managedObjectModel;	// 0x342b7ff9
@end

