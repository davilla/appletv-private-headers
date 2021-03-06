/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "ISSingleton.h"
#import <NSObject.h> // Unknown library
#import "SSDownloadQueueObserver.h"

@class NSMutableSet, NSString;

@interface ISNetworkObserver : NSObject <ISSingleton, SSDownloadQueueObserver> {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	BOOL _isCellularRestricted;	// 8 = 0x8
	double _lastNetworkTypeChangeTime;	// 12 = 0xc
	int _networkUsageCount;	// 20 = 0x14
	int _networkType;	// 24 = 0x18
	NSMutableSet *_observedDownloadQueues;	// 28 = 0x1c
	SCNetworkReachabilityRef _reachability;	// 32 = 0x20
}
@property(readonly, assign, getter=isCellularDataRestricted) BOOL cellularDataRestricted;	// G=0x36953cd1; 
@property(readonly, assign) NSString *connectionTypeHeader;	// G=0x36953859; 
@property(readonly, assign) double lastNetworkTypeChangeTime;	// G=0x36953f29; 
@property(assign) int networkType;	// G=0x36954021; S=0x36954215; 
@property(readonly, assign) BOOL shouldShowCellularAutomaticDownloadsSwitch;	// G=0x369540f1; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x36953e4d; 
@property(readonly, assign, getter=isWiFiEnabled) BOOL wifiEnabled;	// G=0x36954161; 
+ (void)set3GEnabled:(BOOL)enabled;	// 0x36954b7d
+ (void)setAirplaneModeEnabled:(BOOL)enabled;	// 0x36954b81
+ (void)setSharedInstance:(id)instance;	// 0x369533b5
+ (void)setWiFiEnabled:(BOOL)enabled;	// 0x36954b85
+ (id)sharedInstance;	// 0x36953409
- (id)init;	// 0x36952de9
- (int)_currentNetworkType;	// 0x369544e9
- (void)_dataStatusChangedNotification:(id)notification;	// 0x369543e9
- (int)_networkTypeFromDataIndicator:(id)dataIndicator;	// 0x36954595
- (BOOL)_ntsIsUsingNetwork;	// 0x369546b9
- (void)_postTypeChangedNotificationFromValue:(int)value toValue:(int)value2;	// 0x36954795
- (void)_postUsageChangedToValue:(BOOL)value;	// 0x3695487d
- (void)_reloadCellularRestriction;	// 0x3695493d
- (void)_reloadNetworkType;	// 0x36954a65
- (int)_setNetworkType:(int)type;	// 0x36954b21
- (void)_telephonyObserverAvailableNotification:(id)notification;	// 0x36954469
- (void)beginObservingDownloadQueue:(id)queue;	// 0x36953485
- (void)beginUsingNetwork;	// 0x369536d9
// declared property getter: - (id)connectionTypeHeader;	// 0x36953859
- (id)copyValueForCarrierBundleKey:(id)carrierBundleKey;	// 0x36953921
- (void)dealloc;	// 0x36953255
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;	// 0x36954391
- (void)downloadQueueNetworkUsageChanged:(id)changed;	// 0x36954395
- (void)endObservingDownloadQueue:(id)queue;	// 0x36953931
- (void)endUsingNetwork;	// 0x36953b4d
// declared property getter: - (BOOL)isCellularDataRestricted;	// 0x36953cd1
// declared property getter: - (BOOL)isUsingNetwork;	// 0x36953e4d
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x36954161
// declared property getter: - (double)lastNetworkTypeChangeTime;	// 0x36953f29
// declared property getter: - (int)networkType;	// 0x36954021
- (void)reloadNetworkType;	// 0x36954195
// declared property setter: - (void)setNetworkType:(int)type;	// 0x36954215
// declared property getter: - (BOOL)shouldShowCellularAutomaticDownloadsSwitch;	// 0x369540f1
@end

