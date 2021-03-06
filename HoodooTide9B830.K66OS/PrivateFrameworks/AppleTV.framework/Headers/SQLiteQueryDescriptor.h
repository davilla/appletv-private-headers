/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, SQLitePredicate;

__attribute__((visibility("hidden")))
@interface SQLiteQueryDescriptor : NSObject <NSCopying> {
@private
	Class _entityClass;	// 4 = 0x4
	int _limitCount;	// 8 = 0x8
	NSArray *_orderingDirections;	// 12 = 0xc
	NSArray *_orderingProperties;	// 16 = 0x10
	SQLitePredicate *_predicate;	// 20 = 0x14
	BOOL _returnsDistinctEntities;	// 24 = 0x18
}
@property(assign, nonatomic) Class entityClass;	// G=0x32b53ea1; S=0x32b53eb1; @synthesize=_entityClass
@property(assign, nonatomic) int limitCount;	// G=0x32b53ec1; S=0x32b53ed1; @synthesize=_limitCount
@property(copy, nonatomic) NSArray *orderingDirections;	// G=0x32b53ee1; S=0x32b53ef1; @synthesize=_orderingDirections
@property(copy, nonatomic) NSArray *orderingProperties;	// G=0x32b53f15; S=0x32b53f25; @synthesize=_orderingProperties
@property(copy, nonatomic) SQLitePredicate *predicate;	// G=0x32b53f49; S=0x32b53f59; @synthesize=_predicate
@property(assign, nonatomic) BOOL returnsDistinctEntities;	// G=0x32b53f7d; S=0x32b53f8d; @synthesize=_returnsDistinctEntities
- (id)_newSelectSQLWithProperties:(id)properties columns:(id)columns;	// 0x32b53a09
- (id)copyWithZone:(NSZone *)zone;	// 0x32b53925
- (void)dealloc;	// 0x32b538b1
// declared property getter: - (Class)entityClass;	// 0x32b53ea1
// declared property getter: - (int)limitCount;	// 0x32b53ec1
// declared property getter: - (id)orderingDirections;	// 0x32b53ee1
// declared property getter: - (id)orderingProperties;	// 0x32b53f15
// declared property getter: - (id)predicate;	// 0x32b53f49
// declared property getter: - (BOOL)returnsDistinctEntities;	// 0x32b53f7d
// declared property setter: - (void)setEntityClass:(Class)aClass;	// 0x32b53eb1
// declared property setter: - (void)setLimitCount:(int)count;	// 0x32b53ed1
// declared property setter: - (void)setOrderingDirections:(id)directions;	// 0x32b53ef1
// declared property setter: - (void)setOrderingProperties:(id)properties;	// 0x32b53f25
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x32b53f59
// declared property setter: - (void)setReturnsDistinctEntities:(BOOL)entities;	// 0x32b53f8d
@end

