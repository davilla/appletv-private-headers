/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class AVQueue, NSMutableArray;

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
- (id)initWithDelegate:(id)delegate figPlayer:(OpaqueFigPlayer *)player;	// 0x372b6401
- (void)beginAVQueueTransaction;	// 0x372d7011
- (void)checkQueueConsistency;	// 0x372baf4d
- (void)clearPBItemQueueFromIndex:(int)index;	// 0x372b6799
- (id)currentPlaybackItem;	// 0x372b70f1
- (void)dealloc;	// 0x372c7139
- (void)endAVQueueTransaction;	// 0x372d7065
- (void)ensurePlaybackQueue;	// 0x372bce69
- (void)ensurePlaybackQueueImmed;	// 0x372bf30d
- (void)fillInPBItemQueue;	// 0x372b6a15
- (void)playbackItemInspectionComplete:(id)complete;	// 0x372bf225
- (void)playbackItemWasRemovedFromPlayQueue:(id)playQueue;	// 0x372c1ac5
- (void)queueItemWasAddedNotification:(id)notification;	// 0x372ba039
- (void)queueItemWillBeRemovedNotification:(id)queueItem;	// 0x372c0739
- (void)removeItemsNoLongerInPlayQueue;	// 0x372bf79d
- (void)scheduleRemoveItemsNoLongerInPlayQueue;	// 0x372bf5d9
- (void)setAVItemQueue:(id)queue;	// 0x372b65dd
- (void)setDelegate:(id)delegate;	// 0x372c7125
- (void)setRepeatMode:(int)mode;	// 0x372bcb9d
- (void)updateBookmarkTimesIncludeFirst:(BOOL)first updateFirst:(BOOL)first2;	// 0x372bac39
@end
