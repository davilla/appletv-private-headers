/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray;

@interface ASSettingsTaskUserInformationGetResponse : ASItem {
	NSArray *_emailAddresses;	// 40 = 0x28
}
@property(retain, nonatomic) NSArray *emailAddresses;	// G=0x30a33c0d; S=0x30a33c1d; @synthesize=_emailAddresses
+ (BOOL)acceptsTopLevelLeaves;	// 0x30a33799
+ (BOOL)frontingBasicTypes;	// 0x30a33895
+ (BOOL)notifyOfUnknownTokens;	// 0x30a338e9
+ (BOOL)parsingLeafNode;	// 0x30a337ed
+ (BOOL)parsingWithSubItems;	// 0x30a33841
- (id)asParseRules;	// 0x30a339f1
- (void)dealloc;	// 0x30a3393d
- (id)description;	// 0x30a33989
// declared property getter: - (id)emailAddresses;	// 0x30a33c0d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x30a33b61
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x30a33c1d
@end
