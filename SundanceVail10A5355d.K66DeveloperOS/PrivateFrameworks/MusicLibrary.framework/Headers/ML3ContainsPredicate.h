/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"


@interface ML3ContainsPredicate : ML3PropertyPredicate {
	id _values;	// 8 = 0x8
}
@property(copy, nonatomic) id values;	// G=0x3547e3a9; S=0x3547e3bd; @synthesize=_values
+ (id)predicateWithProperty:(id)property valueSet:(id)set;	// 0x3547de8d
+ (id)predicateWithProperty:(id)property values:(id)values;	// 0x3547de29
- (id)initWithCoder:(id)coder;	// 0x3547df55
- (id)initWithProperty:(id)property values:(id)values;	// 0x3547def1
- (void).cxx_destruct;	// 0x3547e3cd
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x3547e1dd
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x3547e2bd
- (id)description;	// 0x3547e145
- (void)encodeWithCoder:(id)coder;	// 0x3547dfe1
- (BOOL)isEqual:(id)equal;	// 0x3547e069
// declared property setter: - (void)setValues:(id)values;	// 0x3547e3bd
// declared property getter: - (id)values;	// 0x3547e3a9
@end
