/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UIAlertViewDelegate.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSDictionary;

@interface MPAudioDeviceController : NSObject <UIAlertViewDelegate> {
@private
	NSString *_category;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	BOOL _fakeRouteAvailable;	// 12 = 0xc
	NSArray *_pickableRoutes;	// 16 = 0x10
	NSDictionary *_pickedRoute;	// 20 = 0x14
	BOOL _pickedRouteHasVolumeControl;	// 24 = 0x18
	BOOL _pickedRouteHasVolumeControlIsValid;	// 25 = 0x19
}
@property(assign, nonatomic) BOOL routeDiscoveryEnabled;	// G=0x34e2fe6d; S=0x34e2fe95; 
+ (BOOL)routeDiscoveryEnabled;	// 0x34e2fe09
+ (void)setRouteDiscoveryEnabled:(BOOL)enabled;	// 0x34e2fe21
- (id)init;	// 0x34e2eef5
- (void)_mediaServerDied;	// 0x34e302e9
- (BOOL)_pickRoute:(id)route;	// 0x34e300cd
- (BOOL)_pickRoute:(id)route withPassword:(id)password;	// 0x34e300e5
- (id)_pickableRoutes;	// 0x34e2ff71
- (void)_pickableRoutesChangedNotification:(id)notification;	// 0x34e3038d
- (id)_pickedRoute;	// 0x34e2ff01
- (void)_portStatusDidChangeNotification:(id)_portStatus;	// 0x34e3044d
- (void)_registerForAVControllerNotifications;	// 0x34e30895
- (BOOL)_routeIsDisplayPort:(id)port;	// 0x34e3018d
- (BOOL)_routeIsHandset:(id)handset;	// 0x34e30215
- (BOOL)_routeIsHeadphones:(id)headphones;	// 0x34e301d1
- (BOOL)_routeIsReceiver:(id)receiver;	// 0x34e3025d
- (BOOL)_routeIsSpeaker:(id)speaker;	// 0x34e30149
- (BOOL)_routeIsWireless:(id)wireless;	// 0x34e302a1
- (void)_sendFakeRouteChange;	// 0x34e3099d
- (BOOL)airtunesRouteIsPicked;	// 0x34e2f399
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x34e2fec1
- (void)clearCachedRoutes;	// 0x34e2f6c5
- (void)dealloc;	// 0x34e2ef39
- (void)determinePickableRoutesWithCompletionHandler:(id)completionHandler;	// 0x34e2fb9d
- (BOOL)handsetRouteIsPicked;	// 0x34e2f339
- (int)indexOfPickedRoute;	// 0x34e2fb09
- (id)nameOfPickedRoute;	// 0x34e2f0d1
- (unsigned)numberOfAudioRoutes;	// 0x34e2f3e9
- (BOOL)pickBestDeviceRoute;	// 0x34e2f5b1
- (BOOL)pickHandsetRoute;	// 0x34e2f4e1
- (BOOL)pickRouteAtIndex:(unsigned)index;	// 0x34e2fa85
- (BOOL)pickRouteAtIndex:(unsigned)index withPassword:(id)password;	// 0x34e2fa9d
- (BOOL)pickSpeakerRoute;	// 0x34e2f411
- (id)pickedRouteDescription;	// 0x34e2f105
- (BOOL)receiverRouteIsPicked;	// 0x34e2f309
- (void)restorePickedRoute;	// 0x34e2f699
- (id)routeDescriptionAtIndex:(unsigned)index;	// 0x34e2f725
// declared property getter: - (BOOL)routeDiscoveryEnabled;	// 0x34e2fe6d
- (id)routeNameAtIndex:(unsigned)index isPicked:(BOOL *)picked;	// 0x34e2f771
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;	// 0x34e2f201
- (BOOL)routeOtherThanHandsetIsAvailable;	// 0x34e2f149
- (BOOL)routeRequiresPasswordAtIndex:(unsigned)index;	// 0x34e2f9a5
- (id)routeTypeAtIndex:(unsigned)index;	// 0x34e2fa1d
- (void)setCategory:(id)category;	// 0x34e2f029
- (void)setDelegate:(id)delegate;	// 0x34e2f081
// declared property setter: - (void)setRouteDiscoveryEnabled:(BOOL)enabled;	// 0x34e2fe95
- (BOOL)speakerRouteIsPicked;	// 0x34e2f2d9
- (BOOL)volumeControlIsAvailable;	// 0x34e2f091
- (BOOL)wirelessRouteIsPicked;	// 0x34e2f369
@end
