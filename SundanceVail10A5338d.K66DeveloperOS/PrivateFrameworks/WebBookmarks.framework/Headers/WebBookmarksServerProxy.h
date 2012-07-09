/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"

@class XPCProxy;
@protocol WebBookmarksServerProtocol;

@interface WebBookmarksServerProxy : NSObject <XPCProxyTarget> {
	XPCProxy<WebBookmarksServerProtocol> *_serverProxy;	// 4 = 0x4
}
- (id)init;	// 0x32305d8d
- (void)addReadingListItems:(id)items;	// 0x32305fad
- (void)clearAllCloudTabDevices;	// 0x32305fed
- (void)clearTabsForCurrentDevice;	// 0x3230600d
- (void)dealloc;	// 0x32305f11
- (void)didToggleCloudTabs:(BOOL)tabs;	// 0x3230602d
- (void)didTogglePrivateBrowsing:(BOOL)browsing;	// 0x32306079
- (void)invalidate;	// 0x32305f71
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x323060c5
- (void)startReadingListFetcher;	// 0x32305fcd
@end
