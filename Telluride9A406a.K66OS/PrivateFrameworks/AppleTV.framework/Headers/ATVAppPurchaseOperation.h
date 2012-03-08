/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ClientIdentity, NSDictionary, SSAuthenticationContext, NSString;

__attribute__((visibility("hidden")))
@interface ATVAppPurchaseOperation : ISOperation {
@private
	SSAuthenticationContext *_authContext;	// 60 = 0x3c
	int _state;	// 64 = 0x40
	BOOL _needsOwnershipCheck;	// 68 = 0x44
	NSDictionary *_microPaymentInfo;	// 72 = 0x48
	NSString *_buyParameters;	// 76 = 0x4c
	ClientIdentity *_clientIdentity;	// 80 = 0x50
}
@property(retain) NSString *buyParameters;	// G=0x331e9d09; S=0x331e9d1d; @synthesize=_buyParameters
@property(retain) ClientIdentity *clientIdentity;	// G=0x331e9d41; S=0x331e9d55; @synthesize=_clientIdentity
@property(retain) NSDictionary *microPaymentInfo;	// G=0x331e9cd1; S=0x331e9ce5; @synthesize=_microPaymentInfo
@property(assign) BOOL needsOwnershipCheck;	// G=0x331e9cb1; S=0x331e9cc1; @synthesize=_needsOwnershipCheck
@property(assign) int state;	// G=0x331e9c91; S=0x331e9ca1; @synthesize=_state
- (id)init;	// 0x331e9819
- (id)_copyCheckOperationForBundle:(id)bundle;	// 0x331e9acd
- (id)_copyPurchaseOperation;	// 0x331e9bfd
// declared property getter: - (id)buyParameters;	// 0x331e9d09
// declared property getter: - (id)clientIdentity;	// 0x331e9d41
- (void)dealloc;	// 0x331e9869
// declared property getter: - (id)microPaymentInfo;	// 0x331e9cd1
// declared property getter: - (BOOL)needsOwnershipCheck;	// 0x331e9cb1
- (void)run;	// 0x331e9895
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x331e9d1d
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x331e9d55
// declared property setter: - (void)setMicroPaymentInfo:(id)info;	// 0x331e9ce5
// declared property setter: - (void)setNeedsOwnershipCheck:(BOOL)check;	// 0x331e9cc1
// declared property setter: - (void)setState:(int)state;	// 0x331e9ca1
// declared property getter: - (int)state;	// 0x331e9c91
@end
