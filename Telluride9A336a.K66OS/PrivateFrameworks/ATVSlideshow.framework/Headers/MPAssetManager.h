/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MPAssetManager : NSObject {
}
+ (void)releaseSharedManager;	// 0x34264021
+ (id)sharedManager;	// 0x34263fd9
- (id)init;	// 0x3426404d
- (id)absolutePathFromPath:(id)path;	// 0x34264125
- (void)addROIInfo:(id)info forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x34264169
- (void)addRegionOfInterest:(CGRect)interest forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x3426416d
- (id)altitudeForAssetAtPath:(id)path;	// 0x34264111
- (void)cacheAttributes:(id)attributes forPath:(id)path;	// 0x34264191
- (id)creationDateForAssetAtPath:(id)path;	// 0x34264101
- (void)dealloc;	// 0x34264079
- (double)durationForAssetAtPath:(id)path;	// 0x342640ad
- (void)gatherMetadataForAssetAtPath:(id)path;	// 0x342640a9
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x3426411d
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x34264115
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x34264119
- (id)keywordsForAssetAtPath:(id)path;	// 0x34264105
- (id)latitudeForAssetAtPath:(id)path;	// 0x34264109
- (id)longitudeForAssetAtPath:(id)path;	// 0x3426410d
- (void)moveRegionOfInterestWithPath:(id)path fromIndex:(int)index toIndex:(int)index3 saveToCache:(BOOL)cache;	// 0x34264181
- (double)posterTimeForAssetAtPath:(id)path;	// 0x34264129
- (id)prepareInfoForAssetsAtPaths:(id)paths;	// 0x3426418d
- (CGRect)regionOfInterestAtIndex:(int)index forAssetAtPath:(id)path;	// 0x34264145
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x34264121
- (void)removeRegionOfInterestAtIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x34264189
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x342640e9
- (id)roiInfoAtIndex:(int)index forAssetAtPath:(id)path;	// 0x34264141
- (void)setForceOrderForRegionsOfInterest:(BOOL)interest forPath:(id)path saveToCache:(BOOL)cache;	// 0x34264185
- (void)setROIInfo:(id)info atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x34264171
- (void)setRegionOfInterest:(CGRect)interest atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x34264175
- (void)setSavesToDisk:(BOOL)disk;	// 0x342640a5
- (double)startTimeForAssetAtPath:(id)path;	// 0x342640c1
- (double)stopTimeForAssetAtPath:(id)path;	// 0x342640d5
- (void)tryToSaveCache;	// 0x3426413d
- (void)updateROIInfoAtIndex:(int)index atPath:(id)path to:(id)to saveToCache:(BOOL)cache;	// 0x34264179
- (void)updateRegionOfInterestAtIndex:(int)index atPath:(id)path to:(CGRect)to saveToCache:(BOOL)cache;	// 0x3426417d
@end

