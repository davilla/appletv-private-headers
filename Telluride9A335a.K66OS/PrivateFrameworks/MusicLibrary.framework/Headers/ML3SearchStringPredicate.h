/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Predicate.h"

@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate {
@private
	NSArray *_properties;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
}
@property(copy, nonatomic) NSArray *properties;	// G=0x3099fdb9; S=0x3099fdc9; @synthesize=_properties
@property(copy, nonatomic) NSString *searchString;	// G=0x3099fded; S=0x3099fdfd; @synthesize=_searchString
+ (id)predicateWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x3099fab1
- (id)initWithCoder:(id)coder;	// 0x3099f7cd
- (id)initWithConcatenatedProperties:(id)concatenatedProperties searchString:(id)string;	// 0x3099f715
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x3099fb01
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x3099fbed
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x3099fd71
- (void)dealloc;	// 0x3099f775
- (id)description;	// 0x3099fa11
- (void)encodeWithCoder:(id)coder;	// 0x3099f859
- (unsigned)hash;	// 0x3099f9c5
- (BOOL)isEqual:(id)equal;	// 0x3099f8e1
// declared property getter: - (id)properties;	// 0x3099fdb9
// declared property getter: - (id)searchString;	// 0x3099fded
// declared property setter: - (void)setProperties:(id)properties;	// 0x3099fdc9
// declared property setter: - (void)setSearchString:(id)string;	// 0x3099fdfd
@end

