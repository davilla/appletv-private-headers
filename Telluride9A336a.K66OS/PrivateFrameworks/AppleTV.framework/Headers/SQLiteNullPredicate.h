/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import "AppleTV-Structs.h"
#import "SQLitePropertyPredicate.h"


__attribute__((visibility("hidden")))
@interface SQLiteNullPredicate : SQLitePropertyPredicate <NSCopying> {
@private
	BOOL _matchesNull;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL matchesNull;	// G=0x33be522d; @synthesize=_matchesNull
+ (id)isNotNullPredicateWithProperty:(id)property;	// 0x33be501d
+ (id)isNullPredicateWithProperty:(id)property;	// 0x33be509d
- (id)SQLForEntityClass:(Class)entityClass;	// 0x33be519d
- (id)copyWithZone:(NSZone *)zone;	// 0x33be511d
- (BOOL)isEqual:(id)equal;	// 0x33be512d
// declared property getter: - (BOOL)matchesNull;	// 0x33be522d
@end

