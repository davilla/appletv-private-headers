/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"

@class NSString, NSSet;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate {
	NSString *_searchString;	// 4 = 0x4
	NSSet *_properties;	// 8 = 0x8
}
@property(copy, nonatomic) NSSet *properties;	// G=0x31a0c21d; S=0x31a0c22d; @synthesize=_properties
@property(copy, nonatomic) NSString *searchString;	// G=0x31a0c1e9; S=0x31a0c1f9; @synthesize=_searchString
+ (id)predicateWithSearchString:(id)searchString forProperties:(id)properties;	// 0x31a0bd61
- (id)initWithCoder:(id)coder;	// 0x31a0bf39
- (id)ML3PredicateForContainer;	// 0x31a473cd
- (id)ML3PredicateForTrack;	// 0x31a47391
- (id)_ML3PredicateForEntityClass:(Class)entityClass;	// 0x31a4724d
- (void)dealloc;	// 0x31a0bed9
- (id)description;	// 0x31a0c0b1
- (void)encodeWithCoder:(id)coder;	// 0x31a0c019
- (unsigned)hash;	// 0x31a0c1a9
- (BOOL)isEqual:(id)equal;	// 0x31a0c11d
// declared property getter: - (id)properties;	// 0x31a0c21d
// declared property getter: - (id)searchString;	// 0x31a0c1e9
// declared property setter: - (void)setProperties:(id)properties;	// 0x31a0c22d
// declared property setter: - (void)setSearchString:(id)string;	// 0x31a0c1f9
@end

