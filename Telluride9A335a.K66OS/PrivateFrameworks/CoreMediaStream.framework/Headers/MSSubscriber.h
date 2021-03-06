/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSSubscriber.h"
#import "MSSubscribeStreamsProtocolDelegate.h"
#import "MSSubscribeStorageProtocolDelegate.h"
#import "MSReauthorizationProtocolDelegate.h"
#import "MSCupidStateMachine.h"

@class NSMutableArray, NSMutableDictionary, MSMediaStreamDaemon, MSReauthorizationProtocol, MSSubscribeStreamsProtocol, MSObjectQueue;
@protocol MSSubscribeStorageProtocol, MSSubscriberDelegate;

@protocol MSSubscriber
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;
- (void)abort;
- (void)checkForNewAssetCollections;
- (void)checkForOutstandingActivities;
// declared property getter: - (id)delegate;
- (id)ownSubscribedStream;
- (void)resetSync;
- (void)retrieveAssets:(id)assets;
// declared property setter: - (void)setDelegate:(id)delegate;
- (void)stop;
- (id)subscribedStreams;
@end

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {
@private
	id<MSSubscriberDelegate> _delegate;	// 24 = 0x18
	MSMediaStreamDaemon *_daemon;	// 28 = 0x1c
	BOOL _checkOneMoreTime;	// 32 = 0x20
	int _state;	// 36 = 0x24
	MSSubscribeStreamsProtocol *_protocol;	// 40 = 0x28
	NSMutableDictionary *_newSubscriptionsByStreamID;	// 44 = 0x2c
	int _retrievalState;	// 48 = 0x30
	id<MSSubscribeStorageProtocol> _storageProtocol;	// 52 = 0x34
	MSReauthorizationProtocol *_reauthProtocol;	// 56 = 0x38
	MSObjectQueue *_retrievalQueue;	// 60 = 0x3c
	NSMutableArray *_assetsBeingRetrieved;	// 64 = 0x40
	long long _targetRetrievalByteCount;	// 68 = 0x44
	int _retrievalBatchSize;	// 76 = 0x4c
	int _maxErrorCount;	// 80 = 0x50
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x322c07ad; S=0x322c07bd; @synthesize=_daemon
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;	// G=0x322c078d; S=0x322c079d; @synthesize=_delegate
@property(assign, nonatomic) int retrievalBatchSize;	// G=0x322c07f9; S=0x322c0809; @synthesize=_retrievalBatchSize
@property(assign, nonatomic) long long targetRetrievalByteCount;	// G=0x322c07cd; S=0x322c07e5; @synthesize=_targetRetrievalByteCount
+ (id)_clearInstantiatedSubscribersByPersonID;	// 0x322bcffd
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x322bd075
+ (id)existingSubscriberForPersonID:(id)personID;	// 0x322bcfe1
+ (void)forgetPersonID:(id)anId;	// 0x322bd025
+ (BOOL)isInRetryState;	// 0x322bd499
+ (id)nextActivityDate;	// 0x322bd2c9
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x322bd3b5
+ (id)personIDsWithOutstandingActivities;	// 0x322bd3d5
+ (void)stopAllActivities;	// 0x322bd3f1
+ (id)subscriberForPersonID:(id)personID;	// 0x322bcf09
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x322bd699
- (void)_abort;	// 0x322bf5ad
- (void)_checkForNewAssetCollections;	// 0x322be0d5
- (void)_didFinishRetrievingSubscriptionUpdate;	// 0x322be279
- (void)_didReceiveAuthenticationError:(id)error;	// 0x322bea6d
- (void)_finishedRetrievingAsset:(id)asset;	// 0x322bf945
- (void)_forget;	// 0x322bf8a5
- (BOOL)_hasOutstandingPoll;	// 0x322bdcd9
- (BOOL)_isAllowedToDownload;	// 0x322bdf25
- (BOOL)_isInRetryState;	// 0x322bf911
- (void)_reauthorizeAssets;	// 0x322bf345
- (void)_refreshServerSideConfigurationParameters;	// 0x322bda05
- (void)_retrieveAssets;	// 0x322bf03d
- (void)_retrieveNextAssets;	// 0x322bf185
- (void)_serverSideConfigurationDidChange:(id)_serverSideConfiguration;	// 0x322bdaf5
- (void)_setHasOutstandingPoll:(BOOL)poll;	// 0x322bdd19
- (void)_setSubscriptionsByStreamID:(id)anId;	// 0x322bde69
- (void)_stopOutSubscriberState:(int *)state outRetrievalState:(int *)state2;	// 0x322bf43d
- (id)_subscriptionsByStreamID;	// 0x322bdddd
- (void)_updateMasterManifest;	// 0x322bdc15
- (void)abort;	// 0x322bf895
- (void)checkForNewAssetCollections;	// 0x322bdfe5
- (void)checkForOutstandingActivities;	// 0x322befc1
// declared property getter: - (id)daemon;	// 0x322c07ad
- (void)deactivate;	// 0x322bd885
- (void)dealloc;	// 0x322bd9c5
// declared property getter: - (id)delegate;	// 0x322c078d
- (id)ownSubscribedStream;	// 0x322bd655
- (void)reauthorizationProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x322c032d
- (void)reauthorizationProtocol:(id)protocol reauthorizedAssets:(id)assets rejectedAssets:(id)assets3 error:(id)error;	// 0x322c0341
- (void)resetSync;	// 0x322bdeb5
// declared property getter: - (int)retrievalBatchSize;	// 0x322c07f9
- (void)retrieveAssets:(id)assets;	// 0x322bec11
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x322c07bd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x322c079d
// declared property setter: - (void)setRetrievalBatchSize:(int)size;	// 0x322c0809
// declared property setter: - (void)setTargetRetrievalByteCount:(long long)count;	// 0x322c07e5
- (void)stop;	// 0x322bf599
- (void)subscribeStorageProtocol:(id)protocol didFinishRetrievingAsset:(id)asset error:(id)error;	// 0x322bfa59
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)subscribeStorageProtocol;	// 0x322bfb75
- (void)subscribeStreamsProtocol:(id)protocol didFindDisappearedSubscriptionForPersonID:(id)personID;	// 0x322be7d1
- (void)subscribeStreamsProtocol:(id)protocol didFindShareState:(id)state;	// 0x322bebad
- (void)subscribeStreamsProtocol:(id)protocol didFinishError:(id)error;	// 0x322be88d
- (void)subscribeStreamsProtocol:(id)protocol didFinishReceivingUpdatesForPersonID:(id)personID ctag:(id)ctag;	// 0x322be619
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAssetCollections:(id)collections forPersonID:(id)personID;	// 0x322be565
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x322beb39
- (void)subscribeStreamsProtocol:(id)protocol difFindTemporarilyUnavailableSubscriptionForPersonID:(id)personID;	// 0x322beb4d
- (void)subscribeStreamsProtocol:(id)protocol willReceiveUpdatesForPersonID:(id)personID wasReset:(BOOL)reset metadata:(id)metadata;	// 0x322be391
- (id)subscribedStreams;	// 0x322bd559
// declared property getter: - (long long)targetRetrievalByteCount;	// 0x322c07cd
@end

