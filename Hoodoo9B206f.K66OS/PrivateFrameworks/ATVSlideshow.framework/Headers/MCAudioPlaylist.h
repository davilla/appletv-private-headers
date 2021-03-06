/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSArray, NSMutableSet, NSSet, MCContainer;

@interface MCAudioPlaylist : MCObject {
	NSMutableSet *mSongs;	// 12 = 0xc
	NSArray *mCachedOrderedSongs;	// 16 = 0x10
	float mVolume;	// 20 = 0x14
	double mFadeInDuration;	// 24 = 0x18
	double mFadeOutDuration;	// 32 = 0x20
	float mDuckLevel;	// 40 = 0x28
	double mDuckInDuration;	// 44 = 0x2c
	double mDuckOutDuration;	// 52 = 0x34
	MCContainer *mContainer;	// 60 = 0x3c
}
@property(assign) MCContainer *container;	// G=0x30ada5b9; S=0x30ada5c9; @synthesize=mContainer
@property(assign, nonatomic) double duckInDuration;	// G=0x30ada561; S=0x30ada579; @synthesize=mDuckInDuration
@property(assign, nonatomic) float duckLevel;	// G=0x30ada541; S=0x30ada551; @synthesize=mDuckLevel
@property(assign, nonatomic) double duckOutDuration;	// G=0x30ada58d; S=0x30ada5a5; @synthesize=mDuckOutDuration
@property(assign, nonatomic) double fadeInDuration;	// G=0x30ada4e9; S=0x30ada501; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x30ada515; S=0x30ada52d; @synthesize=mFadeOutDuration
@property(readonly, assign) NSArray *orderedSongs;	// G=0x30ada2fd; 
@property(readonly, assign) NSSet *songs;	// G=0x30ad937d; 
@property(assign, nonatomic) float volume;	// G=0x30ada4c9; S=0x30ada4d9; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x30ad8849
- (id)init;	// 0x30ad89d5
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x30ad8a59
- (id)addSongForAsset:(id)asset;	// 0x30ad9735
- (id)addSongsForAssets:(id)assets;	// 0x30ad9799
// declared property getter: - (id)container;	// 0x30ada5b9
- (unsigned)countOfSongs;	// 0x30ad94a9
- (void)demolish;	// 0x30ad8d79
// declared property getter: - (double)duckInDuration;	// 0x30ada561
// declared property getter: - (float)duckLevel;	// 0x30ada541
// declared property getter: - (double)duckOutDuration;	// 0x30ada58d
// declared property getter: - (double)fadeInDuration;	// 0x30ada4e9
// declared property getter: - (double)fadeOutDuration;	// 0x30ada515
- (id)imprint;	// 0x30ad8f99
- (id)insertSongForAsset:(id)asset atIndex:(unsigned)index;	// 0x30ad97cd
- (id)insertSongsForAssets:(id)assets atIndex:(unsigned)index;	// 0x30ad981d
- (void)moveSongsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x30ada065
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30ad9311
// declared property getter: - (id)orderedSongs;	// 0x30ada2fd
- (void)removeAllSongs;	// 0x30ada011
- (void)removeSongsAtIndices:(id)indices;	// 0x30ad9c75
// declared property setter: - (void)setContainer:(id)container;	// 0x30ada5c9
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x30ada579
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x30ada551
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x30ada5a5
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x30ada501
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x30ada52d
// declared property setter: - (void)setVolume:(float)volume;	// 0x30ada4d9
- (id)songAtIndex:(unsigned)index;	// 0x30ad9565
// declared property getter: - (id)songs;	// 0x30ad937d
// declared property getter: - (float)volume;	// 0x30ada4c9
@end

