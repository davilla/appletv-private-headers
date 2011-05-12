/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary;

@interface MPStyleManager : NSObject {
	NSMutableDictionary *mStyles;	// 4 = 0x4
}
+ (void)loadStyleManagerWithPaths:(id)paths;	// 0x3326ab5d
+ (void)releaseSharedManager;	// 0x3326975d
+ (id)sharedManager;	// 0x33269715
- (id)initWithPaths:(id)paths;	// 0x3326c0ed
- (id)_containerDescriptionForLayerAtIndex:(int)index ofStyle:(id)style;	// 0x3326c9d1
- (id)allStyleIDs;	// 0x332697e1
- (int)antialiasLevelForStyleID:(id)styleID;	// 0x3326af89
- (BOOL)authorOnAspectRatioChangeForStyleID:(id)styleID;	// 0x3326aaa9
- (CGColorRef)backgroundCGColorForStyleID:(id)styleID;	// 0x33269ca1
- (id)backgroundColorLayerForStyleID:(id)styleID;	// 0x3326bfb9
- (double)basePeriodForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x3326be75
- (BOOL)canCancelAuthoringForStyleID:(id)styleID;	// 0x3326c021
- (void)dealloc;	// 0x3326978d
- (int)defaultAutoKenBurnsLevelForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x3326ba29
- (int)defaultAutoKenBurnsLevelForZIndex:(int)zindex ofStyle:(id)style;	// 0x3326b751
- (float)defaultAutoKenBurnsLikelihoodForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x3326b89d
- (float)defaultAutoKenBurnsLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x3326b5fd
- (id)defaultColorSchemeForStyleID:(id)styleID;	// 0x3326aa61
- (double)defaultEffectDurationForLayer:(int)layer ofStyle:(id)style;	// 0x3326bdb5
- (float)defaultFilterLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x3326b4d5
- (id)defaultPositionForZIndex:(int)zindex ofStyle:(id)style;	// 0x3326b3c1
- (CGSize)defaultSizeForZIndex:(int)zindex ofStyle:(id)style;	// 0x3326b1d5
- (double)defaultTransitionDurationForLayer:(int)layer ofStyle:(id)style;	// 0x3326be15
- (id)demoDocumentWithImages:(id)images properties:(id)properties count:(int)count options:(id)options;	// 0x3326ac01
- (id)descriptionForStyleID:(id)styleID;	// 0x33269829
- (float)displayDurationFactorForEffectID:(id)effectID inStyleID:(id)styleID;	// 0x3326b11d
- (float)displayDurationFactorForStyleID:(id)styleID;	// 0x3326afd1
- (BOOL)easeKenBurnsForStyleID:(id)styleID;	// 0x3326b191
- (id)effectIDsForStyleID:(id)styleID;	// 0x33269d59
- (id)effectPresetIDsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x3326bbad
- (id)effectPresetIDsForStyleID:(id)styleID;	// 0x33269a61
- (id)effectPresetsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x33269b71
- (id)framesForStyleID:(id)styleID;	// 0x33269951
- (BOOL)hasImagesForLayerID:(id)layerID forStyleID:(id)styleID;	// 0x3326c05d
- (int)indexOfMainLayerForStyleID:(id)styleID;	// 0x3326a241
- (int)indexOfTitleEffectLayerForStyleID:(id)styleID;	// 0x3326a2c1
- (id)interstitialEffectLayoutForStyleID:(id)styleID;	// 0x3326a3dd
- (id)interstitialEffectLayoutsForStyleID:(id)styleID;	// 0x3326a3b1
- (id)layerIDForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x3326bebd
- (id)localizedNameForStyleID:(id)styleID;	// 0x33269879
- (BOOL)machineMeetsRequirementsForStyleID:(id)styleID;	// 0x3326aa01
- (int)mediaPresentationOrderForStyleID:(id)styleID;	// 0x3326abbd
- (double)minimumDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x3326a7d5
- (double)minimumEffectDurationForStyleID:(id)styleID;	// 0x3326a8a1
- (double)posterTimeForStyleID:(id)styleID;	// 0x3326af41
- (id)previewPathForStyleID:(id)styleID;	// 0x33269921
- (int)regionOfInterestPickModeForStyleID:(id)styleID;	// 0x3326bfe5
- (double)shortestDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x3326a6a9
- (double)shortestEffectDurationForStyleID:(id)styleID;	// 0x3326a4a5
- (id)songPathsForStyleID:(id)styleID;	// 0x3326a1f9
- (int)subtitleOrderForStyleID:(id)styleID;	// 0x3326ab01
- (BOOL)supportsRandomTransitionForStyleID:(id)styleID;	// 0x3326aa05
- (id)thumbnailPathForStyleID:(id)styleID;	// 0x332698f1
- (id)titleEffectLayoutForStyleID:(id)styleID;	// 0x3326a441
- (id)titleEffectLayoutsForStyleID:(id)styleID;	// 0x3326a385
- (id)transitionsForStyleID:(id)styleID;	// 0x33269fb1
- (id)versionOfStyleID:(id)styleID;	// 0x33269849
@end

