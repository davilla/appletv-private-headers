/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLSelectIntermediate, NSSQLLimitIntermediate, NSSQLEntity, NSMutableDictionary, NSSQLOffsetIntermediate, NSSQLWhereIntermediate, NSSQLGroupByIntermediate, NSMutableArray, NSSQLOrderIntermediate, NSSQLHavingIntermediate, NSString, NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSSQLFetchIntermediate : NSSQLIntermediate {
@private
	NSSQLEntity *_governingEntity;	// 8 = 0x8
	NSString *_governingAlias;	// 12 = 0xc
	NSString *_correlationToken;	// 16 = 0x10
	NSSQLSelectIntermediate *_selectClause;	// 20 = 0x14
	NSSQLWhereIntermediate *_whereClause;	// 24 = 0x18
	NSSQLGroupByIntermediate *_groupByClause;	// 28 = 0x1c
	NSSQLHavingIntermediate *_havingClause;	// 32 = 0x20
	NSSQLLimitIntermediate *_limitClause;	// 36 = 0x24
	NSSQLOffsetIntermediate *_offsetClause;	// 40 = 0x28
	NSSQLOrderIntermediate *_orderIntermediate;	// 44 = 0x2c
	NSMutableArray *_joinIntermediates;	// 48 = 0x30
	NSMutableDictionary *_joinKeypaths;	// 52 = 0x34
	NSMutableSet *_groupByKeypaths;	// 56 = 0x38
	BOOL _isDictionaryCountFetch;	// 60 = 0x3c
}
@property(assign, getter=isDictionaryCountFetch) BOOL dictionaryCountFetch;	// G=0x362ec73d; S=0x362ec74d; converted property
@property(retain) NSString *governingAlias;	// G=0x3623d905; S=0x362ec99d; converted property
@property(retain) NSSQLEntity *governingEntity;	// G=0x36241269; S=0x362ec77d; converted property
@property(retain) id groupByIntermediate;	// G=0x362557e5; S=0x362ecead; converted property
@property(retain) id havingIntermediate;	// G=0x362ec75d; S=0x362ecdd1; converted property
@property(readonly, retain) NSMutableArray *joinIntermediates;	// G=0x3623fc05; converted property
@property(retain) id limitIntermediate;	// G=0x362ec76d; S=0x3623dc69; converted property
@property(retain) id selectIntermediate;	// G=0x3623da29; S=0x3623d9e1; converted property
- (id)initWithEntity:(id)entity alias:(id)alias inScope:(id)scope;	// 0x3623cb99
- (id)initWithScope:(id)scope;	// 0x3623cbed
- (id)_generateJoinSQLStringInContext:(id)context;	// 0x362412a5
- (void)addGroupByKeypath:(id)keypath;	// 0x362ece41
- (void)addJoinIntermediate:(id)intermediate atKeypathWithComponents:(id)components;	// 0x362ecbf1
- (void)dealloc;	// 0x36241579
- (id)fetchIntermediate;	// 0x36241265
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x3623f811
- (id)finalJoinForKeypathWithComponents:(id)components;	// 0x362ecb19
- (id)generateSQLStringInContext:(id)context;	// 0x3623dcc1
// converted property getter: - (id)governingAlias;	// 0x3623d905
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x3623f391
// converted property getter: - (id)governingEntity;	// 0x36241269
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x3623f2a1
- (BOOL)groupByClauseContainsKeypath:(id)keypath;	// 0x362ece19
// converted property getter: - (id)groupByIntermediate;	// 0x362557e5
// converted property getter: - (id)havingIntermediate;	// 0x362ec75d
// converted property getter: - (BOOL)isDictionaryCountFetch;	// 0x362ec73d
- (BOOL)isFunctionScoped;	// 0x362ecef5
// converted property getter: - (id)joinIntermediates;	// 0x3623fc05
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;	// 0x362ec7ad
// converted property getter: - (id)limitIntermediate;	// 0x362ec76d
- (void)promoteToOuterJoinAtKeypathWithComponents:(id)components;	// 0x362eca2d
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(id)components;	// 0x36253f55
- (void)selectDistinct;	// 0x362ec78d
// converted property getter: - (id)selectIntermediate;	// 0x3623da29
- (void)setCorrelationToken:(id)token;	// 0x362ec9e5
// converted property setter: - (void)setDictionaryCountFetch:(BOOL)fetch;	// 0x362ec74d
// converted property setter: - (void)setGoverningAlias:(id)alias;	// 0x362ec99d
// converted property setter: - (void)setGoverningEntity:(id)entity;	// 0x362ec77d
// converted property setter: - (void)setGroupByIntermediate:(id)intermediate;	// 0x362ecead
// converted property setter: - (void)setHavingIntermediate:(id)intermediate;	// 0x362ecdd1
// converted property setter: - (void)setLimitIntermediate:(id)intermediate;	// 0x3623dc69
- (void)setOffsetIntermediate:(id)intermediate;	// 0x362ecd89
- (void)setOrderIntermediate:(id)intermediate;	// 0x3623db61
// converted property setter: - (void)setSelectIntermediate:(id)intermediate;	// 0x3623d9e1
- (void)setWhereIntermediate:(id)intermediate;	// 0x3623d139
@end

