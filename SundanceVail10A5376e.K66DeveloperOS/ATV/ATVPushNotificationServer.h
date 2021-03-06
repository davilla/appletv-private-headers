/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "APSConnectionDelegate.h"

@class APSConnection, NSData, NSDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface ATVPushNotificationServer : BRSingleton <APSConnectionDelegate> {
	APSConnection *_apsConnection;	// 4 = 0x4
	APSConnection *_devAPSConnection;	// 8 = 0x8
	BOOL _tokenDone;	// 12 = 0xc
	BOOL _devTokenDone;	// 13 = 0xd
	NSData *_token;	// 16 = 0x10
	NSData *_devToken;	// 20 = 0x14
	NSLock *_listenersLock;	// 24 = 0x18
	NSDictionary *_listenersForTopics;	// 28 = 0x1c
}
@property(readonly, retain) NSData *devToken;	// G=0x215c41; converted property
+ (void)setSingleton:(id)singleton;	// 0x214f85
+ (id)singleton;	// 0x214f75
+ (void)start;	// 0x214f95
+ (void)stop;	// 0x214fc9
- (id)init;	// 0x215089
- (id)_aggregatedTopics;	// 0x215e9d
- (void)_registerDeviceWithDevToken:(id)devToken;	// 0x215c61
- (void)_registerDeviceWithToken:(id)token;	// 0x215cb5
- (void)_removeAPSDKeepAliveFile;	// 0x215e11
- (id)_tokenAsString;	// 0x215f6d
- (void)_touchAPSDKeepAliveFile;	// 0x215d79
- (void)_updateAggregateTopics;	// 0x215f05
- (void)addListener:(id)listener forTopic:(id)topic;	// 0x215569
- (void)connection:(id)connection didChangeConnectedStatus:(BOOL)status;	// 0x215519
- (void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x215441
- (void)connection:(id)connection didReceivePublicToken:(id)token;	// 0x215411
- (void)connectionDidReconnect:(id)connection;	// 0x21551d
- (void)dealloc;	// 0x214ffd
// converted property getter: - (id)devToken;	// 0x215c41
- (BOOL)isConnected;	// 0x215521
- (BOOL)isDevConnected;	// 0x215545
- (id)publicToken;	// 0x215c51
- (void)removeListener:(id)listener;	// 0x2159d1
- (void)removeListener:(id)listener forTopic:(id)topic;	// 0x215821
- (void)removeTopic:(id)topic;	// 0x21571d
- (void)start;	// 0x215115
- (void)stop;	// 0x21538d
@end

