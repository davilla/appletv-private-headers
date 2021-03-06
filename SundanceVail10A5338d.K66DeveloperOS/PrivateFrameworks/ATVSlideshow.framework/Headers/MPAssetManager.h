/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPAssetManager : NSObject {
}
+ (char *)convertCGImageToBuffer:(CGImageRef)buffer;	// 0x33360561
+ (char *)convertCGImageToBufferUsingDataProvider:(CGImageRef)bufferUsingDataProvider;	// 0x333607cd
+ (char *)convertCGImageToBufferUsingRGBDevice:(CGImageRef)bufferUsingRGBDevice;	// 0x333606d5
+ (FaceCoreAPI *)faceCoreAPI;	// 0x333602f1
+ (void)releaseSharedManager;	// 0x3335f841
+ (id)sharedManager;	// 0x3335f751
- (id)init;	// 0x3335f941
- (id)absolutePathFromPath:(id)path;	// 0x33360279
- (void)addROIInfo:(id)info forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x333602c5
- (void)addRegionOfInterest:(CGRect)interest forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x333602c9
- (id)altitudeForAssetAtPath:(id)path;	// 0x3335fa11
- (void)cacheAttributes:(id)attributes forPath:(id)path;	// 0x333602ed
- (id)creationDateForAssetAtPath:(id)path;	// 0x3335fa01
- (void)dealloc;	// 0x3335f96d
- (double)durationForAssetAtPath:(id)path;	// 0x3335f9a1
- (void)gatherMetadataForAssetAtPath:(id)path;	// 0x3335f99d
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x3335fa21
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x3335fa19
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x3335fa1d
- (id)keywordsForAssetAtPath:(id)path;	// 0x3335fa05
- (id)latitudeForAssetAtPath:(id)path;	// 0x3335fa09
- (id)locationHierarchyForAssetAtPath:(id)path;	// 0x3335fa15
- (id)longitudeForAssetAtPath:(id)path;	// 0x3335fa0d
- (unsigned)mediaTypeForAssetAtPath:(id)path;	// 0x3335fa25
- (void)moveRegionOfInterestWithPath:(id)path fromIndex:(int)index toIndex:(int)index3 saveToCache:(BOOL)cache;	// 0x333602dd
- (double)posterTimeForAssetAtPath:(id)path;	// 0x33360281
- (id)prepareInfoForAssetsAtPaths:(id)paths;	// 0x333602e9
- (CGRect)regionOfInterestAtIndex:(int)index forAssetAtPath:(id)path;	// 0x333602a1
- (id)regionsOfInterestForAsset:(CGImageRef)asset;	// 0x3335faad
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x3335fecd
- (void)removeRegionOfInterestAtIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x333602e5
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x3335f9e9
- (id)roiInfoAtIndex:(int)index forAssetAtPath:(id)path;	// 0x3336029d
- (void)setForceOrderForRegionsOfInterest:(BOOL)interest forPath:(id)path saveToCache:(BOOL)cache;	// 0x333602e1
- (void)setROIInfo:(id)info atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x333602cd
- (void)setRegionOfInterest:(CGRect)interest atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x333602d1
- (void)setSavesToDisk:(BOOL)disk;	// 0x3335f999
- (double)startTimeForAssetAtPath:(id)path;	// 0x3335f9b9
- (double)stopTimeForAssetAtPath:(id)path;	// 0x3335f9d1
- (void)tryToSaveCache;	// 0x33360299
- (void)updateROIInfoAtIndex:(int)index atPath:(id)path to:(id)to saveToCache:(BOOL)cache;	// 0x333602d5
- (void)updateRegionOfInterestAtIndex:(int)index atPath:(id)path to:(CGRect)to saveToCache:(BOOL)cache;	// 0x333602d9
@end

