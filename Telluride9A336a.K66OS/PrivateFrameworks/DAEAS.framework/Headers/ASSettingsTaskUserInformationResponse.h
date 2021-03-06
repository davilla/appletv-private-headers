/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, ASSettingsTaskUserInformationGetResponse;

@interface ASSettingsTaskUserInformationResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	ASSettingsTaskUserInformationGetResponse *_getResponse;	// 44 = 0x2c
}
@property(retain, nonatomic) ASSettingsTaskUserInformationGetResponse *getResponse;	// G=0x31556765; S=0x31556775; @synthesize=_getResponse
@property(retain, nonatomic) NSNumber *status;	// G=0x31556731; S=0x31556741; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x31556289
+ (BOOL)frontingBasicTypes;	// 0x31556385
+ (BOOL)notifyOfUnknownTokens;	// 0x315563d9
+ (BOOL)parsingLeafNode;	// 0x315562dd
+ (BOOL)parsingWithSubItems;	// 0x31556331
- (id)asParseRules;	// 0x31556511
- (void)dealloc;	// 0x3155642d
- (id)description;	// 0x3155648d
// declared property getter: - (id)getResponse;	// 0x31556765
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x31556685
// declared property setter: - (void)setGetResponse:(id)response;	// 0x31556775
// declared property setter: - (void)setStatus:(id)status;	// 0x31556741
// declared property getter: - (id)status;	// 0x31556731
@end

