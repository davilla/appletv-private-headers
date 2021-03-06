/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSArray, NSString, NSEntityDescription, NSDictionary;

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
@property(retain) NSEntityDescription *entity;	// G=0x31e9d7a9; S=0x31e9d7b9; converted property
@property(retain) NSArray *primaryKeys;	// G=0x31e9d7d9; S=0x31e9d881; converted property
@property(retain) NSDictionary *propertyMappings;	// G=0x31e9d7c9; S=0x31e9d839; converted property
@property(assign, getter=isSingleTableEntity) BOOL singleTableEntity;	// G=0x31e9d7e9; S=0x31e9d7f9; converted property
@property(retain) NSString *subentityColumn;	// G=0x31e9d809; S=0x31e9d8c9; converted property
@property(assign) unsigned subentityID;	// G=0x31e9d819; S=0x31e9d829; converted property
- (id)initWithEntity:(id)entity;	// 0x31e9da61
- (id)attributeColumnDefinitions;	// 0x31e9d911
- (id)attributeMappings;	// 0x31e9e031
- (id)createTableStatement;	// 0x31e9d945
- (void)dealloc;	// 0x31e9e431
- (id)description;	// 0x31e9e3ad
// converted property getter: - (id)entity;	// 0x31e9d7a9
- (id)foreignKeyColumnDefinitions;	// 0x31e9dc6d
- (id)foreignKeyConstraintDefinitions;	// 0x31e9db65
- (BOOL)isEqual:(id)equal;	// 0x31e9e1e1
// converted property getter: - (BOOL)isSingleTableEntity;	// 0x31e9d7e9
- (id)primaryKeyColumnDefinitions;	// 0x31e9dd75
// converted property getter: - (id)primaryKeys;	// 0x31e9d7d9
// converted property getter: - (id)propertyMappings;	// 0x31e9d7c9
- (id)relationshipMappings;	// 0x31e9de81
// converted property setter: - (void)setEntity:(id)entity;	// 0x31e9d7b9
// converted property setter: - (void)setPrimaryKeys:(id)keys;	// 0x31e9d881
// converted property setter: - (void)setPropertyMappings:(id)mappings;	// 0x31e9d839
// converted property setter: - (void)setSingleTableEntity:(BOOL)entity;	// 0x31e9d7f9
// converted property setter: - (void)setSubentityColumn:(id)column;	// 0x31e9d8c9
// converted property setter: - (void)setSubentityID:(unsigned)anId;	// 0x31e9d829
// converted property getter: - (id)subentityColumn;	// 0x31e9d809
// converted property getter: - (unsigned)subentityID;	// 0x31e9d819
@end

