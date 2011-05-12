/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, AVAssetInternal;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetInternal *_assetInternal;	// 4 = 0x4
}
@property(readonly, assign) NSArray *availableChapterLocales;	// G=0x34732381; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x3473340d; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x3473337d; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x34732d99; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x347333e1; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x34732d75; 
- (id)init;	// 0x34733211
- (CFURLRef)_URL;	// 0x34732379
- (id)_assetInspector;	// 0x3473334d
- (id)_assetInspectorLoader;	// 0x34732375
- (id)_comparisonToken;	// 0x347330a9
- (id)_firstTrackGroupWithMediaType:(id)mediaType;	// 0x347338e1
- (OpaqueFigFormatReader *)_formatReader;	// 0x3473331d
- (OpaqueFigFormatReaderLoader *)_formatReaderLoader;	// 0x34732e61
- (BOOL)_isReadyForBasicInspection;	// 0x34732df1
- (BOOL)_isStreaming;	// 0x34732dbd
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x34732e31
- (void)_serverHasDied;	// 0x34732ab1
- (void)_tracksDidChange;	// 0x3473237d
- (id)_weakReference;	// 0x34732359
- (id)alternateTrackGroups;	// 0x34732cc9
- (id)audioAlternatesTrackGroup;	// 0x34732d0d
// declared property getter: - (id)availableChapterLocales;	// 0x34732381
- (id)availableMetadataFormats;	// 0x34732c11
- (void)cancelLoading;	// 0x34732e91
- (id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;	// 0x34732385
- (id)commonMetadata;	// 0x34732c35
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x34732ae1
- (id)copyWithZone:(NSZone *)zone;	// 0x347331fd
- (void)dealloc;	// 0x347330ed
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3473340d
- (BOOL)hasProtectedContent;	// 0x34732a8d
- (unsigned)hash;	// 0x34732f59
- (BOOL)isComposable;	// 0x347329b1
- (BOOL)isEqual:(id)equal;	// 0x34732fd5
- (BOOL)isExportable;	// 0x34732a1d
- (BOOL)isPlayable;	// 0x34732a55
- (BOOL)isReadable;	// 0x347329e5
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x34732eb5
- (id)lyrics;	// 0x34732c59
- (id)metadataForFormat:(id)format;	// 0x34732be9
// declared property getter: - (CGSize)naturalSize;	// 0x3473337d
- (int)naturalTimeScale;	// 0x34732d51
// declared property getter: - (float)preferredRate;	// 0x34732d99
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x347333e1
// declared property getter: - (float)preferredVolume;	// 0x34732d75
- (BOOL)providesPreciseDurationAndTiming;	// 0x34732d2d
- (void)release;	// 0x3473314d
- (id)retain;	// 0x347331a5
- (int)statusOfValueForKey:(id)key;	// 0x34732f41
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x34732efd
- (id)subtitleAlternatesTrackGroup;	// 0x34732ced
- (id)trackGroups;	// 0x34733a1d
- (id)trackReferences;	// 0x34732ca5
- (id)trackWithTrackID:(int)trackID;	// 0x34733825
- (id)tracks;	// 0x347332ed
- (id)tracksWithMediaCharacteristic:(id)mediaCharacteristic;	// 0x34732b39
- (id)tracksWithMediaType:(id)mediaType;	// 0x34732b91
- (int)unusedTrackID;	// 0x347590e9
@end

