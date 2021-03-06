/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class ML3AggregateQuery, ML3MusicLibrary, NSString, NSArray, ML3Predicate;

@interface ML3Query : NSObject <NSCoding> {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
	Class _entityClass;	// 8 = 0x8
	ML3Predicate *_predicate;	// 12 = 0xc
	NSArray *_orderingProperties;	// 16 = 0x10
	NSArray *_directionality;	// 20 = 0x14
	BOOL _usingSections;	// 24 = 0x18
	ML3AggregateQuery *_nonDirectAggregateQuery;	// 28 = 0x1c
}
@property(readonly, assign) unsigned countOfEntities;	// G=0x300139e9; 
@property(readonly, assign) Class entityClass;	// G=0x300114ad; @synthesize=_entityClass
@property(readonly, assign) BOOL hasEntities;	// G=0x30011d4d; 
@property(readonly, assign) ML3MusicLibrary *library;	// G=0x3000b7d1; @synthesize=_library
@property(readonly, assign) ML3AggregateQuery *nonDirectAggregateQuery;	// G=0x30031e61; @synthesize=_nonDirectAggregateQuery
@property(readonly, assign) NSArray *orderingProperties;	// G=0x30013251; @synthesize=_orderingProperties
@property(readonly, assign) ML3Predicate *predicate;	// G=0x30013241; @synthesize=_predicate
@property(readonly, assign) NSString *sectionProperty;	// G=0x30010f11; 
@property(readonly, assign) BOOL usingSections;	// G=0x30013261; @synthesize=_usingSections
- (id)initWithCoder:(id)coder;	// 0x300304f5
- (id)initWithLibrary:(id)library entityClass:(Class)aClass predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections nonDirectAggregateQuery:(id)query;	// 0x3000a7ad
- (void)bindToCountSqlite3Statement:(sqlite3_stmt *)countSqlite3Statement bindingIndex:(inout int *)index;	// 0x30031e41
- (void)bindToPersistentIDsSqlite3Statement:(sqlite3_stmt *)persistentIDsSqlite3Statement bindingIndex:(inout int *)index;	// 0x3000c961
- (void)bindToSectionsSqlite3Statement:(sqlite3_stmt *)sectionsSqlite3Statement bindingIndex:(inout int *)index;	// 0x30010fdd
// declared property getter: - (unsigned)countOfEntities;	// 0x300139e9
- (void)dealloc;	// 0x3000cee9
- (BOOL)deleteAllEntitiesFromLibrary;	// 0x30030a55
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)deletionType;	// 0x30030a6d
- (id)description;	// 0x30030829
- (BOOL)distinctPersistentIDProperty;	// 0x3000aa0d
- (void)encodeWithCoder:(id)coder;	// 0x300305cd
// declared property getter: - (Class)entityClass;	// 0x300114ad
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered cancelBlock:(id)block usingBlock:(id)block5;	// 0x3000a8ad
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered usingBlock:(id)block;	// 0x3000a87d
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 usingBlock:(id)block;	// 0x300114bd
- (void)enumeratePersistentIDsAndProperties:(id)properties usingBlock:(id)block;	// 0x300311ed
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x30012799
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x30010ba9
// declared property getter: - (BOOL)hasEntities;	// 0x30011d4d
- (BOOL)isEqual:(id)equal;	// 0x300306b1
// declared property getter: - (id)library;	// 0x3000b7d1
// declared property getter: - (id)nonDirectAggregateQuery;	// 0x30031e61
// declared property getter: - (id)orderingProperties;	// 0x30013251
- (id)persistentIDProperty;	// 0x3000ab71
// declared property getter: - (id)predicate;	// 0x30013241
// declared property getter: - (id)sectionProperty;	// 0x30010f11
- (id)sections;	// 0x300309b9
- (id)selectCountSQL;	// 0x30031d6d
- (id)selectPersistentIDsSQL;	// 0x30031d59
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x3000aa11
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by;	// 0x30011515
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingProperties:(id)properties;	// 0x3000ad2d
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingProperties:(id)properties directionality:(id)directionality;	// 0x3000ad51
- (id)selectSQLWithColumns:(id)columns orderingProperties:(id)properties;	// 0x3000ad0d
- (id)selectSQLWithColumns:(id)columns orderingProperties:(id)properties directionality:(id)directionality;	// 0x30031d21
- (id)selectSectionsSQLWithDistinctPersistentIDProperty:(BOOL)distinctPersistentIDProperty;	// 0x30010d8d
- (id)selectUnorderedPersistentIDsSQL;	// 0x30031d45
// declared property getter: - (BOOL)usingSections;	// 0x30013261
- (id)valueForAggregateFunction:(id)aggregateFunction onEntitiesForProperty:(id)property;	// 0x30031a31
@end

