/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate {
	NSString *_property;	// 4 = 0x4
}
@property(copy, nonatomic) NSString *property;	// G=0x3547d225; S=0x35446739; @synthesize=_property
- (id)initWithCoder:(id)coder;	// 0x3547cfa5
- (id)initWithProperty:(id)property;	// 0x354466d9
- (void).cxx_destruct;	// 0x3547d239
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x35447e35
- (void)encodeWithCoder:(id)coder;	// 0x3547d031
- (unsigned)hash;	// 0x3547d195
- (BOOL)isDynamicForEntityClass:(Class)entityClass;	// 0x3547d1f1
- (BOOL)isEqual:(id)equal;	// 0x3547d0b9
// declared property getter: - (id)property;	// 0x3547d225
// declared property setter: - (void)setProperty:(id)property;	// 0x35446739
@end

