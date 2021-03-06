/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class MCAudioPlaylist, NSMutableDictionary, NSMutableArray, MCMontage, MCPlug, MPPlaylistInternal;
@protocol MPAudioSupport;

@interface MPAudioPlaylist : NSObject <NSCopying, NSCoding> {
@private
	NSMutableArray *_songs;	// 4 = 0x4
	MCAudioPlaylist *_audioPlaylist;	// 8 = 0x8
	MCPlug *_plug;	// 12 = 0xc
	NSObject<MPAudioSupport> *_parentObject;	// 16 = 0x10
	MCMontage *_montage;	// 20 = 0x14
	NSMutableDictionary *_attributes;	// 24 = 0x18
	MPPlaylistInternal *_internal;	// 28 = 0x1c
}
@property(retain) MCAudioPlaylist *audioPlaylist;	// G=0x3201d7b9; S=0x3201d9fd; converted property
@property(assign) double duckInDuration;	// G=0x3201d539; S=0x3201d559; @dynamic
@property(assign) float duckLevel;	// G=0x3201d6f1; S=0x3201d711; @dynamic
@property(assign) double duckOutDuration;	// G=0x3201d615; S=0x3201d635; @dynamic
@property(assign) double duration;	// G=0x3201d301; S=0x3201dff1; converted property
@property(assign) double fadeInDuration;	// G=0x3201d321; S=0x3201d341; @dynamic
@property(assign) double fadeOutDuration;	// G=0x3201d3fd; S=0x3201d41d; @dynamic
@property(retain) MCMontage *montage;	// G=0x3201d9dd; S=0x3201d9ed; converted property
@property(retain) id parentObject;	// G=0x3201d2f1; S=0x3201df95; converted property
@property(readonly, retain) NSMutableArray *songs;	// G=0x3201cb31; converted property
+ (id)audioPlaylist;	// 0x3201c121
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3201c0f1
- (id)init;	// 0x3201c159
- (id)initWithCoder:(id)coder;	// 0x3201c681
- (void)addSong:(id)song;	// 0x3201cb41
- (void)addSongs:(id)songs;	// 0x3201cb9d
// converted property getter: - (id)audioPlaylist;	// 0x3201d7b9
- (void)cleanup;	// 0x3201d9cd
- (void)copySongs:(id)songs;	// 0x3201d8d9
- (void)copyStruct:(id)aStruct;	// 0x3201d7c9
- (id)copyWithZone:(NSZone *)zone;	// 0x3201c9d9
- (int)countOfSongs;	// 0x3201e30d
- (void)dealloc;	// 0x3201c329
- (id)description;	// 0x3201ca5d
// declared property getter: - (double)duckInDuration;	// 0x3201d539
// declared property getter: - (float)duckLevel;	// 0x3201d6f1
// declared property getter: - (double)duckOutDuration;	// 0x3201d615
// converted property getter: - (double)duration;	// 0x3201d301
- (void)encodeWithCoder:(id)coder;	// 0x3201c401
// declared property getter: - (double)fadeInDuration;	// 0x3201d321
// declared property getter: - (double)fadeOutDuration;	// 0x3201d3fd
- (void)finalize;	// 0x3201c2fd
- (void)insertObject:(id)object inSongsAtIndex:(int)index;	// 0x3201e34d
- (void)insertSongs:(id)songs atIndex:(int)index;	// 0x3201cbdd
// converted property getter: - (id)montage;	// 0x3201d9dd
- (void)moveSongsFromIndices:(id)indices toIndex:(int)index;	// 0x3201d1f1
- (id)objectInSongsAtIndex:(int)index;	// 0x3201e32d
- (id)parentDocument;	// 0x3201e1a5
// converted property getter: - (id)parentObject;	// 0x3201d2f1
- (void)removeAllSongs;	// 0x3201d191
- (void)removeObjectFromSongsAtIndex:(int)index;	// 0x3201e38d
- (void)removeSongsAtIndices:(id)indices;	// 0x3201cf65
- (void)replaceObjectInSongsAtIndex:(int)index withObject:(id)object;	// 0x3201e3c9
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x3201d9fd
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x3201d559
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x3201d711
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x3201d635
// converted property setter: - (void)setDuration:(double)duration;	// 0x3201dff1
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x3201d341
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x3201d41d
// converted property setter: - (void)setMontage:(id)montage;	// 0x3201d9ed
// converted property setter: - (void)setParentObject:(id)object;	// 0x3201df95
- (void)setPlug:(id)plug;	// 0x3201ddc5
// converted property getter: - (id)songs;	// 0x3201cb31
@end

