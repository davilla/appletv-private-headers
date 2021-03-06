/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"


@interface ABAnyValuePredicate : ABPredicate {
@private
	int _property;	// 8 = 0x8
}
@property(assign, nonatomic) int property;	// G=0x34ec7619; S=0x34ec7629; @synthesize=_property
- (id)init;	// 0x34ec7639
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x34ec7679
- (BOOL)isValid;	// 0x34ec75fd
// declared property getter: - (int)property;	// 0x34ec7619
- (id)queryGroupByProperties;	// 0x34ec770d
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x34ec7735
- (id)queryWhereString;	// 0x34ec76bd
// declared property setter: - (void)setProperty:(int)property;	// 0x34ec7629
@end

