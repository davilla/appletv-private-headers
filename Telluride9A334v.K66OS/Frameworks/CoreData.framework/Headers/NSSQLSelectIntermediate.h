/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSArray, NSString, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLSelectIntermediate : NSSQLIntermediate {
@private
	NSSQLEntity *_entity;	// 8 = 0x8
	NSString *_entityAlias;	// 12 = 0xc
	NSString *_correlationTarget;	// 16 = 0x10
	NSArray *_fetchColumns;	// 20 = 0x14
	BOOL _useDistinct;	// 24 = 0x18
	NSString *_columnAlias;	// 28 = 0x1c
	BOOL _isCount;	// 32 = 0x20
}
- (id)initForCorrelationTarget:(id)correlationTarget alias:(id)alias fetchColumns:(id)columns inScope:(id)scope;	// 0x31f1c019
- (id)initWithEntity:(id)entity alias:(id)alias fetchColumns:(id)columns inScope:(id)scope;	// 0x31e544e1
- (void)dealloc;	// 0x31e582dd
- (id)generateSQLStringInContext:(id)context;	// 0x31e57411
- (BOOL)isSelectTargetScoped;	// 0x31f1bf51
- (BOOL)onlyFetchesAggregates;	// 0x31f1bf55
- (void)setColumnAlias:(id)alias;	// 0x31f1bfd1
- (void)setFetchColumns:(id)columns;	// 0x31f1bf89
- (void)setFetchEntity:(id)entity;	// 0x31f1bf69
- (void)setIsCount:(BOOL)count;	// 0x31f1bf79
- (void)setUseDistinct:(BOOL)distinct;	// 0x31f1bf59
@end

