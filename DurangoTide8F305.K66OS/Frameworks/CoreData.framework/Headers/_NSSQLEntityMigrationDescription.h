/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSEntityMapping, NSMutableArray, NSSQLEntity, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSSQLEntityMigrationDescription : NSObject {
@private
	NSEntityMapping *_entityMapping;	// 4 = 0x4
	NSMutableDictionary *_sqlValuesByColumnName;	// 8 = 0x8
	NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;	// 12 = 0xc
	NSMutableDictionary *_mappingsByName;	// 16 = 0x10
	NSSQLEntity *_dstEntity;	// 20 = 0x14
	NSSQLEntity *_srcEntity;	// 24 = 0x18
	int _migrationType;	// 28 = 0x1c
	NSMutableArray *_addedManyToManys;	// 32 = 0x20
	NSMutableArray *_removedManyToManys;	// 36 = 0x24
	NSMutableArray *_transformedManyToManys;	// 40 = 0x28
	NSMutableArray *_processedTransforms;	// 44 = 0x2c
	NSMutableArray *_pendingTransforms;	// 48 = 0x30
}
@property(readonly, retain) NSMutableArray *addedManyToManys;	// G=0x34369789; converted property
@property(readonly, assign) NSSQLEntity *destinationEntity;	// G=0x34368e4d; @synthesize=_dstEntity
@property(readonly, assign) NSEntityMapping *entityMapping;	// G=0x34368e3d; @synthesize=_entityMapping
@property(readonly, retain) NSMutableDictionary *mappingsByName;	// G=0x34369f05; converted property
@property(readonly, assign) int migrationType;	// G=0x34368e2d; @synthesize=_migrationType
@property(readonly, retain) NSMutableArray *removedManyToManys;	// G=0x343695ad; converted property
@property(readonly, retain) NSMutableDictionary *sourceEntitiesByToOneWithNewEntityKey;	// G=0x34368e1d; converted property
@property(readonly, assign) NSSQLEntity *sourceEntity;	// G=0x34368e5d; @synthesize=_srcEntity
@property(readonly, retain) NSMutableArray *transformedManyToManys;	// G=0x34369369; converted property
- (id)initWithEntityMapping:(id)entityMapping sourceEntity:(id)entity destinationEntity:(id)entity3;	// 0x343692c9
- (void)_generateSQLValueMappingsWithMigrationContext:(NSSQLMigrationContext)migrationContext;	// 0x34369cd5
- (void)_populateSQLValuesByPropertyFromTransforms:(id)transforms migrationContext:(NSSQLMigrationContext)context;	// 0x3436a2bd
- (void)_populateSQLValuesForDestinationToOne:(id)one fromSourceToOne:(id)one2;	// 0x34368fb9
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(NSSQLMigrationContext)migrationContext;	// 0x34369965
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)one migrationContext:(NSSQLMigrationContext)context;	// 0x34368eb5
// converted property getter: - (id)addedManyToManys;	// 0x34369789
- (void)dealloc;	// 0x3436917d
// declared property getter: - (id)destinationEntity;	// 0x34368e4d
// declared property getter: - (id)entityMapping;	// 0x34368e3d
// converted property getter: - (id)mappingsByName;	// 0x34369f05
// declared property getter: - (int)migrationType;	// 0x34368e2d
- (id)nextPropertyTransform;	// 0x3436a11d
// converted property getter: - (id)removedManyToManys;	// 0x343695ad
// converted property getter: - (id)sourceEntitiesByToOneWithNewEntityKey;	// 0x34368e1d
// declared property getter: - (id)sourceEntity;	// 0x34368e5d
- (id)sqlValueForColumnName:(id)columnName migrationContext:(NSSQLMigrationContext)context;	// 0x34368e6d
// converted property getter: - (id)transformedManyToManys;	// 0x34369369
@end

