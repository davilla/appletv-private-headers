/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPUtilities : NSObject {
}
+ (CGColorRef)CGColorFromString:(id)string;	// 0x33d05e49
+ (CGColorRef)CGColorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x33d05ff9
+ (id)animationsPathsFromFilterID:(id)filterID andPresetID:(id)anId;	// 0x33d03865
+ (float)aspectRatioOfLayerable:(id)layerable relativeToAspectRatio:(float)aspectRatio;	// 0x33d058e1
+ (id)attributesFormMPFilter:(id)filter atTime:(double)time;	// 0x33d032f9
+ (id)attributesFromAnimationPathsInFilter:(id)filter atTime:(double)time;	// 0x33d033c9
+ (CGColorRef)blackCGColor;	// 0x33d06071
+ (CGPoint)computePointValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(CGPoint)to;	// 0x33d02885
+ (float)computeScalarValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(float)to context:(id)context;	// 0x33d01f69
+ (id)computeVectorValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(id)to;	// 0x33d02b55
+ (id)createMCAction:(id)action forPlug:(id)plug withKey:(id)key;	// 0x33d0676d
+ (id)createPlugInContainer:(id)container forLayer:(id)layer key:(id)key inDocument:(id)document;	// 0x33d06965
+ (id)createPlugPathToContainer:(id)container inDocument:(id)document;	// 0x33d06121
+ (id)createPlugPathToObject:(id)object inDocument:(id)document;	// 0x33d06385
+ (id)defaultAttributesForMPFilter:(id)mpfilter;	// 0x33d032f1
+ (id)defaultAttributesForMPTransition:(id)mptransition;	// 0x33d032f5
+ (id)effectContainersForTime:(double)time inDocument:(id)document;	// 0x33d04589
+ (id)effectForMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x33d04791
+ (id)executeScript:(id)script withHeader:(id)header andAttributes:(id)attributes;	// 0x33d05a69
+ (id)idOfCombinedID:(id)combinedID;	// 0x33d054e5
+ (id)layerForPlug:(id)plug inDocument:(id)document;	// 0x33d0540d
+ (CGColorSpaceRef)newColorSpaceForDevice;	// 0x33d06065
+ (id)parentsOfObject:(id)object;	// 0x33d06c99
+ (BOOL)pathIsRelative:(id)relative;	// 0x33d06741
+ (id)placesPinLabelForSlideAssetPath:(id)slideAssetPath inDocument:(id)document;	// 0x33d0557d
+ (id)presetIDOfCombinedID:(id)combinedID;	// 0x33d0552d
+ (void)registerUndoForDocument:(id)document toReceiver:(id)receiver withSelector:(SEL)selector object:(id)object;	// 0x33d060e5
+ (CGPoint)scaledFilterPresetPointValue:(CGPoint)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x33d02f05
+ (float)scaledFilterPresetScalarValue:(float)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x33d02e35
+ (XXStruct_Te64nB)scaledFilterPresetVectorValue:(XXStruct_Te64nB)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x33d0310d
+ (id)slideForElementID:(id)elementID withMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x33d05295
+ (id)slideForPath:(id)path inDocument:(id)document;	// 0x33d04d59
+ (id)slideForSlide:(id)slide inDocument:(id)document;	// 0x33d04c9d
+ (id)stringFromCGColor:(CGColorRef)cgcolor;	// 0x33d05f95
+ (id)stringWithNewUUID;	// 0x33d05e11
+ (void)syncAnimationPaths:(id)paths;	// 0x33d03f4d
+ (id)textForElementID:(id)elementID withMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x33d051b9
+ (id)textsDisplayedAtTime:(double)time inDocument:(id)document;	// 0x33d04f2d
+ (int)timeOffSetFromString:(id)string;	// 0x33d01c71
+ (double)transformTime:(double)time forAnimationPath:(id)animationPath;	// 0x33d01d81
@end

