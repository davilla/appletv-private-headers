/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class SSAuthenticationContext, NSArray;

__attribute__((visibility("hidden")))
@interface ATVCheckOwnershipOperation : ISOperation <ISStoreURLOperationDelegate> {
@private
	SSAuthenticationContext *_authenticationContext;	// 60 = 0x3c
	NSArray *_bundles;	// 64 = 0x40
	NSArray *_ownedBundles;	// 68 = 0x44
	NSArray *_unownedBundles;	// 72 = 0x48
}
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x33bfc609; S=0x33bfc669; 
@property(retain) NSArray *bundles;	// G=0x33bfc8b1; S=0x33bfc8c5; @synthesize=_bundles
@property(retain) NSArray *ownedBundles;	// G=0x33bfc8e9; S=0x33bfc8fd; @synthesize=_ownedBundles
@property(retain) NSArray *unownedBundles;	// G=0x33bfc921; S=0x33bfc935; @synthesize=_unownedBundles
- (id)initWithBundleIDs:(id)bundleIDs;	// 0x33bfc539
- (int)_bagType;	// 0x33bfc959
- (id)_copyQueryStringDictionaryForBundles:(id)bundles;	// 0x33bfcb85
- (id)_copyResponseForBundles:(id)bundles returningError:(id *)error;	// 0x33bfc999
- (BOOL)_loadResponseWithError:(id *)error;	// 0x33bfcbfd
// declared property getter: - (id)authenticationContext;	// 0x33bfc609
// declared property getter: - (id)bundles;	// 0x33bfc8b1
- (void)dealloc;	// 0x33bfc581
- (void)operation:(id)operation didAuthenticateWithDSID:(id)dsid;	// 0x33bfc7f1
// declared property getter: - (id)ownedBundles;	// 0x33bfc8e9
- (void)run;	// 0x33bfc6d1
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x33bfc669
// declared property setter: - (void)setBundles:(id)bundles;	// 0x33bfc8c5
// declared property setter: - (void)setOwnedBundles:(id)bundles;	// 0x33bfc8fd
// declared property setter: - (void)setUnownedBundles:(id)bundles;	// 0x33bfc935
// declared property getter: - (id)unownedBundles;	// 0x33bfc921
@end
