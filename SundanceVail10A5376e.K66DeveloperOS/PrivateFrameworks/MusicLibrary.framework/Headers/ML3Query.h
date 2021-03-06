/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class ML3AggregateQuery, NSArray, ML3MusicLibrary, ML3Predicate, NSString;

@interface ML3Query : NSObject <NSCoding> {
	ML3MusicLibrary *_library;	// 4 = 0x4
	Class _entityClass;	// 8 = 0x8
	ML3Predicate *_predicate;	// 12 = 0xc
	NSArray *_orderingTerms;	// 16 = 0x10
	NSString *_propertyToCount;	// 20 = 0x14
	ML3AggregateQuery *_nonDirectAggregateQuery;	// 24 = 0x18
	BOOL _usingSections;	// 28 = 0x1c
	BOOL _filtersOnDynamicProperties;	// 29 = 0x1d
}
@property(readonly, assign) unsigned countOfEntities;	// G=0x34841ea1; 
@property(readonly, assign) BOOL distinctPersistentIDProperty;	// G=0x34813369; 
@property(readonly, assign) Class entityClass;	// G=0x3481ce65; @synthesize=_entityClass
@property(readonly, assign) BOOL filtersOnDynamicProperties;	// G=0x34816ee1; @synthesize=_filtersOnDynamicProperties
@property(readonly, assign) BOOL hasEntities;	// G=0x3482098d; 
@property(readonly, assign) ML3MusicLibrary *library;	// G=0x34813cb1; @synthesize=_library
@property(readonly, assign) ML3AggregateQuery *nonDirectAggregateQuery;	// G=0x348441a9; @synthesize=_nonDirectAggregateQuery
@property(readonly, assign) NSArray *orderingTerms;	// G=0x348167c9; @synthesize=_orderingTerms
@property(readonly, assign) NSString *persistentIDProperty;	// G=0x34813571; 
@property(readonly, assign) ML3Predicate *predicate;	// G=0x3481ce79; @synthesize=_predicate
@property(readonly, assign) NSString *propertyToCount;	// G=0x34844195; @synthesize=_propertyToCount
@property(readonly, assign) NSString *sectionProperty;	// G=0x34818771; 
@property(readonly, assign) NSString *selectCountSQL;	// G=0x34844021; 
@property(readonly, assign) NSString *selectPersistentIDsSQL;	// G=0x3484400d; 
@property(readonly, assign) BOOL usingSections;	// G=0x3481ce8d; @synthesize=_usingSections
- (id)initWithCoder:(id)coder;	// 0x348415fd
- (id)initWithLibrary:(id)library entityClass:(Class)aClass predicate:(id)predicate orderingTerms:(id)terms usingSections:(BOOL)sections nonDirectAggregateQuery:(id)query propertyToCount:(id)count;	// 0x34812fe9
- (void).cxx_destruct;	// 0x348147ad
- (void)bindToCountStatement:(id)countStatement bindingIndex:(inout int *)index;	// 0x34844175
- (void)bindToLowerBoundStatement:(id)lowerBoundStatement bindingIndex:(inout int *)index orderingTerms:(id)terms lowerBoundPersistentID:(long long)anId;	// 0x3484352d
- (void)bindToPersistentIDsStatement:(id)persistentIDsStatement bindingIndex:(inout int *)index;	// 0x348143f1
- (void)bindToSectionsStatement:(id)sectionsStatement bindingIndex:(inout int *)index;	// 0x34843fd9
- (unsigned)countOfDistinctRowsForColumn:(id)column;	// 0x34841c41
// declared property getter: - (unsigned)countOfEntities;	// 0x34841ea1
- (BOOL)deleteAllEntitiesFromLibrary;	// 0x34841f71
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)deletionType;	// 0x34841f89
- (id)description;	// 0x34841b69
// declared property getter: - (BOOL)distinctPersistentIDProperty;	// 0x34813369
- (void)encodeWithCoder:(id)coder;	// 0x3484178d
// declared property getter: - (Class)entityClass;	// 0x3481ce65
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered cancelBlock:(id)block usingBlock:(id)block5;	// 0x348131ad
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered usingBlock:(id)block;	// 0x34813159
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 usingBlock:(id)block;	// 0x34842b89
- (void)enumeratePersistentIDsAndProperties:(id)properties usingBlock:(id)block;	// 0x3481cea5
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x34818875
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x34842381
// declared property getter: - (BOOL)filtersOnDynamicProperties;	// 0x34816ee1
// declared property getter: - (BOOL)hasEntities;	// 0x3482098d
- (BOOL)hasRowForColumn:(id)column;	// 0x348209a5
- (BOOL)isEqual:(id)equal;	// 0x348418f5
// declared property getter: - (id)library;	// 0x34813cb1
// declared property getter: - (id)nonDirectAggregateQuery;	// 0x348441a9
// declared property getter: - (id)orderingTerms;	// 0x348167c9
// declared property getter: - (id)persistentIDProperty;	// 0x34813571
// declared property getter: - (id)predicate;	// 0x3481ce79
// declared property getter: - (id)propertyToCount;	// 0x34844195
// declared property getter: - (id)sectionProperty;	// 0x34818771
- (id)sections;	// 0x34841ec1
// declared property getter: - (id)selectCountSQL;	// 0x34844021
// declared property getter: - (id)selectPersistentIDsSQL;	// 0x3484400d
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x3481336d
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered distinct:(BOOL)distinct;	// 0x34813391
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by;	// 0x34843349
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by distinct:(BOOL)distinct;	// 0x348188dd
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingTerms:(id)terms;	// 0x34843455
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingTerms:(id)terms directionality:(id)directionality usingLowerBound:(BOOL)bound;	// 0x348434b5
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingTerms:(id)terms directionality:(id)directionality usingLowerBound:(BOOL)bound distinct:(BOOL)distinct limit:(unsigned)limit;	// 0x348135d5
- (id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms;	// 0x34843405
- (id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms directionality:(id)directionality;	// 0x348433a5
- (id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms distinct:(BOOL)distinct;	// 0x34813585
- (id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms limit:(unsigned)limit;	// 0x34820b8d
- (id)selectSectionsSQLWithDistinctPersistentIDProperty:(BOOL)distinctPersistentIDProperty;	// 0x34843de1
- (id)selectUnorderedPersistentIDsSQL;	// 0x34843ff9
// declared property getter: - (BOOL)usingSections;	// 0x3481ce8d
- (id)valueForAggregateFunction:(id)aggregateFunction onEntitiesForProperty:(id)property;	// 0x34843005
@end

