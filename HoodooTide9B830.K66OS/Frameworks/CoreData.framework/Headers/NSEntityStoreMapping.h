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
@property(retain) NSEntityDescription *entity;	// G=0x322b4c2d; S=0x322b4c3d; converted property
@property(retain) NSArray *primaryKeys;	// G=0x322b4c5d; S=0x322b4d05; converted property
@property(retain) NSDictionary *propertyMappings;	// G=0x322b4c4d; S=0x322b4cbd; converted property
@property(assign, getter=isSingleTableEntity) BOOL singleTableEntity;	// G=0x322b4c6d; S=0x322b4c7d; converted property
@property(retain) NSString *subentityColumn;	// G=0x322b4c8d; S=0x322b4d4d; converted property
@property(assign) unsigned subentityID;	// G=0x322b4c9d; S=0x322b4cad; converted property
- (id)initWithEntity:(id)entity;	// 0x322b4ee5
- (id)attributeColumnDefinitions;	// 0x322b4d95
- (id)attributeMappings;	// 0x322b54b5
- (id)createTableStatement;	// 0x322b4dc9
- (void)dealloc;	// 0x322b58b5
- (id)description;	// 0x322b5831
// converted property getter: - (id)entity;	// 0x322b4c2d
- (id)foreignKeyColumnDefinitions;	// 0x322b50f1
- (id)foreignKeyConstraintDefinitions;	// 0x322b4fe9
- (BOOL)isEqual:(id)equal;	// 0x322b5665
// converted property getter: - (BOOL)isSingleTableEntity;	// 0x322b4c6d
- (id)primaryKeyColumnDefinitions;	// 0x322b51f9
// converted property getter: - (id)primaryKeys;	// 0x322b4c5d
// converted property getter: - (id)propertyMappings;	// 0x322b4c4d
- (id)relationshipMappings;	// 0x322b5305
// converted property setter: - (void)setEntity:(id)entity;	// 0x322b4c3d
// converted property setter: - (void)setPrimaryKeys:(id)keys;	// 0x322b4d05
// converted property setter: - (void)setPropertyMappings:(id)mappings;	// 0x322b4cbd
// converted property setter: - (void)setSingleTableEntity:(BOOL)entity;	// 0x322b4c7d
// converted property setter: - (void)setSubentityColumn:(id)column;	// 0x322b4d4d
// converted property setter: - (void)setSubentityID:(unsigned)anId;	// 0x322b4cad
// converted property getter: - (id)subentityColumn;	// 0x322b4c8d
// converted property getter: - (unsigned)subentityID;	// 0x322b4c9d
@end

