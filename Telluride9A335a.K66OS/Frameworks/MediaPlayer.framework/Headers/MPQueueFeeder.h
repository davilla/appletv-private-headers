/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "AVPlaylistFeeder.h"

@class MPAVController, NSDictionary;

@interface MPQueueFeeder : NSObject <AVPlaylistFeeder> {
	MPAVController *_avController;	// 4 = 0x4
	CFSetRef _itemsWithReferencesToClear;	// 8 = 0x8
	unsigned _repeatType;	// 12 = 0xc
	unsigned _shuffleType;	// 16 = 0x10
	CFDictionaryRef _nextStartTimes;	// 20 = 0x14
	id _representedObject;	// 24 = 0x18
	BOOL _fullScreenPlaybackQueue;	// 28 = 0x1c
	BOOL _isSourceChangeInProgress;	// 29 = 0x1d
	BOOL _deallocating;	// 30 = 0x1e
}
@property(assign, nonatomic) MPAVController *AVController;	// G=0x300fe9f1; S=0x300fea01; @synthesize=_avController
@property(assign, nonatomic) BOOL fullScreenPlaybackQueue;	// G=0x300fea85; S=0x300fea95; @synthesize=_fullScreenPlaybackQueue
@property(assign, nonatomic) BOOL isSourceChangeInProgress;	// G=0x300feaa5; S=0x300fe2f9; @synthesize=_isSourceChangeInProgress
@property(readonly, assign, nonatomic) Class itemClass;	// G=0x300fe461; 
@property(readonly, assign, nonatomic) NSDictionary *preferredLanguages;	// G=0x300fe481; 
@property(readonly, assign, nonatomic) unsigned realRepeatType;	// G=0x300fe551; 
@property(readonly, assign, nonatomic) unsigned realShuffleType;	// G=0x300fe561; 
@property(assign, nonatomic) unsigned repeatType;	// G=0x300fea11; S=0x300fea21; @synthesize=_repeatType
@property(retain, nonatomic) id<NSObject> representedObject;	// G=0x300fea51; S=0x300fea61; @synthesize=_representedObject
@property(assign, nonatomic) unsigned shuffleType;	// G=0x300fea31; S=0x300fea41; @synthesize=_shuffleType
@property(readonly, assign, nonatomic) BOOL trackChangesCanEndPlayback;	// G=0x300fe485; 
+ (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver feederClass:(Class)aClass;	// 0x300fe841
// declared property getter: - (id)AVController;	// 0x300fe9f1
- (BOOL)_canPurgeNextStartTimes;	// 0x300fe645
- (void)_fixNextStartTimesByInsertingRange:(NSRange)range;	// 0x300fe0d1
- (void)_fixNextStartTimesByRemovingRange:(NSRange)range;	// 0x300fe18d
- (void)addReferenceToItem:(id)item;	// 0x300fe489
- (void)archiveAVControllerPlaybackQueue:(id)queue toArchiver:(id)archiver;	// 0x300fe8bd
- (void)assumeOwnershipOfItems:(id)items;	// 0x300fe7c1
- (void)beginSourceChange;	// 0x300fe359
- (void)clearReferencesToItem:(id)item;	// 0x300fe515
- (void)commitSourceChangeWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x300fe3c5
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x300fe5d9
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x300fe571
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x300fe6dd
- (void)dealloc;	// 0x300fe019
- (id)errorResolverForItem:(id)item;	// 0x300fe451
// declared property getter: - (BOOL)fullScreenPlaybackQueue;	// 0x300fea85
- (void)invalidateQueueCaches;	// 0x300fe2b1
// declared property getter: - (BOOL)isSourceChangeInProgress;	// 0x300feaa5
// declared property getter: - (Class)itemClass;	// 0x300fe461
- (unsigned)itemCount;	// 0x300fe9e1
- (id)itemForIndex:(unsigned)index;	// 0x300fe75d
- (unsigned)itemTypeForIndex:(unsigned)index;	// 0x300fe47d
- (id)localizedPositionInPlaylistString:(id)playlistString;	// 0x300fe8e9
- (unsigned)numberOfPaths;	// 0x300fe9dd
- (id)pathAtIndex:(unsigned)index;	// 0x300fe9bd
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x300fe649
// declared property getter: - (id)preferredLanguages;	// 0x300fe481
// declared property getter: - (unsigned)realRepeatType;	// 0x300fe551
// declared property getter: - (unsigned)realShuffleType;	// 0x300fe561
- (BOOL)reloadWithDataSource:(id)dataSource;	// 0x300fe2dd
- (BOOL)reloadWithDataSource:(id)dataSource keepPlayingCurrentItemIfPossible:(BOOL)possible;	// 0x300fe2f5
// declared property getter: - (unsigned)repeatType;	// 0x300fea11
// declared property getter: - (id)representedObject;	// 0x300fea51
- (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver;	// 0x300fe889
// declared property setter: - (void)setAVController:(id)controller;	// 0x300fea01
// declared property setter: - (void)setFullScreenPlaybackQueue:(BOOL)queue;	// 0x300fea95
// declared property setter: - (void)setIsSourceChangeInProgress:(BOOL)progress;	// 0x300fe2f9
- (void)setNextStartTime:(double)time forIndex:(unsigned)index;	// 0x300fe1f5
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x300fea21
// declared property setter: - (void)setRepresentedObject:(id)object;	// 0x300fea61
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x300fea41
- (BOOL)shouldBeginPlaybackOfItem:(id)item error:(id *)error;	// 0x300fe455
- (void)shuffleItemsWithAnchor:(unsigned *)anchor;	// 0x300fe2d9
// declared property getter: - (unsigned)shuffleType;	// 0x300fea31
// declared property getter: - (BOOL)trackChangesCanEndPlayback;	// 0x300fe485
@end
