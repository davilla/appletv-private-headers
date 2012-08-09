/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"
#import "BBNotificationBehaviorUtilitiesClientProtocol.h"


@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol, XPCProxyTarget> {
	id _serverProxy;	// 4 = 0x4
	id _filteringStateChangeHandler;	// 8 = 0x8
	id _activeBehaviorOverridesChangeHandler;	// 12 = 0xc
}
- (id)init;	// 0x300c5675
- (void)activeBehaviorOverrideTypesChanged:(unsigned)changed;	// 0x300c5ae9
- (void)dealloc;	// 0x300c57ed
- (void)notificationPresentationFilteringChangedToEnabled:(BOOL)enabled;	// 0x300c5851
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x300c586d
- (void)setActiveBehaviorOverridesChangeHandler:(id)handler;	// 0x300c5921
- (void)setFilteringStateChangeHandler:(id)handler;	// 0x300c58b9
- (void)shouldPresentNotificationFromSender:(id)sender withHandler:(id)handler;	// 0x300c5989
@end
