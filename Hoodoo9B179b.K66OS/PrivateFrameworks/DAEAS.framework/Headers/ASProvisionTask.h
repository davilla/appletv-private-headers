/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSString, ASPolicy;

@interface ASProvisionTask : ASTask {
	int _type;	// 104 = 0x68
	ASPolicy *_policy;	// 108 = 0x6c
	NSString *_key;	// 112 = 0x70
}
@property(readonly, assign) int type;	// G=0x31e01ad9; converted property
- (id)initWithOriginalKeyForPolicyRequest:(id)policyRequest;	// 0x31e01a11
- (id)initWithPolicyAcknowledgement:(id)policyAcknowledgement withKey:(id)key;	// 0x31e01a31
- (id)initWithRemoteWipeAcknowledgement:(id)remoteWipeAcknowledgement withKey:(id)key;	// 0x31e01a55
- (id)_initWithType:(int)type policy:(id)policy key:(id)key;	// 0x31e01981
- (id)_policyID;	// 0x31e01ae9
- (id)_provisioningType;	// 0x31e01b21
- (int)commandCode;	// 0x31e01b1d
- (void)dealloc;	// 0x31e01a79
- (void)finishWithError:(id)error;	// 0x31e021e5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x31e01d69
- (BOOL)processContext:(id)context;	// 0x31e01d7d
- (id)requestBody;	// 0x31e01b79
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31e01d49
// converted property getter: - (int)type;	// 0x31e01ad9
@end

