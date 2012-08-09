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
@property(retain, nonatomic) ML3Predicate *predicate;	// G=0x3484648d; S=0x3484649d; @synthesize=_predicate
+ (id)predicateWithPredicate:(id)predicate;	// 0x34846425
- (id)initWithCoder:(id)coder;	// 0x348461b9
- (id)initWithPredicate:(id)predicate;	// 0x34846159
- (void).cxx_destruct;	// 0x348464c5
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x34846405
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x3484646d
- (void)encodeWithCoder:(id)coder;	// 0x34846245
- (unsigned)hash;	// 0x348463a9
- (BOOL)isEqual:(id)equal;	// 0x348462cd
// declared property getter: - (id)predicate;	// 0x3484648d
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x3484649d
@end
