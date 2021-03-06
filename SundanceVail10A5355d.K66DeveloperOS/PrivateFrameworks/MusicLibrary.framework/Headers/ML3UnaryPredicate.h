/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"


@interface ML3UnaryPredicate : ML3Predicate {
	ML3Predicate *_predicate;	// 4 = 0x4
}
@property(retain, nonatomic) ML3Predicate *predicate;	// G=0x3547ce59; S=0x3547ce69; @synthesize=_predicate
+ (id)predicateWithPredicate:(id)predicate;	// 0x3547cdf1
- (id)initWithCoder:(id)coder;	// 0x3547cb85
- (id)initWithPredicate:(id)predicate;	// 0x3547cb25
- (void).cxx_destruct;	// 0x3547ce91
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x3547cdd1
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x3547ce39
- (void)encodeWithCoder:(id)coder;	// 0x3547cc11
- (unsigned)hash;	// 0x3547cd75
- (BOOL)isEqual:(id)equal;	// 0x3547cc99
// declared property getter: - (id)predicate;	// 0x3547ce59
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x3547ce69
@end

