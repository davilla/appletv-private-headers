/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"


@interface WebCoreMediaPlayerNotificationHelper : NSObject {
	MediaPlayerPrivateIOS *_client;	// 4 = 0x4
	BOOL _deferredPropertiesScheduled;	// 8 = 0x8
}
- (id)initWithClient:(MediaPlayerPrivateIOS *)client;	// 0x30b8a901
- (void)cancelPendingRequests;	// 0x30badf35
- (void)delayNotification:(int)notification;	// 0x310ceba1
- (void)deliverNotification:(id)notification;	// 0x310cec01
- (void)disconnect;	// 0x30bb2d19
- (void)scheduleDeferredPropertiesWithOptionalDelay:(id)optionalDelay;	// 0x30bb27d1
- (void)schedulePrepareToPlayWithOptionalDelay:(id)optionalDelay;	// 0x310cec79
@end

