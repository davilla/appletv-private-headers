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
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) OpaqueFigPlaybackItem *playbackItem;	// G=0x346f5d9d; S=0x346f6f05; 
@property(readonly, retain) NSArray *trackIDs;	// G=0x346f5db1; converted property
- (id)initWithPlaybackItem:(OpaqueFigPlaybackItem *)playbackItem trackIDs:(id)ids;	// 0x346f6d89
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x346f5d9d
// declared property setter: - (void)_setPlaybackItem:(OpaqueFigPlaybackItem *)item;	// 0x346f6f05
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x346f6eb5
- (id)availableMetadataFormats;	// 0x346f60a5
- (id)commonMetadata;	// 0x346f6089
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x346f5dc1
- (void)dealloc;	// 0x346f7029
- (XXStruct_pwHToB)duration;	// 0x346f6e5d
- (void)finalize;	// 0x346f6fe9
- (unsigned)hash;	// 0x346f6f31
- (BOOL)isEqual:(id)equal;	// 0x346f6f79
- (id)lyrics;	// 0x346f6069
- (id)metadataForFormat:(id)format;	// 0x346f60c1
- (CGSize)naturalSize;	// 0x346f6e0d
- (BOOL)providesPreciseDurationAndTiming;	// 0x346f5dad
- (long)trackCount;	// 0x346f6015
// converted property getter: - (id)trackIDs;	// 0x346f5db1
@end
