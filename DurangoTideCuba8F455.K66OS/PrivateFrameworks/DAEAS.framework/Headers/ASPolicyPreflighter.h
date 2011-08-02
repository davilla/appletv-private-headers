/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASAccount, ASTaskManager, ASPolicy, NSString;
@protocol ASPolicyPreflighterDelegate;

@interface ASPolicyPreflighter : NSObject {
	ASAccount *_account;	// 4 = 0x4
	NSString *_originalKey;	// 8 = 0x8
	NSString *_newKey;	// 12 = 0xc
	id<ASPolicyPreflighterDelegate> _delegate;	// 16 = 0x10
	ASPolicy *_policy;	// 20 = 0x14
	ASPolicy *_acknowledgedPolicy;	// 24 = 0x18
	ASTaskManager *_taskManager;	// 28 = 0x1c
	id _contextInfo;	// 32 = 0x20
	BOOL _invalidated;	// 36 = 0x24
}
@property(readonly, retain) ASAccount *account;	// G=0x34383e09; converted property
@property(retain) id contextInfo;	// G=0x34383df9; S=0x34384145; converted property
@property(assign) id delegate;	// G=0x34383de9; S=0x34383dd9; converted property
- (id)initWithAccount:(id)account policyKey:(id)key;	// 0x343841b9
- (id)_acknowledgedPolicy;	// 0x34383e19
- (void)_invalidate;	// 0x34384115
- (id)_originalKey;	// 0x34383e29
- (void)_setAcknowledgedPolicy:(id)policy;	// 0x3438409d
- (void)_setPolicy:(id)policy;	// 0x343840d9
// converted property getter: - (id)account;	// 0x34383e09
- (void)acknowledgeIntentionToRemoteWipe;	// 0x34383e71
- (void)acknowledgePolicyCompliance;	// 0x34383f21
- (void)cancelPendingPreflightRequest;	// 0x34383e41
// converted property getter: - (id)contextInfo;	// 0x34383df9
- (void)dealloc;	// 0x34384265
// converted property getter: - (id)delegate;	// 0x34383de9
- (void)invalidate;	// 0x3438417d
- (void)provisionTask:(id)task failedWithError:(id)error;	// 0x34384079
- (void)provisionTask:(id)task wipeRequested:(BOOL)requested policies:(id)policies status:(int)status;	// 0x34384381
// converted property setter: - (void)setContextInfo:(id)info;	// 0x34384145
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x34383dd9
- (void)startPreflight;	// 0x34383fe1
@end

