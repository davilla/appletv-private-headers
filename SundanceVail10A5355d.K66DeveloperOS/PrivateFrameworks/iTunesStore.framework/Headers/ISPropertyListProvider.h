/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDataProvider.h"
#import "NSCopying.h"
#import "iTunesStore-Structs.h"


@interface ISPropertyListProvider : ISDataProvider <NSCopying> {
	BOOL _shouldPostFooterSectionChanged;	// 44 = 0x2c
	BOOL _shouldProcessAccount;	// 45 = 0x2d
	BOOL _shouldProcessAuthenticationDialogs;	// 46 = 0x2e
	BOOL _shouldProcessDialogs;	// 47 = 0x2f
	BOOL _shouldProcessProtocol;	// 48 = 0x30
	BOOL _shouldTriggerDownloads;	// 49 = 0x31
}
@property(assign) BOOL shouldPostFooterSectionChanged;	// G=0x37a5b8c1; S=0x37a5b8d9; @synthesize=_shouldPostFooterSectionChanged
@property(assign) BOOL shouldProcessAccount;	// G=0x37a5b8f1; S=0x37a5b909; @synthesize=_shouldProcessAccount
@property(assign) BOOL shouldProcessAuthenticationDialogs;	// G=0x37a5b921; S=0x37a5b939; @synthesize=_shouldProcessAuthenticationDialogs
@property(assign) BOOL shouldProcessDialogs;	// G=0x37a5b951; S=0x37a5b969; @synthesize=_shouldProcessDialogs
@property(assign) BOOL shouldProcessProtocol;	// G=0x37a5b981; S=0x37a5b999; @synthesize=_shouldProcessProtocol
@property(assign) BOOL shouldTriggerDownloads;	// G=0x37a5b9b1; S=0x37a5b9c9; @synthesize=_shouldTriggerDownloads
- (id)init;	// 0x37a5a7e5
- (void)_checkDownloadQueues;	// 0x37a5afad
- (void)_checkInAppPurchaseQueueForAction:(id)action;	// 0x37a5b011
- (void)_performActionsForResponse:(id)response;	// 0x37a5b125
- (BOOL)_processFailureTypeFromPropertyList:(id)propertyList error:(id *)error;	// 0x37a5b795
- (void)_selectFooterSection:(id)section;	// 0x37a5b655
- (id)copyWithZone:(NSZone *)zone;	// 0x37a5a869
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x37a5aebd
- (BOOL)processDialogFromPropertyList:(id)propertyList returningError:(id *)error;	// 0x37a5a95d
- (BOOL)processPropertyList:(id)list returningError:(id *)error;	// 0x37a5ac51
// declared property setter: - (void)setShouldPostFooterSectionChanged:(BOOL)postFooterSectionChanged;	// 0x37a5b8d9
// declared property setter: - (void)setShouldProcessAccount:(BOOL)processAccount;	// 0x37a5b909
// declared property setter: - (void)setShouldProcessAuthenticationDialogs:(BOOL)processAuthenticationDialogs;	// 0x37a5b939
// declared property setter: - (void)setShouldProcessDialogs:(BOOL)processDialogs;	// 0x37a5b969
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x37a5b999
// declared property setter: - (void)setShouldTriggerDownloads:(BOOL)triggerDownloads;	// 0x37a5b9c9
// declared property getter: - (BOOL)shouldPostFooterSectionChanged;	// 0x37a5b8c1
// declared property getter: - (BOOL)shouldProcessAccount;	// 0x37a5b8f1
// declared property getter: - (BOOL)shouldProcessAuthenticationDialogs;	// 0x37a5b921
// declared property getter: - (BOOL)shouldProcessDialogs;	// 0x37a5b951
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x37a5b981
// declared property getter: - (BOOL)shouldTriggerDownloads;	// 0x37a5b9b1
@end

