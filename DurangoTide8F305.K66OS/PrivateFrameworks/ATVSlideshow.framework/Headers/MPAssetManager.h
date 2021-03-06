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
+ (void)releaseSharedManager;	// 0x331e7731
+ (id)sharedManager;	// 0x331e76e9
- (id)init;	// 0x331e7761
- (id)absolutePathFromPath:(id)path;	// 0x331e7839
- (void)addRegionOfInterest:(CGRect)interest forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x331e786d
- (id)altitudeForAssetAtPath:(id)path;	// 0x331e7825
- (void)cacheAttributes:(id)attributes forPath:(id)path;	// 0x331e7889
- (id)creationDateForAssetAtPath:(id)path;	// 0x331e7815
- (void)dealloc;	// 0x331e7791
- (double)durationForAssetAtPath:(id)path;	// 0x331e77c5
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x331e7831
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x331e7829
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x331e782d
- (id)keywordsForAssetAtPath:(id)path;	// 0x331e7819
- (id)latitudeForAssetAtPath:(id)path;	// 0x331e781d
- (id)longitudeForAssetAtPath:(id)path;	// 0x331e7821
- (void)moveRegionOfInterestWithPath:(id)path fromIndex:(int)index toIndex:(int)index3 saveToCache:(BOOL)cache;	// 0x331e7879
- (double)posterTimeForAssetAtPath:(id)path;	// 0x331e783d
- (id)prepareInfoForAssetsAtPaths:(id)paths;	// 0x331e7885
- (CGRect)regionOfInterestAtIndex:(int)index forAssetAtPath:(id)path;	// 0x331e7855
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x331e7835
- (void)removeRegionOfInterestAtIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x331e7881
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x331e7801
- (void)setForceOrderForRegionsOfInterest:(BOOL)interest forPath:(id)path saveToCache:(BOOL)cache;	// 0x331e787d
- (void)setRegionOfInterest:(CGRect)interest atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x331e7871
- (void)setSavesToDisk:(BOOL)disk;	// 0x331e77c1
- (double)startTimeForAssetAtPath:(id)path;	// 0x331e77d9
- (double)stopTimeForAssetAtPath:(id)path;	// 0x331e77ed
- (void)tryToSaveCache;	// 0x331e7851
- (void)updateRegionOfInterestAtIndex:(int)index atPath:(id)path to:(CGRect)to saveToCache:(BOOL)cache;	// 0x331e7875
@end

