/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
	OpaqueFigPlaybackItem *_playbackItem;	// 4 = 0x4
	NSArray *_trackIDs;	// 8 = 0x8
}
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) OpaqueFigPlaybackItem *playbackItem;	// G=0x32358d9d; S=0x32359f05; 
@property(readonly, retain) NSArray *trackIDs;	// G=0x32358db1; converted property
- (id)initWithPlaybackItem:(OpaqueFigPlaybackItem *)playbackItem trackIDs:(id)ids;	// 0x32359d89
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x32358d9d
// declared property setter: - (void)_setPlaybackItem:(OpaqueFigPlaybackItem *)item;	// 0x32359f05
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x32359eb5
- (id)availableMetadataFormats;	// 0x323590a5
- (id)commonMetadata;	// 0x32359089
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x32358dc1
- (void)dealloc;	// 0x3235a029
- (XXStruct_pwHToB)duration;	// 0x32359e5d
- (void)finalize;	// 0x32359fe9
- (unsigned)hash;	// 0x32359f31
- (BOOL)isEqual:(id)equal;	// 0x32359f79
- (id)lyrics;	// 0x32359069
- (id)metadataForFormat:(id)format;	// 0x323590c1
- (CGSize)naturalSize;	// 0x32359e0d
- (BOOL)providesPreciseDurationAndTiming;	// 0x32358dad
- (long)trackCount;	// 0x32359015
// converted property getter: - (id)trackIDs;	// 0x32358db1
@end

