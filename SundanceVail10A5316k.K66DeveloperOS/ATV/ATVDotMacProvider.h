/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSDate, NSString, NSMutableArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface ATVDotMacProvider : XXUnknownSuperclass <BRProvider> {
	NSMutableArray *_data;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
	NSDate *_lastUpdateDate;	// 12 = 0xc
	BOOL _updatePending;	// 16 = 0x10
	NSString *_uniqueID;	// 20 = 0x14
	BOOL _chainLoadingDisabled;	// 24 = 0x18
	BOOL _isTemporaryProvider;	// 25 = 0x19
}
@property(assign) BOOL chainLoadingDisabled;	// G=0x17e7b5; S=0x17e7a5; converted property
@property(readonly, retain) NSString *uniqueID;	// G=0x17e9a9; converted property
+ (BOOL)accountWithNameIsPersistent:(id)nameIsPersistent;	// 0x17e3c9
+ (id)providerOfPersistentAccounts;	// 0x17e385
- (id)initAsTemporaryProvider:(BOOL)provider;	// 0x17e491
- (BOOL)_accountIconLoadedForAccount:(id)account updateData:(id)data;	// 0x17fc35
- (void)_accountToRemove:(id)remove;	// 0x17f005
- (id)_accountWithName:(id)name;	// 0x180869
- (id)_assetWithIdentifier:(id)identifier parentCollection:(id)collection;	// 0x1807e9
- (BOOL)_assetsLoadedForCollection:(id)collection updateData:(id)data;	// 0x17fe59
- (id)_cachedAccountIconForIconPath:(id)iconPath;	// 0x1806b1
- (void)_cancelDataMonitoringForAccounts;	// 0x17ecc9
- (id)_collectionWithIdentifier:(id)identifier withParentAccountName:(id)parentAccountName;	// 0x180759
- (id)_data;	// 0x180749
- (BOOL)_handlesObject:(id)object;	// 0x17f5b1
- (BOOL)_imageLoadedForAsset:(id)asset updateData:(id)data;	// 0x18054d
- (id)_initForPersistentAccounts;	// 0x17e9b9
- (void)_listenerUpdate:(id)update;	// 0x17f1d5
- (BOOL)_mediaLoadedForAccount:(id)account updateData:(id)data;	// 0x17f5b5
- (void)_newAccountToAdd:(id)add;	// 0x17ed55
- (BOOL)_newAuthenticationForCollection:(id)collection updateData:(id)data;	// 0x17fce9
- (id)_persistentAccounts;	// 0x17eacd
- (void)_postUpdateNotification:(id)notification;	// 0x17f579
- (void)_processChangeToObject:(id)object;	// 0x17f225
- (void)_sendUpdateNotification;	// 0x17f409
- (void)_sendUpdateNotificationAfterDelay;	// 0x17f3d5
- (void)_updateDataCount;	// 0x1808e5
- (id)accessibilityLabel;	// 0x180739
// converted property getter: - (BOOL)chainLoadingDisabled;	// 0x17e7b5
- (id)controlFactory;	// 0x17e6a5
- (id)dataAtIndex:(long)index;	// 0x17e6dd
- (long)dataCount;	// 0x17e6b5
- (void)dealloc;	// 0x17e5ad
- (void)handleDataUpdate:(id)update updateData:(id)data;	// 0x17e811
- (id)hashForDataAtIndex:(long)index;	// 0x17e749
- (void)invalidate;	// 0x17e7c5
// converted property setter: - (void)setChainLoadingDisabled:(BOOL)disabled;	// 0x17e7a5
// converted property getter: - (id)uniqueID;	// 0x17e9a9
@end

