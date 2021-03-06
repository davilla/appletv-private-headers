/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"


__attribute__((visibility("hidden")))
@interface ML3UnaryPredicate : ML3Predicate {
@private
	ML3Predicate *_predicate;	// 4 = 0x4
}
@property(retain, nonatomic) ML3Predicate *predicate;	// G=0x34617129; S=0x34617139; @synthesize=_predicate
+ (id)predicateWithPredicate:(id)predicate;	// 0x346170c1
- (id)initWithCoder:(id)coder;	// 0x34616e55
- (id)initWithPredicate:(id)predicate;	// 0x34616df5
- (void).cxx_destruct;	// 0x34617161
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x346170a1
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x34617109
- (void)encodeWithCoder:(id)coder;	// 0x34616ee1
- (unsigned)hash;	// 0x34617045
- (BOOL)isEqual:(id)equal;	// 0x34616f69
// declared property getter: - (id)predicate;	// 0x34617129
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x34617139
@end

