/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class ML3MusicLibrary;

@interface ML3Entity : NSObject {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign) BOOL existsInLibrary;	// G=0x333b8625; 
@property(assign) ML3MusicLibrary *library;	// G=0x333b6711; S=0x333dccd5; @synthesize=_library
@property(readonly, assign) long long persistentID;	// G=0x333b82b9; @synthesize=_persistentID
+ (id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;	// 0x333af38d
+ (id)anyInLibrary:(id)library predicate:(id)predicate;	// 0x333ab861
+ (id)defaultOrderingProperties;	// 0x333dccbd
+ (id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;	// 0x333e2ea9
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x333ac0f9
+ (id)extraTablesToDelete;	// 0x333dcccd
+ (id)foreignColumnForProperty:(id)property;	// 0x333dccc5
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x333dccc1
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x333b03c9
+ (id)indexableSQLForProperties:(id)properties;	// 0x333dda11
+ (BOOL)insertValues:(id)values intoTable:(id)table persistentID:(long long)anId library:(id)library;	// 0x333b7d11
+ (id)joinClauseForProperty:(id)property;	// 0x333dccb9
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x333dccc9
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x333b75b1
+ (id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x333b6155
+ (id)orderingSQLForProperties:(id)properties directionality:(id)directionality;	// 0x333af9c1
+ (id)persistentIDColumnForTable:(id)table;	// 0x333dccd1
+ (void)predisambiguateProperties:(id)properties toDictionary:(id)dictionary;	// 0x333aedcd
+ (id)predisambiguatedProperties;	// 0x333ac189
+ (id)queryWithLibrary:(id)library predicate:(id)predicate;	// 0x333b677d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;	// 0x333b5be5
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;	// 0x333af075
+ (id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;	// 0x333e2f35
+ (id)representativeEntityOfEntity:(id)entity persistentIDProperty:(id)property foreignPersistentIDProperty:(id)property3;	// 0x333e4735
+ (id)subselectPropertyForProperty:(id)property;	// 0x333dccb5
+ (id)subselectStatementForProperty:(id)property;	// 0x333ac6ed
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x333b7b65
- (id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x333b6189
- (BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column;	// 0x333dd0e9
- (id)copyWithZone:(NSZone *)zone;	// 0x333dd8d9
- (BOOL)deleteFromLibrary;	// 0x333dd055
// declared property getter: - (BOOL)existsInLibrary;	// 0x333b8625
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x333b6251
- (unsigned)hash;	// 0x333dcca5
- (BOOL)isEqual:(id)equal;	// 0x333dcce5
// declared property getter: - (id)library;	// 0x333b6711
- (BOOL)matchesPredicate:(id)predicate;	// 0x333dd56d
- (id)newSelectSQLForProperties:(id *)properties count:(unsigned)count predicate:(id)predicate;	// 0x333b6349
// declared property getter: - (long long)persistentID;	// 0x333b82b9
// declared property setter: - (void)setLibrary:(id)library;	// 0x333dccd5
- (void)setValue:(id)value forProperty:(id)property;	// 0x333bb595
- (id)valueForProperty:(id)property;	// 0x333b7409
@end

