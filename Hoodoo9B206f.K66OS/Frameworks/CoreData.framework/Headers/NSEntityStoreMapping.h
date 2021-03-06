/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSDictionary, NSArray, NSString, NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSEntityStoreMapping : NSStoreMapping {
@private
	NSEntityDescription *_entity;	// 8 = 0x8
	NSDictionary *_propertyMappings;	// 12 = 0xc
	NSArray *_primaryKeys;	// 16 = 0x10
	BOOL _isSingleTableEntity;	// 20 = 0x14
	NSString *_subentityColumn;	// 24 = 0x18
	unsigned _subentityID;	// 28 = 0x1c
}
@property(retain) NSEntityDescription *entity;	// G=0x36286c2d; S=0x36286c3d; converted property
@property(retain) NSArray *primaryKeys;	// G=0x36286c5d; S=0x36286d05; converted property
@property(retain) NSDictionary *propertyMappings;	// G=0x36286c4d; S=0x36286cbd; converted property
@property(assign, getter=isSingleTableEntity) BOOL singleTableEntity;	// G=0x36286c6d; S=0x36286c7d; converted property
@property(retain) NSString *subentityColumn;	// G=0x36286c8d; S=0x36286d4d; converted property
@property(assign) unsigned subentityID;	// G=0x36286c9d; S=0x36286cad; converted property
- (id)initWithEntity:(id)entity;	// 0x36286ee5
- (id)attributeColumnDefinitions;	// 0x36286d95
- (id)attributeMappings;	// 0x362874b5
- (id)createTableStatement;	// 0x36286dc9
- (void)dealloc;	// 0x362878b5
- (id)description;	// 0x36287831
// converted property getter: - (id)entity;	// 0x36286c2d
- (id)foreignKeyColumnDefinitions;	// 0x362870f1
- (id)foreignKeyConstraintDefinitions;	// 0x36286fe9
- (BOOL)isEqual:(id)equal;	// 0x36287665
// converted property getter: - (BOOL)isSingleTableEntity;	// 0x36286c6d
- (id)primaryKeyColumnDefinitions;	// 0x362871f9
// converted property getter: - (id)primaryKeys;	// 0x36286c5d
// converted property getter: - (id)propertyMappings;	// 0x36286c4d
- (id)relationshipMappings;	// 0x36287305
// converted property setter: - (void)setEntity:(id)entity;	// 0x36286c3d
// converted property setter: - (void)setPrimaryKeys:(id)keys;	// 0x36286d05
// converted property setter: - (void)setPropertyMappings:(id)mappings;	// 0x36286cbd
// converted property setter: - (void)setSingleTableEntity:(BOOL)entity;	// 0x36286c7d
// converted property setter: - (void)setSubentityColumn:(id)column;	// 0x36286d4d
// converted property setter: - (void)setSubentityID:(unsigned)anId;	// 0x36286cad
// converted property getter: - (id)subentityColumn;	// 0x36286c8d
// converted property getter: - (unsigned)subentityID;	// 0x36286c9d
@end

