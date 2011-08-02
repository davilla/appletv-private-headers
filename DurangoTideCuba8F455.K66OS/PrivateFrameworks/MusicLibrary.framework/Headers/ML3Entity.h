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
@property(readonly, assign) BOOL existsInLibrary;	// G=0x31bc5625; 
@property(assign) ML3MusicLibrary *library;	// G=0x31bc3711; S=0x31be9cd5; @synthesize=_library
@property(readonly, assign) long long persistentID;	// G=0x31bc52b9; @synthesize=_persistentID
+ (id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;	// 0x31bbc38d
+ (id)anyInLibrary:(id)library predicate:(id)predicate;	// 0x31bb8861
+ (id)defaultOrderingProperties;	// 0x31be9cbd
+ (id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;	// 0x31befea9
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x31bb90f9
+ (id)extraTablesToDelete;	// 0x31be9ccd
+ (id)foreignColumnForProperty:(id)property;	// 0x31be9cc5
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x31be9cc1
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x31bbd3c9
+ (id)indexableSQLForProperties:(id)properties;	// 0x31beaa11
+ (BOOL)insertValues:(id)values intoTable:(id)table persistentID:(long long)anId library:(id)library;	// 0x31bc4d11
+ (id)joinClauseForProperty:(id)property;	// 0x31be9cb9
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x31be9cc9
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x31bc45b1
+ (id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x31bc3155
+ (id)orderingSQLForProperties:(id)properties directionality:(id)directionality;	// 0x31bbc9c1
+ (id)persistentIDColumnForTable:(id)table;	// 0x31be9cd1
+ (void)predisambiguateProperties:(id)properties toDictionary:(id)dictionary;	// 0x31bbbdcd
+ (id)predisambiguatedProperties;	// 0x31bb9189
+ (id)queryWithLibrary:(id)library predicate:(id)predicate;	// 0x31bc377d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;	// 0x31bc2be5
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;	// 0x31bbc075
+ (id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;	// 0x31beff35
+ (id)representativeEntityOfEntity:(id)entity persistentIDProperty:(id)property foreignPersistentIDProperty:(id)property3;	// 0x31bf1735
+ (id)subselectPropertyForProperty:(id)property;	// 0x31be9cb5
+ (id)subselectStatementForProperty:(id)property;	// 0x31bb96ed
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x31bc4b65
- (id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x31bc3189
- (BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column;	// 0x31bea0e9
- (id)copyWithZone:(NSZone *)zone;	// 0x31bea8d9
- (BOOL)deleteFromLibrary;	// 0x31bea055
// declared property getter: - (BOOL)existsInLibrary;	// 0x31bc5625
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x31bc3251
- (unsigned)hash;	// 0x31be9ca5
- (BOOL)isEqual:(id)equal;	// 0x31be9ce5
// declared property getter: - (id)library;	// 0x31bc3711
- (BOOL)matchesPredicate:(id)predicate;	// 0x31bea56d
- (id)newSelectSQLForProperties:(id *)properties count:(unsigned)count predicate:(id)predicate;	// 0x31bc3349
// declared property getter: - (long long)persistentID;	// 0x31bc52b9
// declared property setter: - (void)setLibrary:(id)library;	// 0x31be9cd5
- (void)setValue:(id)value forProperty:(id)property;	// 0x31bc8595
- (id)valueForProperty:(id)property;	// 0x31bc4409
@end
