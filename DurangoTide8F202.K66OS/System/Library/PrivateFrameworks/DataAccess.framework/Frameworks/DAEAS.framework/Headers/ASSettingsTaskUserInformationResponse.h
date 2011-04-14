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
@property(retain, nonatomic) ASSettingsTaskUserInformationGetResponse *getResponse;	// G=0x32edc501; S=0x32edd181; @synthesize=_getResponse
@property(retain, nonatomic) NSNumber *status;	// G=0x32edc511; S=0x32edd159; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x32edca41
+ (BOOL)frontingBasicTypes;	// 0x32edc969
+ (BOOL)notifyOfUnknownTokens;	// 0x32edc921
+ (BOOL)parsingLeafNode;	// 0x32edc9f9
+ (BOOL)parsingWithSubItems;	// 0x32edc9b1
- (id)asParseRules;	// 0x32edc7e9
- (void)dealloc;	// 0x32edcd71
- (id)description;	// 0x32edce95
// declared property getter: - (id)getResponse;	// 0x32edc501
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32edd011
// declared property setter: - (void)setGetResponse:(id)response;	// 0x32edd181
// declared property setter: - (void)setStatus:(id)status;	// 0x32edd159
// declared property getter: - (id)status;	// 0x32edc511
@end
