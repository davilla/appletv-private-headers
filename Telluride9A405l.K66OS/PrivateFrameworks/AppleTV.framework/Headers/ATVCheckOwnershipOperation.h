/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class NSArray, SSAuthenticationContext;

__attribute__((visibility("hidden")))
@interface ATVCheckOwnershipOperation : ISOperation <ISStoreURLOperationDelegate> {
@private
	SSAuthenticationContext *_authenticationContext;	// 60 = 0x3c
	NSArray *_bundles;	// 64 = 0x40
	NSArray *_ownedBundles;	// 68 = 0x44
	NSArray *_unownedBundles;	// 72 = 0x48
}
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x35f6e885; S=0x35f6e8e5; 
@property(retain) NSArray *bundles;	// G=0x35f6eb2d; S=0x35f6eb41; @synthesize=_bundles
@property(retain) NSArray *ownedBundles;	// G=0x35f6eb65; S=0x35f6eb79; @synthesize=_ownedBundles
@property(retain) NSArray *unownedBundles;	// G=0x35f6eb9d; S=0x35f6ebb1; @synthesize=_unownedBundles
- (id)initWithBundleIDs:(id)bundleIDs;	// 0x35f6e7b5
- (int)_bagType;	// 0x35f6ebd5
- (id)_copyQueryStringDictionaryForBundles:(id)bundles;	// 0x35f6ee01
- (id)_copyResponseForBundles:(id)bundles returningError:(id *)error;	// 0x35f6ec15
- (BOOL)_loadResponseWithError:(id *)error;	// 0x35f6ee79
// declared property getter: - (id)authenticationContext;	// 0x35f6e885
// declared property getter: - (id)bundles;	// 0x35f6eb2d
- (void)dealloc;	// 0x35f6e7fd
- (void)operation:(id)operation didAuthenticateWithDSID:(id)dsid;	// 0x35f6ea6d
// declared property getter: - (id)ownedBundles;	// 0x35f6eb65
- (void)run;	// 0x35f6e94d
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x35f6e8e5
// declared property setter: - (void)setBundles:(id)bundles;	// 0x35f6eb41
// declared property setter: - (void)setOwnedBundles:(id)bundles;	// 0x35f6eb79
// declared property setter: - (void)setUnownedBundles:(id)bundles;	// 0x35f6ebb1
// declared property getter: - (id)unownedBundles;	// 0x35f6eb9d
@end

