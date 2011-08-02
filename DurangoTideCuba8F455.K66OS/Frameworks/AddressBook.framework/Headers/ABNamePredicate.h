/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABPredicate.h"
#import "AddressBook-Structs.h"

@class NSString;

@interface ABNamePredicate : ABPredicate {
@private
	void *_addressBook;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	void *_source;	// 16 = 0x10
	void *_group;	// 20 = 0x14
	NSString *_accountIdentifier;	// 24 = 0x18
	BOOL _showPersonLinks;	// 28 = 0x1c
	CFArrayRef _tokenizations;	// 32 = 0x20
	CFArrayRef _tokenizationSortKeys;	// 36 = 0x24
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x3482ec69; S=0x3482f251; @synthesize=_accountIdentifier
@property(assign, nonatomic) void *addressBook;	// G=0x3482ec79; S=0x3482ef05; @synthesize=_addressBook
@property(assign, nonatomic) void *group;	// G=0x3482ec39; S=0x3482eed1; @synthesize=_group
@property(copy, nonatomic) NSString *name;	// G=0x3482ec89; S=0x3482ed95; @synthesize=_name
@property(assign, nonatomic) BOOL showPersonLinks;	// G=0x3482ec49; S=0x3482ec59; @synthesize=_showPersonLinks
@property(assign, nonatomic) void *source;	// G=0x3482ec29; S=0x3482ee9d; @synthesize=_source
@property(readonly, assign) CFArrayRef tokenizations;	// G=0x3482ef39; converted property
- (id)init;	// 0x3482ec99
- (void)_doBindingWithStatement:(CPSqliteStatement *)statement bindingOffset:(int *)offset;	// 0x3482f191
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x3482ed2d
// declared property getter: - (id)accountIdentifier;	// 0x3482ec69
// declared property getter: - (void *)addressBook;	// 0x3482ec79
- (void)dealloc;	// 0x3482ede9
// declared property getter: - (void *)group;	// 0x3482ec39
- (BOOL)isValid;	// 0x3482ef71
// declared property getter: - (id)name;	// 0x3482ec89
- (id)predicateFormat;	// 0x3482ecc5
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x3482ed6d
- (id)queryWhereString;	// 0x3482ef95
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x3482f251
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x3482ef05
// declared property setter: - (void)setGroup:(void *)group;	// 0x3482eed1
// declared property setter: - (void)setName:(id)name;	// 0x3482ed95
// declared property setter: - (void)setShowPersonLinks:(BOOL)links;	// 0x3482ec59
// declared property setter: - (void)setSource:(void *)source;	// 0x3482ee9d
// declared property getter: - (BOOL)showPersonLinks;	// 0x3482ec49
// declared property getter: - (void *)source;	// 0x3482ec29
// converted property getter: - (CFArrayRef)tokenizations;	// 0x3482ef39
@end

