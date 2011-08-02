/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, SSRequest, NSSet, NSMutableArray;

@interface SSDevice : NSObject {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	NSMutableArray *_loadStoreFrontHandlers;	// 8 = 0x8
	SSRequest *_loadStoreFrontRequest;	// 12 = 0xc
	NSString *_localStoreFrontIdentifier;	// 16 = 0x10
	BOOL _localStoreFrontIsTransient;	// 20 = 0x14
	NSMutableArray *_simpleRequests;	// 24 = 0x18
	NSString *_synchedStoreFrontIdentifier;	// 28 = 0x1c
}
@property(readonly, assign) NSSet *automaticDownloadKinds;	// G=0x327342e5; 
@property(readonly, assign) NSString *storeFrontIdentifier;	// G=0x32734c85; 
@property(readonly, assign, getter=isStoreFrontIdentifierTransient) BOOL storeFrontIdentifierTransient;	// G=0x32734c1d; 
@property(readonly, assign) NSString *synchedStoreFrontIdentifier;	// G=0x32734b89; 
+ (id)copyCachedAvailableItemKinds;	// 0x32735081
+ (id)currentDevice;	// 0x32735051
+ (BOOL)promptNeedsDisplay:(id)display;	// 0x32735125
+ (BOOL)setCachedAvailableItemKinds:(id)kinds;	// 0x327351ed
+ (void)setLastPromptAttemptDate:(id)date forPromptWithIdentifier:(id)identifier;	// 0x32735301
+ (void)setPromptWithIdentifier:(id)identifier needsDisplay:(BOOL)display;	// 0x32735259
- (id)init;	// 0x32733d01
- (void)_cleanupSimpleRequest:(id)request;	// 0x32733821
- (void)_finishRequestWithError:(id)error;	// 0x32734a7d
- (void)_postStoreFrontDidChangeNotification;	// 0x32734fd9
- (void)_reloadAfterStoreFrontChange;	// 0x327349fd
- (void)_reloadStoreFrontIdentifier;	// 0x327335dd
- (void)_setLocalStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;	// 0x32734381
- (BOOL)_setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;	// 0x32734981
- (void)_trackSimpleRequest:(id)request;	// 0x32733581
- (void)_updateAutomaticDownloadKinds:(id)kinds withValue:(id)value completionBlock:(id)block;	// 0x32733415
// declared property getter: - (id)automaticDownloadKinds;	// 0x327342e5
- (id)copyStoreFrontRequestHeaders;	// 0x32733c75
- (void)dealloc;	// 0x32733db1
- (void)getAvailableItemKindsWithBlock:(id)block;	// 0x32734471
// declared property getter: - (BOOL)isStoreFrontIdentifierTransient;	// 0x32734c1d
- (void)loadStoreFrontWithCompletionHandler:(id)completionHandler;	// 0x32734d19
- (void)minusAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;	// 0x32734275
- (void)reloadStoreFrontIdentifier;	// 0x327339fd
- (void)request:(id)request didFailWithError:(id)error;	// 0x32734fa9
- (void)requestDidFinish:(id)request;	// 0x32733989
- (void)resetStoreFrontForSignOut;	// 0x327338d9
- (void)setAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;	// 0x32734221
- (void)setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;	// 0x32733f7d
- (void)setStoreFrontIdentifierWithInfo:(id)info;	// 0x3273386d
- (void)setStoreFrontWithResponseHeaders:(id)responseHeaders;	// 0x32733abd
- (void)showPromptWithIdentifier:(id)identifier completionHandler:(id)handler;	// 0x32734df9
// declared property getter: - (id)storeFrontIdentifier;	// 0x32734c85
// declared property getter: - (id)synchedStoreFrontIdentifier;	// 0x32734b89
- (void)unionAutomaticDownloadKinds:(id)kinds withCompletionBlock:(id)completionBlock;	// 0x327341b1
@end

