/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "MPLayerableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPDocumentInternal, MCMontage, NSArray, NSMutableDictionary;
@protocol MPAssetKeyDelegate;

@interface MPDocument : NSObject <MPLayerableSupportInternal, NSCoding> {
	MCMontage *_montage;	// 4 = 0x4
	NSArray *_userProvidedStacks;	// 8 = 0x8
	NSMutableDictionary *_documentAttributes;	// 12 = 0xc
	NSMutableDictionary *_fileProperties;	// 16 = 0x10
	NSMutableDictionary *_layerGroups;	// 20 = 0x14
	BOOL _preserveMedia;	// 24 = 0x18
	id<MPAssetKeyDelegate> _assetKeyDelegate;	// 28 = 0x1c
	MPDocumentInternal *_internal;	// 32 = 0x20
}
@property(assign) id assetKeyDelegate;	// G=0x320584d5; S=0x320584e9; converted property
@property(retain) id audioPaths;	// G=0x32059239; S=0x32059271; converted property
@property(retain) id audioPlaylist;	// G=0x320599b5; S=0x320599ed; converted property
@property(assign) CGColorRef backgroundCGColor;	// G=0x320598d1; S=0x32059909; converted property
@property(readonly, retain) NSMutableDictionary *documentAttributes;	// G=0x32058de1; converted property
@property(retain) id documentLayerGroup;	// G=0x3205b085; S=0x3205a991; converted property
@property(retain) id fileURL;	// G=0x3205864d; S=0x3205866d; converted property
@property(retain) id lastRandomTransition;	// G=0x3205c7bd; S=0x3205c7dd; converted property
@property(assign) int loopingMode;	// G=0x320583e9; S=0x32058421; converted property
@property(retain) id mediaProperties;	// G=0x32057e1d; S=0x32057e2d; converted property
@property(retain) MCMontage *montage;	// G=0x32059a61; S=0x3205b2f5; converted property
@property(assign) double numberOfLoops;	// G=0x3205845d; S=0x32058495; converted property
@property(assign) BOOL preserveMedia;	// G=0x32057dfd; S=0x32057e0d; converted property
@property(assign) BOOL savesPathsAsAbsolute;	// G=0x320585c9; S=0x320585ed; converted property
@property(retain) id stacks;	// G=0x3205913d; S=0x3205914d; converted property
@property(retain) id styleID;	// G=0x3205d551; S=0x3205d589; converted property
@property(retain) id title;	// G=0x3205d519; S=0x3205d535; converted property
@property(retain) id undoManager;	// G=0x3205860d; S=0x3205862d; converted property
@property(retain) id videoPaths;	// G=0x3205918d; S=0x320591fd; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32056a6d
+ (void)initialize;	// 0x320569a1
+ (BOOL)isNativeType:(id)type;	// 0x32056aed
+ (id)readableTypes;	// 0x32056ac5
+ (id)unarchiveDocumentFromData:(id)data error:(id *)error;	// 0x32056985
+ (id)writableTypes;	// 0x32056a9d
- (id)init;	// 0x32056b11
- (id)initWithCoder:(id)coder;	// 0x320571b5
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x3205de15
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation thumbnailIfPossible:(BOOL)possible now:(BOOL)now;	// 0x3205de51
- (IOSurfaceRef)IOSurfaceForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation;	// 0x3205e051
- (void)_setMediaProperties:(id)properties;	// 0x3205b335
- (id)absolutePathForAssetAtPath:(id)path;	// 0x3205d5c5
- (id)absolutePathForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x3205d8f9
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x3205dd91
- (id)absoluteVideoPaths;	// 0x3205b345
- (id)actionableObjectForID:(id)anId;	// 0x3205af21
- (void)addAudioPath:(id)path;	// 0x32058fc5
- (void)addAudioPaths:(id)paths;	// 0x32059001
- (void)addLayer:(id)layer;	// 0x32059385
- (void)addLayers:(id)layers;	// 0x32059419
- (void)addStacks:(id)stacks;	// 0x3205903d
- (void)addVideoPath:(id)path;	// 0x32058f4d
- (void)addVideoPaths:(id)paths;	// 0x32058f89
- (id)allEffectContainers;	// 0x32059ec9
- (id)allEffects;	// 0x32059f01
- (id)allElements;	// 0x3205894d
- (id)allSlides;	// 0x320587dd
- (id)allSlides:(BOOL)slides;	// 0x320587f1
- (id)allSongs;	// 0x32059f39
- (id)altitudeForPath:(id)path;	// 0x3205bee9
- (int)antialiasLevel;	// 0x3205a0c5
- (unsigned)applyStyle:(id)style;	// 0x32057c05
- (id)areaForPath:(id)path;	// 0x3205be29
- (float)aspectRatio;	// 0x3205cd85
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x3205cde5
// converted property getter: - (id)assetKeyDelegate;	// 0x320584d5
- (id)attributeForAssetAtPath:(id)path forKey:(id)key;	// 0x3205e2ad
// converted property getter: - (id)audioPaths;	// 0x32059239
// converted property getter: - (id)audioPlaylist;	// 0x320599b5
- (id)authoringOptionForKey:(id)key;	// 0x3205836d
// converted property getter: - (CGColorRef)backgroundCGColor;	// 0x320598d1
- (void)beginBatchModify;	// 0x3205868d
- (id)cachedAbsolutePathFromPath:(id)path;	// 0x3205ce99
- (id)cachedAbsoluteStillPathFromPath:(id)path;	// 0x3205d009
- (id)captionForPath:(id)path;	// 0x3205bb99
- (id)cityForPath:(id)path;	// 0x3205bda9
- (void)cleanup;	// 0x32058df1
- (void)configureActions;	// 0x3205d20d
- (int)countOfLayers;	// 0x3205d3ad
- (id)countryForPath:(id)path;	// 0x3205bce9
- (id)creationDateForPath:(id)path;	// 0x3205ba89
- (id)currentStyle;	// 0x32057bcd
- (id)dataForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x3205dfd9
- (void)dealloc;	// 0x32057ac1
- (id)definedPlaceNameForPath:(id)path;	// 0x3205bea9
- (id)description;	// 0x320579b9
- (id)descriptionForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x3205c7ad
- (BOOL)detectFacesInBackground;	// 0x3205ce29
- (id)displayName;	// 0x32057bc1
- (id)documentAttributeForKey:(id)key;	// 0x32057c69
// converted property getter: - (id)documentAttributes;	// 0x32058de1
// converted property getter: - (id)documentLayerGroup;	// 0x3205b085
- (void)dump;	// 0x32059a71
- (double)duration;	// 0x32059945
- (double)durationForPath:(id)path;	// 0x3205a6f9
- (void)encodeWithCoder:(id)coder;	// 0x32057001
- (void)endBatchModify;	// 0x32058709
- (double)fadeOutAudioDuration;	// 0x3205c7fd
// converted property getter: - (id)fileURL;	// 0x3205864d
- (void)finalize;	// 0x32057a81
- (id)flightPlanFrom:(CGPoint)from to:(CGPoint)to;	// 0x3205c739
- (id)fullDebugLog;	// 0x32059a75
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x32059469
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x3205d45d
- (BOOL)isAudioAtPath:(id)path;	// 0x3205b5e9
- (BOOL)isImageAtPath:(id)path;	// 0x3205b3f9
- (BOOL)isInBatchModify;	// 0x3205d31d
- (BOOL)isLive;	// 0x3205ce5d
- (BOOL)isMovieAtPath:(id)path;	// 0x3205b4f1
- (BOOL)isSupportedMovieForAssetAtPath:(id)path;	// 0x3205e0ed
- (id)keyedLayers;	// 0x320598c1
- (id)keywordsForPath:(id)path;	// 0x3205bb11
// converted property getter: - (id)lastRandomTransition;	// 0x3205c7bd
- (CGPoint)latLongPointForMap:(id)map withAttributes:(id)attributes;	// 0x3205c219
- (id)latitudeForPath:(id)path;	// 0x3205bbd9
- (id)layerForKey:(id)key;	// 0x32059699
- (id)layers;	// 0x3205934d
- (BOOL)layersCanPositionZIndex;	// 0x3205d209
- (id)longitudeForPath:(id)path;	// 0x3205bc61
// converted property getter: - (int)loopingMode;	// 0x320583e9
- (id)mainLayers;	// 0x32059a29
- (int)mapLevelForPath:(id)path;	// 0x3205c671
- (id)marimbaDocument;	// 0x3205e359
// converted property getter: - (id)mediaProperties;	// 0x32057e1d
- (int)mediaTypeForPath:(id)path;	// 0x3205a7c1
// converted property getter: - (id)montage;	// 0x32059a61
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x32059659
- (BOOL)nearingEndWithOptions:(id)options;	// 0x3205cd35
- (BOOL)needsToRemoveFadeIn;	// 0x3205d379
- (id)neighborhoodForPath:(id)path;	// 0x3205be69
// converted property getter: - (double)numberOfLoops;	// 0x3205845d
- (id)objectInLayersAtIndex:(int)index;	// 0x3205d3e5
- (id)oceanForPath:(id)path;	// 0x3205bd29
- (id)orderedVideoPaths;	// 0x320591c5
- (void)organizeRandomTransitions;	// 0x3205c83d
- (id)organizedRandomTransitions;	// 0x3205cced
- (id)outroEffect;	// 0x32059d0d
- (id)placeForPath:(id)path;	// 0x3205bde9
- (CGPoint)pointForMap:(id)map withAttributes:(id)attributes;	// 0x3205c2f9
- (double)posterTime;	// 0x3205a08d
// converted property getter: - (BOOL)preserveMedia;	// 0x32057dfd
- (id)propertiesForMediaPath:(id)mediaPath;	// 0x32057fd9
- (id)propertiesForMediaPathAndCreateIfNeeded:(id)mediaPathAndCreateIfNeeded;	// 0x3205a8d5
- (BOOL)readFromPath:(id)path ofType:(id)type error:(id *)error;	// 0x32057a7d
- (void)reconnectAllTransitions;	// 0x3205a115
- (id)regionsOfInterestForPath:(id)path;	// 0x3205b6e1
- (id)regionsOfInterestForPath:(id)path detect:(BOOL)detect;	// 0x3205b6f5
- (void)removeAllAudioPaths;	// 0x320592e5
- (void)removeAllLayers;	// 0x320594a9
- (void)removeAllStacks;	// 0x3205931d
- (void)removeAllVideoPaths;	// 0x320592ad
- (double)removeFadeInIfNeeded;	// 0x3205d341
- (void)removeLayerForKey:(id)key;	// 0x320597dd
- (void)removeLayersAtIndices:(id)indices;	// 0x3205961d
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x3205d49d
- (void)removePath:(id)path;	// 0x320590c5
- (void)removePaths:(id)paths;	// 0x32059101
- (void)removePropertiesForMediaPath:(id)mediaPath;	// 0x320582f1
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x3205d4d9
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x3205e1a9
- (CGSize)resolutionForPath:(id)path;	// 0x3205a265
// converted property getter: - (BOOL)savesPathsAsAbsolute;	// 0x320585c9
- (void)setAbsolutePath:(id)path forKey:(id)key;	// 0x3205cf3d
- (void)setAbsoluteStillPath:(id)path forKey:(id)key;	// 0x3205d0ad
- (void)setAlwaysLookupAbsolutePaths:(BOOL)paths;	// 0x3205d1e9
// converted property setter: - (void)setAssetKeyDelegate:(id)delegate;	// 0x320584e9
- (void)setAudioFadeOutDuration:(double)duration;	// 0x3205c81d
// converted property setter: - (void)setAudioPaths:(id)paths;	// 0x32059271
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x320599ed
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x320583a9
// converted property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x32059909
- (void)setDocumentAttribute:(id)attribute forKey:(id)key;	// 0x32057d19
// converted property setter: - (void)setDocumentLayerGroup:(id)group;	// 0x3205a991
// converted property setter: - (void)setFileURL:(id)url;	// 0x3205866d
// converted property setter: - (void)setLastRandomTransition:(id)transition;	// 0x3205c7dd
- (void)setLayer:(id)layer forKey:(id)key;	// 0x320596b9
// converted property setter: - (void)setLoopingMode:(int)mode;	// 0x32058421
// converted property setter: - (void)setMediaProperties:(id)properties;	// 0x32057e2d
// converted property setter: - (void)setMontage:(id)montage;	// 0x3205b2f5
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x32058495
// converted property setter: - (void)setPreserveMedia:(BOOL)media;	// 0x32057e0d
- (void)setProperties:(id)properties forMediaPath:(id)mediaPath;	// 0x32058059
// converted property setter: - (void)setSavesPathsAsAbsolute:(BOOL)absolute;	// 0x320585ed
// converted property setter: - (void)setStacks:(id)stacks;	// 0x3205914d
// converted property setter: - (void)setStyleID:(id)anId;	// 0x3205d589
- (void)setTemporarilyCacheAbsolutePaths:(BOOL)paths;	// 0x3205d179
// converted property setter: - (void)setTitle:(id)title;	// 0x3205d535
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x3205862d
// converted property setter: - (void)setVideoPaths:(id)paths;	// 0x320591fd
- (void)setupDocumentLayerGroup;	// 0x3205ac05
- (void)setupLayerGroups;	// 0x3205ae39
// converted property getter: - (id)stacks;	// 0x3205913d
- (double)startTimeForAssetAtPath:(id)path;	// 0x3205e2b1
- (double)startTimeForPath:(id)path;	// 0x3205a569
- (id)stateForPath:(id)path;	// 0x3205bd69
- (double)stopTimeForAssetAtPath:(id)path;	// 0x3205e305
- (double)stopTimeForPath:(id)path;	// 0x3205a631
// converted property getter: - (id)styleID;	// 0x3205d551
- (CGImageRef)thumbnailCGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x3205df5d
- (id)tiledMapPathsForAttributes:(id)attributes;	// 0x3205bf71
// converted property getter: - (id)title;	// 0x3205d519
- (id)titleEffect;	// 0x32059a79
// converted property getter: - (id)undoManager;	// 0x3205860d
- (void)upgradeDocument;	// 0x3205b0a5
- (id)uuid;	// 0x3205a245
- (id)valueInLayersWithName:(id)name;	// 0x3205d421
- (double)videoDuration;	// 0x3205997d
// converted property getter: - (id)videoPaths;	// 0x3205918d
- (float)volumeForPath:(id)path;	// 0x3205b37d
@end
