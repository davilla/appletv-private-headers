/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionOption.h"

@class AVWeakReference, AVAssetTrack;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
	AVAssetTrack *_track;	// 8 = 0x8
	AVWeakReference *_weakReferenceToGroup;	// 12 = 0xc
	BOOL _displaysNonForcedSubtitles;	// 16 = 0x10
}
@property(readonly, assign) BOOL displaysNonForcedSubtitles;	// G=0x30b3051d; converted property
@property(readonly, retain) AVAssetTrack *track;	// G=0x30b3050d; converted property
- (id)initWithAssetTrack:(id)assetTrack group:(id)group;	// 0x30b30035
- (id)initWithAssetTrack:(id)assetTrack group:(id)group displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x30b2ff75
- (id)_ancillaryDescription;	// 0x30b301b5
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x30b307b9
- (id)availableMetadataFormats;	// 0x30b30779
- (id)commonMetadata;	// 0x30b30759
- (void)dealloc;	// 0x30b30059
// converted property getter: - (BOOL)displaysNonForcedSubtitles;	// 0x30b3051d
- (id)group;	// 0x30b30195
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x30b30681
- (unsigned)hash;	// 0x30b3015d
- (BOOL)isEqual:(id)equal;	// 0x30b300b9
- (BOOL)isPlayable;	// 0x30b30715
- (id)locale;	// 0x30b30739
- (id)mediaSubTypes;	// 0x30b3056d
- (id)mediaType;	// 0x30b3054d
- (id)metadataForFormat:(id)format;	// 0x30b30799
- (id)propertyList;	// 0x30b30961
// converted property getter: - (id)track;	// 0x30b3050d
- (int)trackID;	// 0x30b3052d
@end

