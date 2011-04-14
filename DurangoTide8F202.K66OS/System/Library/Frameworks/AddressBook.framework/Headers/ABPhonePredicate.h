/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString;

@interface ABPhonePredicate : ABPredicate {
@private
	NSString *_phoneNumber;	// 8 = 0x8
	NSString *_country;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *country;	// G=0x304eba41; S=0x304ebbd5; @synthesize=_country
@property(copy, nonatomic) NSString *phoneNumber;	// G=0x304eba51; S=0x304ebba9; @synthesize=_phoneNumber
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x304ebae5
// declared property getter: - (id)country;	// 0x304eba41
- (void)evaluateCallbackWithSqliteContext:(sqlite3_context *)sqliteContext predicateContext:(void *)context values:(Mem **)values count:(int)count;	// 0x304ebb41
- (BOOL)hasCallback;	// 0x304eba3d
- (BOOL)isValid;	// 0x304ebabd
// declared property getter: - (id)phoneNumber;	// 0x304eba51
- (id)predicateFormat;	// 0x304eba61
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x304eba2d
- (id)queryWhereString;	// 0x304eba31
// declared property setter: - (void)setCountry:(id)country;	// 0x304ebbd5
// declared property setter: - (void)setPhoneNumber:(id)number;	// 0x304ebba9
@end
