/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class NSString;

@interface ML3AggregateQuery : ML3Query {
	Class _aggregateEntityClass;	// 32 = 0x20
	NSString *_foreignPersistentIDProperty;	// 36 = 0x24
}
@property(readonly, assign) Class aggregateEntityClass;	// G=0x30af6b01; @synthesize=_aggregateEntityClass
@property(readonly, assign) NSString *foreignPersistentIDProperty;	// G=0x30af6b15; @synthesize=_foreignPersistentIDProperty
- (id)initWithCoder:(id)coder;	// 0x30af688d
- (id)initWithUnitQuery:(id)unitQuery aggregateEntityClass:(Class)aClass foreignPersistentIDProperty:(id)property;	// 0x30ac6f11
- (void).cxx_destruct;	// 0x30af6b29
// declared property getter: - (Class)aggregateEntityClass;	// 0x30af6b01
- (unsigned)countOfEntities;	// 0x30af6a99
- (void)dealloc;	// 0x30ac73a1
- (BOOL)distinctPersistentIDProperty;	// 0x30ac7079
- (void)encodeWithCoder:(id)coder;	// 0x30af696d
- (Class)entityClass;	// 0x30ac7091
// declared property getter: - (id)foreignPersistentIDProperty;	// 0x30af6b15
- (BOOL)hasEntities;	// 0x30af6a31
- (id)persistentIDProperty;	// 0x30ac707d
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x30ac70a5
@end
