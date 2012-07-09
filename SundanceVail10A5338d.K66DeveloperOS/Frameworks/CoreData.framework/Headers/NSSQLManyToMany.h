/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLRelationship.h"

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {
	NSString *_correlationTableName;	// 32 = 0x20
	NSString *_columnName;	// 36 = 0x24
	NSString *_orderColumnName;	// 40 = 0x28
}
@property(readonly, retain) NSString *columnName;	// G=0x3663f449; converted property
@property(readonly, retain) NSString *correlationTableName;	// G=0x3663f09d; converted property
@property(readonly, retain) NSString *orderColumnName;	// G=0x3663f459; converted property
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x3663efe1
- (void)_setColumnName:(id)name;	// 0x3663f471
- (void)_setCorrelationTableName:(id)name;	// 0x3663f4f9
- (void)_setInverseManyToMany:(id)many;	// 0x3663f0f5
- (void)_setOrderColumnName:(id)name;	// 0x3663f4b5
// converted property getter: - (id)columnName;	// 0x3663f449
- (unsigned)columnSQLType;	// 0x3663f469
// converted property getter: - (id)correlationTableName;	// 0x3663f09d
- (void)dealloc;	// 0x3663f025
- (id)inverseColumnName;	// 0x3663f54d
- (id)inverseManyToMany;	// 0x3663f53d
- (id)inverseOrderColumnName;	// 0x3663f59d
- (BOOL)isMaster;	// 0x3663f0dd
- (BOOL)isReflexive;	// 0x3663f425
- (BOOL)isTableSchemaEqual:(id)equal;	// 0x3663f61d
// converted property getter: - (id)orderColumnName;	// 0x3663f459
- (unsigned)orderColumnSQLType;	// 0x3663f46d
@end
