/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_addressBook;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_searchAddressBook;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_shared;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_principal;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_collection;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_unauthenticated;	// 44 = 0x2c
}
@property(retain) CoreDAVItemWithNoChildren *addressBook;	// G=0x30cbce09; S=0x30cbce1d; @synthesize=_addressBook
@property(retain) CoreDAVItemWithNoChildren *collection;	// G=0x30cbcee9; S=0x30cbcefd; @synthesize=_collection
@property(retain) CoreDAVItemWithNoChildren *principal;	// G=0x30cbceb1; S=0x30cbcec5; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *searchAddressBook;	// G=0x30cbce41; S=0x30cbce55; @synthesize=_searchAddressBook
@property(retain) CoreDAVItemWithNoChildren *shared;	// G=0x30cbce79; S=0x30cbce8d; @synthesize=_shared
@property(readonly, assign) NSSet *stringSet;	// G=0x30cbc6f1; 
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x30cbcf21; S=0x30cbcf35; @synthesize=_unauthenticated
- (id)init;	// 0x30cbbe81
// declared property getter: - (id)addressBook;	// 0x30cbce09
// declared property getter: - (id)collection;	// 0x30cbcee9
- (id)copyParseRules;	// 0x30cbc0cd
- (void)dealloc;	// 0x30cbbead
- (id)description;	// 0x30cbbf5d
- (BOOL)isTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x30cbcbad
// declared property getter: - (id)principal;	// 0x30cbceb1
// declared property getter: - (id)searchAddressBook;	// 0x30cbce41
// declared property setter: - (void)setAddressBook:(id)book;	// 0x30cbce1d
// declared property setter: - (void)setCollection:(id)collection;	// 0x30cbcefd
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x30cbcec5
// declared property setter: - (void)setSearchAddressBook:(id)book;	// 0x30cbce55
// declared property setter: - (void)setShared:(id)shared;	// 0x30cbce8d
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x30cbcf35
// declared property getter: - (id)shared;	// 0x30cbce79
// declared property getter: - (id)stringSet;	// 0x30cbc6f1
// declared property getter: - (id)unauthenticated;	// 0x30cbcf21
- (void)write:(id)write;	// 0x30cbc519
@end
