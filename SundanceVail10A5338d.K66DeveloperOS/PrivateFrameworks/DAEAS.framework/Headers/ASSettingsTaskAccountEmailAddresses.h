/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSMutableSet, NSArray, NSString;

@interface ASSettingsTaskAccountEmailAddresses : ASItem {
	NSMutableSet *_emailAddresses;	// 40 = 0x28
	NSString *_primarySMTPAddress;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSArray *emailAddresses;	// G=0x36eeef91; 
@property(readonly, assign) NSString *primarySMTPAddress;	// G=0x36eef3e5; @synthesize=_primarySMTPAddress
+ (BOOL)acceptsTopLevelLeaves;	// 0x36eeeded
+ (id)asParseRules;	// 0x36eef149
+ (BOOL)frontingBasicTypes;	// 0x36eeeee9
+ (BOOL)notifyOfUnknownTokens;	// 0x36eeef3d
+ (BOOL)parsingLeafNode;	// 0x36eeee41
+ (BOOL)parsingWithSubItems;	// 0x36eeee95
- (void)addEmailAddress:(id)address;	// 0x36eeefb1
- (void)dealloc;	// 0x36eef075
- (id)description;	// 0x36eef0d9
// declared property getter: - (id)emailAddresses;	// 0x36eeef91
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36eef33d
// declared property getter: - (id)primarySMTPAddress;	// 0x36eef3e5
- (void)setPrimarySMTPAddress:(id)address;	// 0x36eef01d
@end
