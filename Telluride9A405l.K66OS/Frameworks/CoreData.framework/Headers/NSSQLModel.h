/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSMutableArray, NSManagedObjectModel, NSString, NSKnownKeysDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLModel : NSStoreMapping {
@private
	NSString *_configuration;	// 8 = 0x8
	NSManagedObjectModel *_mom;	// 12 = 0xc
	NSKnownKeysDictionary *_entitiesByName;	// 16 = 0x10
	NSMutableArray *_entities;	// 20 = 0x14
	unsigned _brokenHashVersion;	// 24 = 0x18
	BOOL _retainLeopardStyleDictionaries;	// 28 = 0x1c
	BOOL _modelHasPrecomputedKeyOrder;	// 29 = 0x1d
}
@property(readonly, retain) NSMutableArray *entities;	// G=0x33f42d71; converted property
@property(readonly, retain) NSKnownKeysDictionary *entitiesByName;	// G=0x3400bd55; converted property
- (id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name;	// 0x3400bd75
- (id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name brokenHashVersion:(unsigned)version;	// 0x33f38b11
- (id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name retainHashHack:(BOOL)hack;	// 0x3400bd9d
- (id)initWithManagedObjectModel:(id)managedObjectModel configurationName:(id)name retainHashHack:(BOOL)hack brokenHashVersion:(unsigned)version;	// 0x33f38b35
- (void)_addIndexedEntity:(id)entity;	// 0x33f39f99
- (id)_entityMapping;	// 0x3400bdc1
- (void)_generateModel:(id)model;	// 0x33f38c75
- (BOOL)_modelHasPrecomputedKeyOrder;	// 0x33f3b745
- (id)_precomputedKeyOrderForEntity:(id)entity;	// 0x3400be0d
- (BOOL)_retainHashHack;	// 0x3400bd65
- (id)_sqlEntityWithRenamingIdentifier:(id)renamingIdentifier;	// 0x3400be75
- (BOOL)_useLeopardStyleHashing;	// 0x33f3d869
- (BOOL)_useSnowLeopardStyleHashing;	// 0x33f3be85
- (id)configurationName;	// 0x3400bd45
- (void)dealloc;	// 0x33f5fda9
// converted property getter: - (id)entities;	// 0x33f42d71
// converted property getter: - (id)entitiesByName;	// 0x3400bd55
- (id)entityForID:(unsigned long)anId;	// 0x3400be61
- (unsigned long)entityIDForName:(id)name;	// 0x3400bde1
- (id)entityNamed:(id)named;	// 0x33f48785
- (void)finalize;	// 0x3400bff5
- (id)managedObjectModel;	// 0x33f39335
@end
