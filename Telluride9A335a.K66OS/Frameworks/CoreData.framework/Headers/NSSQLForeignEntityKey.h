/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"

@class NSSQLForeignKey;

__attribute__((visibility("hidden")))
@interface NSSQLForeignEntityKey : NSSQLColumn {
@private
	NSSQLForeignKey *_foreignKey;	// 52 = 0x34
}
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x3318019d; converted property
- (id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x33180225
- (id)initWithEntity:(id)entity foreignKey:(id)key;	// 0x33180325
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x331802c9
- (void)dealloc;	// 0x331801bd
// converted property getter: - (id)foreignKey;	// 0x3318019d
- (void)setFKForReadOnlyFetch:(id)readOnlyFetch;	// 0x331801ad
- (id)toOneRelationship;	// 0x331801fd
@end
