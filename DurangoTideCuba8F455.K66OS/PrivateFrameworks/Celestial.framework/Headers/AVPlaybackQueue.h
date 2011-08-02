/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, AVQueue;

@interface AVPlaybackQueue : NSObject {
	id _delegate;	// 4 = 0x4
	AVQueue *_avItemQueue;	// 8 = 0x8
	NSMutableArray *_pbItemQueue;	// 12 = 0xc
	OpaqueFigPlayer *_figPlayer;	// 16 = 0x10
	int _ignoreAVQueueModifications;	// 20 = 0x14
	BOOL _hasBuiltPlaybackQueue;	// 24 = 0x18
	BOOL _waitingToAddFirstItem;	// 25 = 0x19
	int _avQueueTransactionCount;	// 28 = 0x1c
	int _repeatMode;	// 32 = 0x20
}
- (id)initWithDelegate:(id)delegate figPlayer:(OpaqueFigPlayer *)player;	// 0x32385099
- (void)beginAVQueueTransaction;	// 0x3239f715
- (void)checkQueueConsistency;	// 0x323898a1
- (void)clearPBItemQueueFromIndex:(int)index;	// 0x3238534d
- (id)currentPlaybackItem;	// 0x32385ac5
- (void)dealloc;	// 0x32394c89
- (void)endAVQueueTransaction;	// 0x3239f729
- (void)ensurePlaybackQueue;	// 0x3238b3b9
- (void)ensurePlaybackQueueImmed;	// 0x3238d2e9
- (void)fillInPBItemQueue;	// 0x32385561
- (void)playbackItemInspectionComplete:(id)complete;	// 0x3238d279
- (void)playbackItemWasRemovedFromPlayQueue:(id)playQueue;	// 0x3238f65d
- (void)queueItemWasAddedNotification:(id)notification;	// 0x32388aed
- (void)queueItemWillBeRemovedNotification:(id)queueItem;	// 0x3238e641
- (void)removeItemsNoLongerInPlayQueue;	// 0x3238d6c1
- (void)scheduleRemoveItemsNoLongerInPlayQueue;	// 0x3238d515
- (void)setAVItemQueue:(id)queue;	// 0x323851ed
- (void)setDelegate:(id)delegate;	// 0x32394c79
- (void)setRepeatMode:(int)mode;	// 0x3238b1e5
- (void)updateBookmarkTimesIncludeFirst:(BOOL)first updateFirst:(BOOL)first2;	// 0x323895c5
@end
