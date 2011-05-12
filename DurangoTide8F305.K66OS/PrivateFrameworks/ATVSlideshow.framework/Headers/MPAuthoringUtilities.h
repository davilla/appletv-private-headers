/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPAuthoringUtilities : NSObject {
}
+ (id)absolutePathAtIndex:(int)index inPaths:(id)paths withOptions:(id)options;	// 0x3321b325
+ (id)absolutePathForPath:(id)path withOptions:(id)options;	// 0x3321b081
+ (id)absolutePathsForPaths:(id)paths withOptions:(id)options;	// 0x3321b48d
+ (BOOL)alignToBeatsFromOptions:(id)options;	// 0x332192ad
+ (BOOL)alwaysIncludeLastTransitionFromOptions:(id)options;	// 0x3321b0f9
+ (float)aspectRatioFromOptions:(id)options;	// 0x33219aad
+ (double)audioDurationFromOptions:(id)options;	// 0x33218e6d
+ (int)audioScalingModeFromOptions:(id)options;	// 0x33218ead
+ (CGColorRef)backgroundColorFromOptions:(id)options;	// 0x3321950d
+ (double)beatFactorFromOptions:(id)options;	// 0x332194c5
+ (BOOL)canRepeatPresets:(id)presets;	// 0x332197e5
+ (BOOL)collectVersionInformationFromOptions:(id)options;	// 0x33219c39
+ (id)colorSchemeFromOptions:(id)options;	// 0x3321ab61
+ (BOOL)createBeatsFromOptions:(id)options;	// 0x3321931d
+ (int)croppingModeFromOptions:(id)options;	// 0x33218ee9
+ (double)distanceBetween:(CGPoint)between andPoint:(CGPoint)point;	// 0x3321b6e1
+ (double)durationPerEffectFromOptions:(id)options;	// 0x3321969d
+ (id)effectListFromOptions:(id)options;	// 0x33219aed
+ (float)effectPadding:(id)padding;	// 0x3321a489
+ (double)exportTransitionDurationFromOptions:(id)options;	// 0x3321a59d
+ (id)exportTransitionIDFromOptions:(id)options;	// 0x3321a531
+ (BOOL)fadeOutAudioFromOptions:(id)options;	// 0x3321b045
+ (double)fadeOutDurationFromOptions:(id)options;	// 0x3321b39d
+ (id)gapInformationFromOptions:(id)options;	// 0x3321b591
+ (id)idFromPresetID:(id)presetID;	// 0x3321a109
+ (BOOL)ignoreClusteringForImages:(id)images withOptions:(id)options;	// 0x33218b71
+ (id)ignoreTransitionListFromOptions:(id)options;	// 0x33219d29
+ (id)introEffectIDFromOptions:(id)options;	// 0x33219f55
+ (CGPoint)kbCenterPointFromRect:(CGRect)rect;	// 0x3321b5fd
+ (int)kenBurnsLevelFromOptions:(id)options;	// 0x332190cd
+ (float)kenBurnsLikelihoodFromOptions:(id)options;	// 0x33218f95
+ (float)kenBurnsPanFactorFromOptions:(id)options;	// 0x33219091
+ (float)kenBurnsZoomFactorFromOptions:(id)options;	// 0x33219b79
+ (BOOL)layerCanSkipScaleCalculation:(id)calculation withOptions:(id)options;	// 0x33219175
+ (id)layerDescriptionForLayerWithZIndex:(int)zindex forStyle:(id)style;	// 0x3321a619
+ (BOOL)layerHasImagesFromOptions:(id)options;	// 0x3321a74d
+ (int)layerIndexFromOptions:(id)options;	// 0x33218e31
+ (double)layerOffsetFromOptions:(id)options;	// 0x33219751
+ (double)layerTimeScaleFromOptions:(id)options;	// 0x3321940d
+ (id)layerTypeFromOptions:(id)options;	// 0x3321b1b1
+ (BOOL)lockTransitionDurationFromOptions:(id)options;	// 0x33219359
+ (id)loopTransitionIDFromOptions:(id)options;	// 0x3321a4c5
+ (BOOL)matchPhasesWithTransitionFromOptions:(id)options;	// 0x332195e9
+ (float)maxKenBurnsZoomFromOptions:(id)options;	// 0x33219051
+ (double)maximumTransitionDurationFromOptions:(id)options;	// 0x3321a92d
+ (double)minimumEffectDurationFromOptions:(id)options;	// 0x3321a9ed
+ (double)minimumTransitionDurationFromOptions:(id)options;	// 0x3321a86d
+ (float)movieVolumeFromOptions:(id)options;	// 0x3321ab25
+ (float)multilineSizeFactorFromOptions:(id)options;	// 0x3321b719
+ (int)numberOfLayersFromOptions:(id)options;	// 0x3321a801
+ (id)outroEffectIDFromOptions:(id)options;	// 0x33219dd5
+ (BOOL)padTextOnlyEffects:(id)effects;	// 0x3321aae9
+ (BOOL)pickEffectsEvenlyByIDWithOptions:(id)options;	// 0x3321ae05
+ (BOOL)pickTransitionsEvenlyByIDWithOptions:(id)options;	// 0x3321ad3d
+ (int)presentationOrderFromOptions:(id)options;	// 0x3321b135
+ (id)presetIDFromPresetID:(id)presetID;	// 0x3321a175
+ (unsigned)randomSeedFromOptions:(id)options;	// 0x33219a3d
+ (NSRange)reconfigureRangeFromOptions:(id)options;	// 0x3321b229
+ (CGRect)rectToFitIn:(CGRect)anIn withAspectRatio:(float)aspectRatio;	// 0x3321b5b5
+ (int)regionOfInterestPickModeFromOptions:(id)options;	// 0x3321b285
+ (int)reorderModeFromOptions:(id)options;	// 0x3321ac45
+ (BOOL)repeatTransitionsFromOptions:(id)options;	// 0x33219c75
+ (BOOL)replaceAudioPlaylistFromOptions:(id)options;	// 0x332194d1
+ (BOOL)requestGeneratedImagesFromOptions:(id)options;	// 0x3321af41
+ (BOOL)scaleOutroEffectFromOptions:(id)options;	// 0x33219ea1
+ (BOOL)shouldComputeFramesFromOptions:(id)options;	// 0x3321a1c5
+ (BOOL)shouldComputeLoopTransitionFromOptions:(id)options;	// 0x3321a3dd
+ (BOOL)shouldComputeSlideFiltersFromOptions:(id)options;	// 0x3321a319
+ (BOOL)shouldComputeTransitionsFromOptions:(id)options;	// 0x3321a255
+ (BOOL)shouldDuckMoviesFromOptions:(id)options;	// 0x3321b0bd
+ (id)styleFromOptions:(id)options;	// 0x33218dfd
+ (id)subtitlesFromOptions:(id)options;	// 0x3321b301
+ (id)titleEffectFromOptions:(id)options;	// 0x33219fe5
+ (double)transitionDurationFromOptions:(id)options;	// 0x33219899
+ (id)transitionListFromOptions:(id)options;	// 0x33219d4d
+ (id)urlsFromPaths:(id)paths;	// 0x33218d21
+ (BOOL)useBestAspectRatioFromOptions:(id)options;	// 0x3321994d
+ (BOOL)useDefaultAudioFromOptions:(id)options;	// 0x33219a01
+ (BOOL)useROIAspectRatioFromOptions:(id)options;	// 0x3321acc1
+ (BOOL)useROIFromOptions:(id)options;	// 0x33219989
+ (BOOL)useTitleEffectFromOptions:(id)options;	// 0x332199c5
+ (BOOL)useTransitionLayoutTagsWithOptions:(id)options;	// 0x3321af7d
+ (BOOL)useUniformDurations:(id)durations;	// 0x3321aaad
+ (NSRange)videoPathsRangeFromOptions:(id)options;	// 0x3321b431
@end

