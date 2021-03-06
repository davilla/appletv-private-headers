/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSArray;

@interface ISSoftwareMap : NSObject {
	NSArray *_applications;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *applications;	// G=0x37a6bb01; 
+ (void)_startWatchingInstallationNotifications;	// 0x37a6beb5
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x37a6b441
+ (id)applicationForBundleIdentifier:(id)bundleIdentifier applicationType:(CFStringRef)type;	// 0x37a6b45d
+ (id)currentMap;	// 0x37a6b261
+ (BOOL)currentMapIsValid;	// 0x37a6b2a5
+ (BOOL)haveApplicationsOfType:(CFStringRef)type;	// 0x37a6b0a1
+ (void)invalidateCurrentMap;	// 0x37a6b2d1
+ (id)loadedMap;	// 0x37a6b335
+ (void)setCurrentMap:(id)map;	// 0x37a6b3d9
+ (void)startObservingNotifications;	// 0x37a6be69
- (id)init;	// 0x37a6afb5
- (void)_loadFromMobileInstallation;	// 0x37a6bf91
- (id)_newSoftwareUpdateDictionaryForApplication:(id)application;	// 0x37a6c025
- (id)_softwareUpdatesAccountsStringForApplications:(id)applications;	// 0x37a6c0c1
- (id)applicationForBundleIdentifier:(id)bundleIdentifier;	// 0x37a6b8f9
- (id)applicationForItemIdentifier:(id)itemIdentifier;	// 0x37a6b9fd
// declared property getter: - (id)applications;	// 0x37a6bb01
- (id)copySoftwareUpdatesPropertyList;	// 0x37a6bb11
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)updatesContext;	// 0x37a6bb25
- (void)dealloc;	// 0x37a6b051
@end

