/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "SSDownloadManagerObserver.h"

@class MPAVItem, NSMutableArray, MPQueuePlayer, NSMutableSet, MPDownloadManager, NSArray;
@protocol MPAVQueuePlayerFeederSource;

@interface MPAVQueuePlayerFeeder : NSObject <SSDownloadManagerObserver> {
	BOOL _forceSynchronousQueueFilling;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	MPDownloadManager *_downloadManager;	// 12 = 0xc
	BOOL _fillQueueActive;	// 16 = 0x10
	int _nextFillQueueToken;	// 20 = 0x14
	NSMutableSet *_pausedDownloads;	// 24 = 0x18
	MPQueuePlayer *_player;	// 28 = 0x1c
	dispatch_queue_s *_playerQueue;	// 32 = 0x20
	id<MPAVQueuePlayerFeederSource> _playlistItemSource;	// 36 = 0x24
	NSMutableSet *_reusableItems;	// 40 = 0x28
@private
	int _desiredQueueDepth;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) MPAVItem *currentItem;	// G=0x303d9241; 
@property(assign, nonatomic) int desiredQueueDepth;	// G=0x303dab41; S=0x303dab51; @synthesize=_desiredQueueDepth
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x303dab61; S=0x303dab71; @synthesize=_forceSynchronousQueueFilling
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x303d9289; 
- (id)initWithAVQueuePlayer:(id)avqueuePlayer itemSource:(id)source;	// 0x303d8211
- (void)_fillInQueue;	// 0x303d8d8d
- (id)_fillInQueueWithExtraSpace:(int)extraSpace;	// 0x303d8dd5
- (id)_fillInQueueWithExtraSpace:(int)extraSpace ignoreExistingItems:(BOOL)items;	// 0x303d8de9
- (id)_fillInQueueWithExtraSpace:(int)extraSpace ignoreExistingItems:(BOOL)items removeCurrentItem:(BOOL)item;	// 0x303d8e0d
- (void)_markIsReusable:(BOOL)reusable item:(id)item;	// 0x303d92c1
- (void)_pauseOrResumeDownloads:(id)downloads currentDownloadID:(long long)anId;	// 0x303d999d
- (void)_removeCurrentItem;	// 0x303d86bd
- (void)_removeInvalidItems:(id)items;	// 0x303d9f3d
- (void)_updatePlayerQueueWithRemovedItems:(id)removedItems addedItems:(id)items removeCurrentItem:(BOOL)item;	// 0x303da029
- (void)_updateQueueDepthForRateChange;	// 0x303daa5d
- (id)acquireReusableItemsUsingBlock:(id)block;	// 0x303d933d
- (void)advanceToNextItem;	// 0x303d98ad
- (void)cancelReusableItemsPassingTest:(id)test;	// 0x303d9535
// declared property getter: - (id)currentItem;	// 0x303d9241
- (void)dealloc;	// 0x303d8471
- (id)description;	// 0x303d8595
// declared property getter: - (int)desiredQueueDepth;	// 0x303dab41
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x303d90c1
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x303dab61
- (void)invalidate;	// 0x303d9989
// declared property getter: - (id)items;	// 0x303d9289
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x303d87fd
- (void)reloadQueueKeepingCurrentItem:(BOOL)item;	// 0x303d9665
// declared property setter: - (void)setDesiredQueueDepth:(int)depth;	// 0x303dab51
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x303dab71
@end

