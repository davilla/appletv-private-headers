/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


@interface ML3Predicate : NSObject <NSCoding, NSCopying> {
}
- (id)initWithCoder:(id)coder;	// 0x34fae221
- (id)SQLForEntityClass:(Class)entityClass;	// 0x34fae2c5
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x34fae2b9
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x34fae2bd
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x34fae2c1
- (id)copyWithZone:(NSZone *)zone;	// 0x34fae2a9
- (void)encodeWithCoder:(id)coder;	// 0x34fae24d
- (unsigned)hash;	// 0x34fae281
- (BOOL)isEqual:(id)equal;	// 0x34fae251
@end
