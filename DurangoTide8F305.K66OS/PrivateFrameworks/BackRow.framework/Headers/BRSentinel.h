/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@protocol BRMusicStoreImageDecryptionAgent, BRSyncProgressAgent, BRYTSigningAgent, BRDAAPListenerEnabler;

@interface BRSentinel : BRSingleton {
@private
	id<BRMusicStoreImageDecryptionAgent> _musicStoreImageDecryptionAgent;	// 4 = 0x4
	id<BRMusicStoreImageDecryptionAgent> _musicStoreTrickPlayImageDecryptionAgent;	// 8 = 0x8
	id<BRSyncProgressAgent> _syncProgressAgent;	// 12 = 0xc
	id<BRYTSigningAgent> _signingAgent;	// 16 = 0x10
	id<BRDAAPListenerEnabler> _daapListenerEnabler;	// 20 = 0x14
	unsigned _networkDependentControllerCount;	// 24 = 0x18
}
@property(retain) id YTSigningAgent;	// G=0x329426bd; S=0x3291a24d; converted property
@property(retain) id musicStoreImageDecryptionAgent;	// G=0x32924b59; S=0x3291a301; converted property
@property(retain) id musicStoreTrickPlayImageDecryptionAgent;	// G=0x329c8965; S=0x329c8eb1; converted property
@property(retain) id syncProgressAgent;	// G=0x32943891; S=0x3291a339; converted property
+ (void)setSingleton:(id)singleton;	// 0x3291a241
+ (id)singleton;	// 0x3291a031
- (id)init;	// 0x3291a03d
// converted property getter: - (id)YTSigningAgent;	// 0x329426bd
- (void)_currentMediaServerDisconnected:(id)disconnected;	// 0x329c8f7d
- (void)_databaseObjectWasAdded:(id)added;	// 0x329c8bd1
- (void)_databaseObjectWasDeleted:(id)deleted;	// 0x329c8a69
- (void)_databaseObjectWasModified:(id)modified;	// 0x329c8cf5
- (void)_databaseObjectWillBeDeleted:(id)_databaseObject;	// 0x329c8b6d
- (void)_databaseUpdateComplete:(id)complete;	// 0x329253cd
- (void)_databaseUpdateStarted:(id)started;	// 0x329252c9
- (void)_databaseUpdatedWhileSyncStateIdle:(id)idle;	// 0x329c8a0d
- (void)_networkStatusChanged:(id)changed;	// 0x329c90b9
- (void)_newPhotoDatabaseAvailable:(id)available;	// 0x329c8995
- (void)_syncHostAvailabilityChanged:(id)changed;	// 0x3291fca5
- (id)daapListenerEnabler;	// 0x329c8985
- (void)dealloc;	// 0x329c8ee9
// converted property getter: - (id)musicStoreImageDecryptionAgent;	// 0x32924b59
// converted property getter: - (id)musicStoreTrickPlayImageDecryptionAgent;	// 0x329c8965
- (void)networkDependentControllerWasPopped;	// 0x3292c495
- (void)networkDependentControllerWasPushed;	// 0x329c8e19
- (void)setDAAPListenerEnabler:(id)enabler;	// 0x329c8975
// converted property setter: - (void)setMusicStoreImageDecryptionAgent:(id)agent;	// 0x3291a301
// converted property setter: - (void)setMusicStoreTrickPlayImageDecryptionAgent:(id)agent;	// 0x329c8eb1
// converted property setter: - (void)setSyncProgressAgent:(id)agent;	// 0x3291a339
// converted property setter: - (void)setYTSigningAgent:(id)agent;	// 0x3291a24d
// converted property getter: - (id)syncProgressAgent;	// 0x32943891
@end

