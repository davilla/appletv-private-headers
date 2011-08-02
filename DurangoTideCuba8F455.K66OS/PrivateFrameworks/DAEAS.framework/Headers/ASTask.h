/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DATask.h"
#import <NSObject.h> // Unknown library
#import "DAEAS-Structs.h"

@class NSString, ASItem, NSError, ASTaskManager, ASParseContext, NSHTTPURLResponse, NSURLConnection, NSMutableSet, NSURLRequest, NSTimer, NSDate, DATaskManager;

@interface ASTask : NSObject <DATask> {
	BOOL _haveSwitchedCodePage;	// 4 = 0x4
	BOOL _haveParsedCommand;	// 5 = 0x5
	ASItem *_currentlyParsingItem;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	NSHTTPURLResponse *_response;	// 16 = 0x10
	ASParseContext *_parseContext;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
@private
	NSURLRequest *_request;	// 28 = 0x1c
	NSMutableSet *_attemptedIdentities;	// 32 = 0x20
	BOOL _isFakingIt;	// 36 = 0x24
	BOOL _didSendRequest;	// 37 = 0x25
	BOOL _didFailWithError;	// 38 = 0x26
	BOOL _didCancel;	// 39 = 0x27
	BOOL _didReceiveResponse;	// 40 = 0x28
	BOOL _didReceiveData;	// 41 = 0x29
	BOOL _didFinishLoading;	// 42 = 0x2a
	BOOL _didReset;	// 43 = 0x2b
	BOOL _finished;	// 44 = 0x2c
	BOOL _inDelegateCallout;	// 45 = 0x2d
	BOOL _finishedByTimeoutEnforcer;	// 46 = 0x2e
	int _interfaceBinding;	// 48 = 0x30
	void *_context;	// 52 = 0x34
	BOOL _isExclusive;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 57 = 0x39
	BOOL _askedToCancelWhileModal;	// 58 = 0x3a
	BOOL _haveCheckedForTopLevelError;	// 59 = 0x3b
	BOOL _handledTopLevelError;	// 60 = 0x3c
	int _taskID;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	int _modalReason;	// 72 = 0x48
	int _modalPushCount;	// 76 = 0x4c
	NSString *_lastKnownPolicyKey;	// 80 = 0x50
	NSError *_passwordNotificationError;	// 84 = 0x54
	NSString *_lastKnownPassword;	// 88 = 0x58
	NSDate *_dateConnectionWentOut;	// 92 = 0x5c
	NSTimer *_timeoutEnforcer;	// 96 = 0x60
@protected
	BOOL _retry;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL askedToCancelWhileModal;	// G=0x34388b5d; S=0x34388b6d; @synthesize=_askedToCancelWhileModal
@property(assign, nonatomic) void *context;	// G=0x34388bcd; S=0x34388bdd; @synthesize=_context
@property(retain, nonatomic) ASItem *currentlyParsingItem;	// G=0x34388b7d; S=0x3438e069; @synthesize=_currentlyParsingItem
@property(assign, nonatomic) id delegate;	// G=0x34388bed; S=0x34388bfd; @synthesize=_delegate
@property(assign, nonatomic) int interfaceBinding;	// G=0x34388bad; S=0x34388bbd; @synthesize=_interfaceBinding
@property(assign, nonatomic) BOOL isExclusive;	// G=0x34388b8d; S=0x34388b9d; @synthesize=_isExclusive
@property(retain, nonatomic) NSString *lastKnownPassword;	// G=0x34388b4d; S=0x3438e091; @synthesize=_lastKnownPassword
@property(readonly, assign) int taskID;	// G=0x34388a81; converted property
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x34388c0d; S=0x34388c6d; @synthesize=_taskManager
@property(retain, nonatomic) NSTimer *timeoutEnforcer;	// G=0x34388b3d; S=0x34388c1d; @synthesize=_timeoutEnforcer
+ (void)_restoreDefaultTaskTimeout;	// 0x34388ac1
+ (void)_setDefaultTaskTimeout:(double)timeout;	// 0x34388aa5
- (id)init;	// 0x3438bca9
- (id)_HTTPMethodForRequest:(id)request;	// 0x343894e1
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x3438dd91
- (void)_continuePerformTask;	// 0x3438d3ad
- (id)_createBodyData;	// 0x343890e5
- (id)_easVersion;	// 0x34389439
- (void)_failImmediately;	// 0x3438b3e5
- (void)_handleBadPasswordResponse;	// 0x34388eb5
- (BOOL)_handleCertificateError:(id)error;	// 0x3438ad3d
- (BOOL)_handleRedirect:(id)redirect;	// 0x3438aab9
- (void)_initFakeParseContext;	// 0x34388e45
- (BOOL)_isWBXML;	// 0x343893ed
- (id)_policyKey;	// 0x34389419
- (void)_popModal;	// 0x34389055
- (void)_pushModalForReason:(int)reason;	// 0x3438908d
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x34388aa1
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x34388a9d
- (void)_timeoutEnforcerFired:(id)fired;	// 0x3438b479
- (id)_url;	// 0x34389459
// declared property getter: - (BOOL)askedToCancelWhileModal;	// 0x34388b5d
- (BOOL)attemptRetryWithStatus:(int)status error:(id)error;	// 0x3438dcdd
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x3438adfd
- (BOOL)checkForErrorInContext:(id)context;	// 0x3438b601
- (id)command;	// 0x3438bdbd
- (int)commandCode;	// 0x3438ba89
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x3438a051
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3438bdd5
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x34389ec5
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3438a121
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x343898e5
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x3438aa29
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x3438a0d5
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x3438ce01
- (int)connectionActionForResponse:(id)response;	// 0x3438b52d
- (void)connectionDidFinishLoading:(id)connection;	// 0x34389b71
- (id)contentType;	// 0x34388b05
// declared property getter: - (void *)context;	// 0x34388bcd
// declared property getter: - (id)currentlyParsingItem;	// 0x34388b7d
- (void)dealloc;	// 0x3438bac5
// declared property getter: - (id)delegate;	// 0x34388bed
- (id)description;	// 0x3438952d
- (void)didCallOutToDelegate;	// 0x3438b14d
- (void)didProcessContext:(id)context;	// 0x343891f9
- (BOOL)expectsWBXML;	// 0x34388ae5
- (void)finishWithError:(id)error;	// 0x3438af25
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x3438936d
- (void)handleTopLevelErrorStatus:(id)status;	// 0x343896d9
- (id)httpMethod;	// 0x34388a91
// declared property getter: - (int)interfaceBinding;	// 0x34388bad
// declared property getter: - (BOOL)isExclusive;	// 0x34388b8d
- (BOOL)isInCallOutToDelegate;	// 0x34388b21
// declared property getter: - (id)lastKnownPassword;	// 0x34388b4d
- (void)loadRequest:(id)request;	// 0x3438c429
- (int)numDownloadedElements;	// 0x34388b39
- (id)parameterData;	// 0x34388ae9
- (double)percentComplete;	// 0x34388af5
- (void)performTask;	// 0x3438b32d
- (id)powerAssertionGroupIdentifier;	// 0x343891c9
- (BOOL)processContext:(id)context;	// 0x34388af1
- (void)reportStatusWithError:(id)error;	// 0x3438dfe5
- (id)requestBody;	// 0x3438ba4d
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x34388aed
- (BOOL)requiresEASVersionInformaton;	// 0x34388b19
- (void)reset;	// 0x34388d2d
- (id)responseContentType;	// 0x343894f5
// declared property setter: - (void)setAskedToCancelWhileModal:(BOOL)cancelWhileModal;	// 0x34388b6d
// declared property setter: - (void)setContext:(void *)context;	// 0x34388bdd
// declared property setter: - (void)setCurrentlyParsingItem:(id)item;	// 0x3438e069
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34388bfd
// declared property setter: - (void)setInterfaceBinding:(int)binding;	// 0x34388bbd
// declared property setter: - (void)setIsExclusive:(BOOL)exclusive;	// 0x34388b9d
// declared property setter: - (void)setLastKnownPassword:(id)password;	// 0x3438e091
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x34388c6d
// declared property setter: - (void)setTimeoutEnforcer:(id)enforcer;	// 0x34388c1d
- (BOOL)shouldHandlePasswordErrors;	// 0x34388b31
- (BOOL)shouldHoldPowerAssertion;	// 0x34388b1d
- (BOOL)shouldLogIncomingData;	// 0x34388b15
- (BOOL)shouldReportTimeInNetwork;	// 0x34388b35
- (void)startModal;	// 0x3438c21d
// converted property getter: - (int)taskID;	// 0x34388a81
// declared property getter: - (id)taskManager;	// 0x34388c0d
- (void)taskManagerDidFailToUpdatePolicyKey;	// 0x34388f19
- (void)taskManagerDidFindEASVersion;	// 0x34388fd1
- (void)taskManagerDidUpdatePolicyKey;	// 0x34388f4d
- (int)taskStatusForError:(id)error;	// 0x34389211
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x34388b01
- (void)tearDownResources;	// 0x34389109
// declared property getter: - (id)timeoutEnforcer;	// 0x34388b3d
- (double)timeoutInterval;	// 0x3438948d
- (void)willCallOutToDelegate;	// 0x3438b1ad
- (void)willProcessContext;	// 0x34388b11
@end

