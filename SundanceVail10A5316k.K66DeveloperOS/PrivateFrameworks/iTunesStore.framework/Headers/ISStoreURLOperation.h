/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISURLOperation.h"

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation {
@private
	NSNumber *_authenticatedDSID;	// 100 = 0x64
	BOOL _canSendGUIDParameter;	// 104 = 0x68
	BOOL _needsAuthentication;	// 105 = 0x69
	BOOL _needsURLBag;	// 106 = 0x6a
	BOOL _shouldSendXTokenHeader;	// 107 = 0x6b
	BOOL _urlKnownToBeTrusted;	// 108 = 0x6c
	BOOL _useUserSpecificURLBag;	// 109 = 0x6d
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x3352a775; S=0x3352a789; @synthesize=_authenticatedDSID
@property(assign) BOOL canSendGUIDParameter;	// G=0x33528c35; S=0x33528c71; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
@property(assign) BOOL needsAuthentication;	// G=0x3352a799; S=0x3352a7b1; @synthesize=_needsAuthentication
@property(assign) BOOL needsURLBag;	// G=0x3352a7c9; S=0x3352a7e1; @synthesize=_needsURLBag
@property(assign) BOOL shouldSendXTokenHeader;	// G=0x33528cf1; S=0x33528cb1; 
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x3352a7f9; S=0x3352a811; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL useUserSpecificURLBag;	// G=0x3352a829; S=0x3352a841; @synthesize=_useUserSpecificURLBag
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;	// 0x33529609
+ (id)_restrictionsHeaderValue;	// 0x33529a51
+ (void)addITunesStoreHeadersToRequest:(id)request;	// 0x33528769
+ (void)handleITunesStoreResponseHeaders:(id)headers;	// 0x335287a9
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x33528909
+ (id)pingOperationWithUrl:(id)url;	// 0x33528aa1
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x33528b55
- (id)init;	// 0x335286cd
- (id)_account;	// 0x33529d7d
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x33529de5
- (BOOL)_authenticateReturningError:(id *)error promptAlways:(BOOL)always;	// 0x3352a031
- (BOOL)_canSendTokenToURL:(id)url;	// 0x3352a125
- (id)_copyAuthenticationContext;	// 0x33528d71
- (id)_copyURLBagContext;	// 0x3352a189
- (BOOL)_isErrorTokenError:(id)error;	// 0x3352a2d1
- (void)_runURLOperation;	// 0x3352a335
- (id)_storeFrontIdentifier;	// 0x3352a679
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x3352a711
- (id)authenticatedAccountDSID;	// 0x33528d2d
// declared property getter: - (id)authenticatedDSID;	// 0x3352a775
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x33528c35
- (void)dealloc;	// 0x33528719
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider error:(id *)error;	// 0x33528edd
- (void)handleResponse:(id)response;	// 0x335290bd
// declared property getter: - (BOOL)needsAuthentication;	// 0x3352a799
// declared property getter: - (BOOL)needsURLBag;	// 0x3352a7c9
- (id)newRequestWithURL:(id)url;	// 0x3352912d
- (void)run;	// 0x33529319
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x3352a789
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x33528c71
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x3352a7b1
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x3352a7e1
// declared property setter: - (void)setShouldSendXTokenHeader:(BOOL)sendXTokenHeader;	// 0x33528cb1
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x3352a811
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x3352a841
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x33529519
// declared property getter: - (BOOL)shouldSendXTokenHeader;	// 0x33528cf1
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x3352a7f9
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x3352a829
@end

