/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSDictionary, NSNumber, NSString;

@interface ASChangedCollectionLeaf : ASItem <NSCoding> {
	int _changeType;	// 40 = 0x28
	NSString *_serverID;	// 44 = 0x2c
	NSString *_clientID;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	BOOL _isResponse;	// 56 = 0x38
	BOOL _validateOpeningTokens;	// 57 = 0x39
	NSDictionary *_applicationData;	// 60 = 0x3c
}
@property(retain) NSDictionary *applicationData;	// G=0x318760f9; S=0x3187610d; @synthesize=_applicationData
@property(assign) int changeType;	// G=0x31876031; S=0x31876041; @synthesize=_changeType
@property(copy) NSString *clientID;	// G=0x31876089; S=0x3187609d; @synthesize=_clientID
@property(readonly, assign) BOOL isResponse;	// G=0x31875a11; converted property
@property(retain) NSString *serverID;	// G=0x31876051; S=0x31876065; @synthesize=_serverID
@property(copy) NSNumber *status;	// G=0x318760c1; S=0x318760d5; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x318752a9
+ (BOOL)frontingBasicTypes;	// 0x318753a5
+ (BOOL)notifyOfUnknownTokens;	// 0x318753f9
+ (BOOL)parsingLeafNode;	// 0x318752fd
+ (BOOL)parsingWithSubItems;	// 0x31875351
- (id)init;	// 0x3187544d
- (id)initWithCoder:(id)coder;	// 0x31875ca5
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x3187589d
// declared property getter: - (id)applicationData;	// 0x318760f9
- (id)asParseRules;	// 0x31875a21
// declared property getter: - (int)changeType;	// 0x31876031
// declared property getter: - (id)clientID;	// 0x31876089
- (int)dataclass;	// 0x3187592d
- (void)dealloc;	// 0x31875979
- (void)encodeWithCoder:(id)coder;	// 0x31875e95
// converted property getter: - (BOOL)isResponse;	// 0x31875a11
- (void)loadClientIDs;	// 0x318758e5
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3187548d
// declared property getter: - (id)serverID;	// 0x31876051
// declared property setter: - (void)setApplicationData:(id)data;	// 0x3187610d
// declared property setter: - (void)setChangeType:(int)type;	// 0x31876041
// declared property setter: - (void)setClientID:(id)anId;	// 0x3187609d
// declared property setter: - (void)setServerID:(id)anId;	// 0x31876065
// declared property setter: - (void)setStatus:(id)status;	// 0x318760d5
- (void)setValidateOpeningTokens:(BOOL)tokens;	// 0x31875a01
// declared property getter: - (id)status;	// 0x318760c1
@end

