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
	NSString *_dbCountry;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *country;	// G=0x3400d5f5; S=0x3400d741; @synthesize=_country
@property(readonly, assign, nonatomic) NSString *dbCountry;	// G=0x3400d765; @synthesize=_dbCountry
@property(copy, nonatomic) NSString *phoneNumber;	// G=0x3400d605; S=0x3400d71d; @synthesize=_phoneNumber
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x3400d81d
// declared property getter: - (id)country;	// 0x3400d5f5
// declared property getter: - (id)dbCountry;	// 0x3400d765
- (void)dealloc;	// 0x3400d6a9
- (void)evaluateCallbackWithSqliteContext:(sqlite3_context *)sqliteContext predicateContext:(void *)context values:(Mem **)values count:(int)count;	// 0x3400d789
- (BOOL)hasCallback;	// 0x3400d5f1
- (BOOL)isValid;	// 0x3400d615
// declared property getter: - (id)phoneNumber;	// 0x3400d605
- (id)predicateFormat;	// 0x3400d645
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x3400d5e1
- (id)queryWhereString;	// 0x3400d5e5
// declared property setter: - (void)setCountry:(id)country;	// 0x3400d741
// declared property setter: - (void)setPhoneNumber:(id)number;	// 0x3400d71d
@end

