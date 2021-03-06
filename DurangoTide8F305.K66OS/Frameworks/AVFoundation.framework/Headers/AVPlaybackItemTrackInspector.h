/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetTrackInspector.h"
#import "AVFoundation-Structs.h"

@class AVAsset;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
	OpaqueFigPlaybackItem *_playbackItem;	// 4 = 0x4
	int _trackID;	// 8 = 0x8
	unsigned _mediaType;	// 12 = 0xc
	AVAsset *_asset;	// 16 = 0x10
}
@property(readonly, retain) AVAsset *asset;	// G=0x3478520d; converted property
@property(readonly, assign) int trackID;	// G=0x3478521d; converted property
- (id)init;	// 0x3478537d
- (XXStruct_pwHToB)_CMTimeForProperty:(CFStringRef)property;	// 0x34785c5d
- (long)_SInt32ForProperty:(CFStringRef)property;	// 0x34785ba5
- (unsigned char)_booleanForProperty:(CFStringRef)property;	// 0x34785cd9
- (float)_floatForProperty:(CFStringRef)property;	// 0x34785c01
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x34785359
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x34786449
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x34785339
- (long long)_longLongForProperty:(CFStringRef)property;	// 0x3478595d
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x3478522d
- (id)_stringForProperty:(CFStringRef)property;	// 0x3478696d
// converted property getter: - (id)asset;	// 0x3478520d
- (id)copyWithZone:(NSZone *)zone;	// 0x34785325
- (void)dealloc;	// 0x34785a0d
- (float)estimatedDataRate;	// 0x347852d1
- (id)extendedLanguageTag;	// 0x34785255
- (void)finalize;	// 0x347859cd
- (id)formatDescriptions;	// 0x34785d39
- (unsigned)hash;	// 0x347862a9
- (BOOL)isEnabled;	// 0x34785301
- (BOOL)isEqual:(id)equal;	// 0x34786189
- (BOOL)isSelfContained;	// 0x3478523d
- (id)languageCode;	// 0x34785251
- (id)mediaType;	// 0x347869c9
- (CGSize)naturalSize;	// 0x34786a21
- (int)naturalTimeScale;	// 0x34785249
- (float)nominalFrameRate;	// 0x347852b1
- (CGAffineTransform)preferredTransform;	// 0x34785f6d
- (float)preferredVolume;	// 0x34785259
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3478526d
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x34785261
- (id)segments;	// 0x34785291
- (XXStruct_yD8eWC)timeRange;	// 0x34785dbd
- (long long)totalSampleDataLength;	// 0x34785241
// converted property getter: - (int)trackID;	// 0x3478521d
@end

