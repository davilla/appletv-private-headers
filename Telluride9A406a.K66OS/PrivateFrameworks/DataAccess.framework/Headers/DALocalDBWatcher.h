/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library


@interface DALocalDBWatcher : NSObject {
	int _lastSavedCalSequenceNumber;	// 4 = 0x4
	int _lastSavedABSequenceNumber;	// 8 = 0x8
	void *_abWatcher;	// 12 = 0xc
	CalDatabase *_calWatcher;	// 16 = 0x10
	CFDictionaryRef _concernedABPartyToBlockMap;	// 20 = 0x14
	CFDictionaryRef _concernedCalPartyToBlockMap;	// 24 = 0x18
	BOOL _watchingBookmarks;	// 28 = 0x1c
	CFDictionaryRef _concernedBookmarkPartyToBlockMap;	// 32 = 0x20
}
@property(assign) int lastSavedABSequenceNumber;	// G=0x36179675; S=0x36179685; @synthesize=_lastSavedABSequenceNumber
@property(assign) int lastSavedCalSequenceNumber;	// G=0x36179695; S=0x361796a5; @synthesize=_lastSavedCalSequenceNumber
+ (id)sharedDBWatcher;	// 0x36178645
- (id)init;	// 0x36178729
- (void)_handleABChangeNotificationWithInfo:(id)info;	// 0x36178841
- (void)_handleBookmarkChangeNotification;	// 0x36179079
- (void)_handleCalChangeNotification;	// 0x36178c5d
- (void)dealloc;	// 0x361787c5
// declared property getter: - (int)lastSavedABSequenceNumber;	// 0x36179675
// declared property getter: - (int)lastSavedCalSequenceNumber;	// 0x36179695
- (void)noteABDBDirChanged;	// 0x361793e5
- (void)noteCalDBDirChanged;	// 0x36179529
- (void)registerConcernedABParty:(id)party withChangedBlock:(id)changedBlock;	// 0x36178931
- (void)registerConcernedBookmarkParty:(id)party withChangedBlock:(id)changedBlock;	// 0x36179101
- (void)registerConcernedCalParty:(id)party withChangedBlock:(id)changedBlock;	// 0x36178d29
- (void)removeConcernedABParty:(id)party;	// 0x36178b35
- (void)removeConcernedBookmarkParty:(id)party;	// 0x361792dd
- (void)removeConcernedCalParty:(id)party;	// 0x36178f49
// declared property setter: - (void)setLastSavedABSequenceNumber:(int)number;	// 0x36179685
// declared property setter: - (void)setLastSavedCalSequenceNumber:(int)number;	// 0x361796a5
@end

