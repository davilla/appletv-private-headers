/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVSystemController : NSObject {
	AVSystemControllerPrivate *_priv;	// 4 = 0x4
}
+ (void)initialize;	// 0x32384541
+ (id)sharedAVSystemController;	// 0x32384579
- (id)init;	// 0x32384631
- (id)attributeForKey:(id)key;	// 0x3238f97d
- (BOOL)changeActiveCategoryVolumeBy:(float)by;	// 0x3239d385
- (BOOL)changeActiveCategoryVolumeBy:(float)by fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x3239e2b9
- (BOOL)changeActiveCategoryVolumeBy:(float)by forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3239e1e1
- (BOOL)changeVolumeBy:(float)by forCategory:(id)category;	// 0x3239e09d
- (BOOL)currentRouteHasVolumeControl;	// 0x3239eba1
- (void)dealloc;	// 0x32391025
- (BOOL)enablePortDiscovery:(BOOL)discovery;	// 0x3239ea9d
- (BOOL)getActiveCategoryMuted:(BOOL *)muted;	// 0x3239e101
- (BOOL)getActiveCategoryMuted:(BOOL *)muted forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3239e0c9
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name;	// 0x3239d33d
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name fallbackCategory:(id)category;	// 0x3239e209
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3239e18d
- (BOOL)getPortDiscoveryEnabled;	// 0x3239ec11
- (BOOL)getVolume:(float *)volume forCategory:(id)category;	// 0x3239e045
- (void)handleServerDied;	// 0x32390f95
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x3239d2ad
- (BOOL)okToNotifyFromThisThread;	// 0x3239e469
- (id)pickableRoutesForCategory:(id)category;	// 0x3239e43d
- (void)postEffectiveVolumeNotification:(void *)notification;	// 0x3239d749
- (void)postFullMuteDidChangeNotification:(void *)postFullMute;	// 0x3239e315
- (id)routeForCategory:(id)category;	// 0x3239e3cd
- (BOOL)setActiveCategoryVolumeTo:(float)to;	// 0x3239d361
- (BOOL)setActiveCategoryVolumeTo:(float)to fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x3239e261
- (BOOL)setActiveCategoryVolumeTo:(float)to forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3239e1b9
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x3239e48d
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x3239eaf1
- (BOOL)setVolumeTo:(float)to forCategory:(id)category;	// 0x3239e071
- (BOOL)toggleActiveCategoryMuted;	// 0x3239e165
- (BOOL)toggleActiveCategoryMutedForRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x3239e139
- (id)volumeCategoryForAudioCategory:(id)audioCategory;	// 0x3239e411
@end

