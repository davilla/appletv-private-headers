/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class SSURLBagContext;

__attribute__((visibility("hidden")))
@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
@private
	SSURLBagContext *_context;	// 60 = 0x3c
}
@property(readonly, assign) SSURLBagContext *context;	// G=0x3681ce95; @synthesize=_context
- (id)init;	// 0x3681c10d
- (id)initWithBagContext:(id)bagContext;	// 0x3681c181
- (void)_addHeadersToRequestProperties:(id)requestProperties;	// 0x3681c849
- (id)_copyBootstrapURLs;	// 0x3681c965
- (id)_copyProductionBootstrapURLs;	// 0x3681c9b1
- (id)_copySandboxBootstrapURLs;	// 0x3681cb11
- (void)_loadConfigurationFromURLBag:(id)urlbag;	// 0x3681c479
- (void)_loadURLBagFromURL:(id)url;	// 0x3681cc41
// declared property getter: - (id)context;	// 0x3681ce95
- (void)dealloc;	// 0x3681c1d5
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x3681c47d
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;	// 0x3681c755
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x3681c791
- (void)run;	// 0x3681c229
- (id)uniqueKey;	// 0x3681c429
@end

