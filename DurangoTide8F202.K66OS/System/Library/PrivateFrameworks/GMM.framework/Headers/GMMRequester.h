/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequester.h> // Unknown library

@class NSArray, NSThread;

@interface GMMRequester : PBRequester {
@private
	GMMRequester *_pbRequester;	// 96 = 0x60
	NSArray *_bundleIdentifiers;	// 100 = 0x64
	BOOL _anonymous;	// 104 = 0x68
	NSThread *_thread;	// 108 = 0x6c
	BOOL _automaticallyCancelled;	// 112 = 0x70
	BOOL _disableReplay;	// 113 = 0x71
}
@property(assign, nonatomic, getter=isAnonymous) BOOL anonymous;	// G=0x30a7df3d; S=0x30a7df4d; @synthesize=_anonymous
@property(retain, nonatomic) NSArray *bundleIdentifiers;	// G=0x30a7df2d; S=0x30a7e6a5; @synthesize=_bundleIdentifiers
@property(assign) BOOL disableReplay;	// G=0x30a7df0d; S=0x30a7df1d; @synthesize=_disableReplay
@property(readonly, assign) BOOL wasAutomaticallyCancelled;	// G=0x30a7defd; @synthesize=_automaticallyCancelled
+ (id)_requestHTTPHeaders;	// 0x30a7e855
+ (void)_resetRequestCounts;	// 0x30a7e6cd
+ (void)_setupNetworkConfiguration;	// 0x30a7e7b5
+ (BOOL)allowRequestForType:(int)type;	// 0x30a7e6f1
- (id)initWithRequesterDelegate:(id)requesterDelegate;	// 0x30a7e345
- (void)_applicationDidEnterBackground:(id)_application;	// 0x30a7e02d
- (void)_applicationWillEnterForeground:(id)_application;	// 0x30a7df71
- (void)_handleResumeOnThread;	// 0x30a7df5d
- (void)_handleSuspendOnThread;	// 0x30a7dfd9
- (void)_prepareClientProperties;	// 0x30a7e459
// declared property getter: - (id)bundleIdentifiers;	// 0x30a7df2d
- (void)dealloc;	// 0x30a7e2d5
// declared property getter: - (BOOL)disableReplay;	// 0x30a7df0d
- (void)handleResponse:(id)response forInternalRequest:(id)internalRequest;	// 0x30a7e4a5
// declared property getter: - (BOOL)isAnonymous;	// 0x30a7df3d
- (BOOL)readResponsePreamble:(id)preamble;	// 0x30a7e131
- (id)requestPreamble;	// 0x30a7e929
// declared property setter: - (void)setAnonymous:(BOOL)anonymous;	// 0x30a7df4d
// declared property setter: - (void)setBundleIdentifiers:(id)identifiers;	// 0x30a7e6a5
// declared property setter: - (void)setDisableReplay:(BOOL)replay;	// 0x30a7df1d
- (void)setLoading:(BOOL)loading;	// 0x30a7e269
- (void)start;	// 0x30a7e4e1
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;	// 0x30a7e06d
// declared property getter: - (BOOL)wasAutomaticallyCancelled;	// 0x30a7defd
- (void)writeRequest:(id)request into:(id)into;	// 0x30a7e185
@end
