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

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetTrackInternal *_track;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x34737779; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x3473774d; 
+ (id)keyPathsForValuesAffectingTimeRange;	// 0x3473713d
- (id)init;	// 0x347377fd
- (id)_assetTrackInspector;	// 0x34737109
- (BOOL)_hasMultipleNonEmptyEdits;	// 0x3475df79
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x347377d9
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x34737821
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x347377b9
// declared property getter: - (id)asset;	// 0x34737779
- (id)availableMetadataFormats;	// 0x34737259
- (id)commonMetadata;	// 0x34737285
- (id)copyWithZone:(NSZone *)zone;	// 0x347377a5
- (void)dealloc;	// 0x3473797d
- (id)description;	// 0x347379fd
- (float)estimatedDataRate;	// 0x3473740d
- (id)extendedLanguageTag;	// 0x347373b5
- (void)finalize;	// 0x3473793d
- (id)formatDescriptions;	// 0x347376dd
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x34737465
- (unsigned)hash;	// 0x34737165
- (BOOL)isEnabled;	// 0x347376ad
- (BOOL)isEqual:(id)equal;	// 0x34737191
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x347371fd
- (BOOL)isSelfContained;	// 0x3473767d
- (id)languageCode;	// 0x347373e1
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x34737131
- (id)mediaType;	// 0x34737709
- (id)metadataForFormat:(id)format;	// 0x3473722d
- (CGSize)naturalSize;	// 0x34737b0d
- (int)naturalTimeScale;	// 0x34737439
- (float)nominalFrameRate;	// 0x34737335
- (CGAffineTransform)preferredTransform;	// 0x34737add
- (float)preferredVolume;	// 0x34737361
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x34737a7d
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x347372b1
- (id)segments;	// 0x34737309
- (int)statusOfValueForKey:(id)key;	// 0x34737735
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x34737125
- (XXStruct_yD8eWC)timeRange;	// 0x34737b3d
- (long long)totalSampleDataLength;	// 0x34737651
// declared property getter: - (int)trackID;	// 0x3473774d
@end

