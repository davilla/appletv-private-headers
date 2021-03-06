/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "ATVSlideshow-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, MCAudioPlaylist, MCMontage, MCPlug, MPPlaylistInternal, NSMutableDictionary;
@protocol MPAudioSupport;

@interface MPAudioPlaylist : NSObject <NSCopying, NSCoding> {
	NSMutableArray *_songs;	// 4 = 0x4
	MCAudioPlaylist *_audioPlaylist;	// 8 = 0x8
	MCPlug *_plug;	// 12 = 0xc
	NSObject<MPAudioSupport> *_parentObject;	// 16 = 0x10
	MCMontage *_montage;	// 20 = 0x14
	NSMutableDictionary *_attributes;	// 24 = 0x18
	MPPlaylistInternal *_internal;	// 28 = 0x1c
}
@property(retain) MCAudioPlaylist *audioPlaylist;	// G=0x3201b405; S=0x3201b675; converted property
@property(assign) double duckInDuration;	// G=0x3201b29d; S=0x3201b2bd; @dynamic
@property(assign) float duckLevel;	// G=0x3201b395; S=0x3201b3b5; @dynamic
@property(assign) double duckOutDuration;	// G=0x3201b319; S=0x3201b339; @dynamic
@property(assign) double duration;	// G=0x3201b111; S=0x3201bc71; converted property
@property(assign) double fadeInDuration;	// G=0x3201b131; S=0x3201b151; @dynamic
@property(assign) double fadeOutDuration;	// G=0x3201b1ad; S=0x3201b1cd; @dynamic
@property(retain) MCMontage *montage;	// G=0x3201b655; S=0x3201b665; converted property
@property(retain) id parentObject;	// G=0x3201b101; S=0x3201bc11; converted property
@property(readonly, retain) NSMutableArray *songs;	// G=0x3201a951; converted property
+ (id)audioPlaylist;	// 0x32019f6d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32019f3d
- (id)init;	// 0x32019fa9
- (id)initWithCoder:(id)coder;	// 0x3201a489
- (void)addSong:(id)song;	// 0x3201a961
- (void)addSongs:(id)songs;	// 0x3201a9bd
// converted property getter: - (id)audioPlaylist;	// 0x3201b405
- (void)cleanup;	// 0x3201b645
- (void)copySongs:(id)songs;	// 0x3201b531
- (void)copyStruct:(id)aStruct;	// 0x3201b415
- (id)copyWithZone:(NSZone *)zone;	// 0x3201a7f9
- (int)countOfSongs;	// 0x3201bf55
- (void)dealloc;	// 0x3201a175
- (id)description;	// 0x3201a87d
// declared property getter: - (double)duckInDuration;	// 0x3201b29d
// declared property getter: - (float)duckLevel;	// 0x3201b395
// declared property getter: - (double)duckOutDuration;	// 0x3201b319
// converted property getter: - (double)duration;	// 0x3201b111
- (void)encodeWithCoder:(id)coder;	// 0x3201a249
// declared property getter: - (double)fadeInDuration;	// 0x3201b131
// declared property getter: - (double)fadeOutDuration;	// 0x3201b1ad
- (void)finalize;	// 0x3201a149
- (void)insertObject:(id)object inSongsAtIndex:(int)index;	// 0x3201bf95
- (void)insertSongs:(id)songs atIndex:(int)index;	// 0x3201a9fd
// converted property getter: - (id)montage;	// 0x3201b655
- (void)moveSongsFromIndices:(id)indices toIndex:(int)index;	// 0x3201b009
- (id)objectInSongsAtIndex:(int)index;	// 0x3201bf75
- (id)parentDocument;	// 0x3201be11
// converted property getter: - (id)parentObject;	// 0x3201b101
- (void)removeAllSongs;	// 0x3201afa9
- (void)removeObjectFromSongsAtIndex:(int)index;	// 0x3201bfd5
- (void)removeSongsAtIndices:(id)indices;	// 0x3201ad61
- (void)replaceObjectInSongsAtIndex:(int)index withObject:(id)object;	// 0x3201c011
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x3201b675
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x3201b2bd
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x3201b3b5
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x3201b339
// converted property setter: - (void)setDuration:(double)duration;	// 0x3201bc71
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x3201b151
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x3201b1cd
// converted property setter: - (void)setMontage:(id)montage;	// 0x3201b665
// converted property setter: - (void)setParentObject:(id)object;	// 0x3201bc11
- (void)setPlug:(id)plug;	// 0x3201ba45
// converted property getter: - (id)songs;	// 0x3201a951
@end

