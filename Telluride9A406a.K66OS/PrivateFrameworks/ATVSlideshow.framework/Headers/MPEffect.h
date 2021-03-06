/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPEffectSupport.h"
#import "MPActionableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPEffectInternal, MCPlugParallel, MPEffectContainer, NSString, NSArray, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCContainerEffect;
@protocol MZEffectTiming;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport> {
@private
	NSMutableArray *_slides;	// 4 = 0x4
	NSMutableArray *_secondarySlides;	// 8 = 0x8
	NSMutableArray *_texts;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_attributes;	// 20 = 0x14
	NSMutableDictionary *_animationPaths;	// 24 = 0x18
	MCContainerEffect *_container;	// 28 = 0x1c
	MCPlugParallel *_plug;	// 32 = 0x20
	MPAudioPlaylist *_audioPlaylist;	// 36 = 0x24
	MPEffectContainer *_parentContainer;	// 40 = 0x28
	BOOL _replaceSlides;	// 44 = 0x2c
	BOOL _supportsEffectTiming;	// 45 = 0x2d
	NSObject<MZEffectTiming> *_effectTiming;	// 48 = 0x30
	MPEffectInternal *_internal;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x3494d425; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x3494d74d; S=0x3494d75d; converted property
@property(assign) int audioPriority;	// G=0x3494d8e5; S=0x3494d905; converted property
@property(retain) MCContainerEffect *container;	// G=0x3494dbc9; S=0x34950179; converted property
@property(retain) id effectAttributes;	// G=0x34948a59; S=0x34948af1; converted property
@property(copy, nonatomic) NSString *effectID;	// G=0x34948771; S=0x34948791; 
@property(readonly, assign) NSObject<MZEffectTiming> *effectTiming;	// G=0x3494dad9; @synthesize=_effectTiming
@property(readonly, retain) NSMutableArray *filters;	// G=0x3494cce9; converted property
@property(assign) double fullDuration;	// G=0x3494e969; S=0x3494e9c9; converted property
@property(assign) float height;	// G=0x349517c1; S=0x34951805; converted property
@property(assign) int liveIndex;	// G=0x3494db89; S=0x3494dba9; converted property
@property(assign) double mainDuration;	// G=0x3494a10d; S=0x3494a12d; 
@property(assign) float opacity;	// G=0x34948e19; S=0x34948e39; converted property
@property(retain) MPEffectContainer *parentContainer;	// G=0x3494d9a9; S=0x34950b81; converted property
@property(assign) double phaseInDuration;	// G=0x34949a19; S=0x34949a39; 
@property(assign) double phaseOutDuration;	// G=0x34949d91; S=0x34949db1; 
@property(retain) MCPlugParallel *plug;	// G=0x3494dbd9; S=0x3494fbbd; converted property
@property(assign) CGPoint position;	// G=0x349490ed; S=0x3494911d; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x349488c5; S=0x349488f9; 
@property(assign) int randomSeed;	// G=0x3494d9b9; S=0x3494d9d9; converted property
@property(assign) BOOL replaceSlides;	// G=0x3494c0ed; S=0x3494c0fd; 
@property(assign) float rotationAngle;	// G=0x3494941d; S=0x3494943d; converted property
@property(assign) float scale;	// G=0x34948f81; S=0x34948fa1; converted property
@property(retain) id scriptingAnimations;	// G=0x349518b1; S=0x34951c15; converted property
@property(readonly, retain) NSMutableArray *secondarySlides;	// G=0x3494b895; converted property
@property(assign) CGSize size;	// G=0x34949585; S=0x349495b5; converted property
@property(readonly, assign) NSArray *slides;	// G=0x3494a505; 
@property(readonly, assign) BOOL supportsEffectTiming;	// G=0x3494eea1; converted property
@property(readonly, assign) NSArray *texts;	// G=0x3494c509; 
@property(assign) float width;	// G=0x34951839; S=0x3495187d; converted property
@property(assign) float xPosition;	// G=0x349516d1; S=0x34951715; converted property
@property(assign) float xRotationAngle;	// G=0x34949749; S=0x34949769; converted property
@property(assign) float yPosition;	// G=0x34951749; S=0x3495178d; converted property
@property(assign) float yRotationAngle;	// G=0x349498b1; S=0x349498d1; converted property
@property(assign) float zPosition;	// G=0x349492b5; S=0x349492d5; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x34946331
+ (id)effectWithEffectID:(id)effectID;	// 0x34946381
+ (id)effectWithEffectID:(id)effectID andPaths:(id)paths;	// 0x349463bd
+ (id)effectWithEffectID:(id)effectID andStrings:(id)strings;	// 0x349463fd
+ (id)effectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x3494643d
- (id)init;	// 0x3494671d
- (id)initWithCoder:(id)coder;	// 0x349477c1
- (id)initWithEffectID:(id)effectID;	// 0x34946485
- (id)initWithEffectID:(id)effectID andPaths:(id)paths;	// 0x34946499
- (id)initWithEffectID:(id)effectID andStrings:(id)strings;	// 0x34946565
- (id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x34946635
- (void)_updateEffectTiming;	// 0x3494c10d
- (void)_updateTiming:(BOOL)timing;	// 0x3494c319
- (void)addFilter:(id)filter;	// 0x3494ccf9
- (void)addFilters:(id)filters;	// 0x3494cd59
- (void)addSecondarySlide:(id)slide;	// 0x3494b8a5
- (void)addSecondarySlides:(id)slides;	// 0x3494b905
- (void)addSlide:(id)slide;	// 0x3494a515
- (void)addSlides:(id)slides;	// 0x3494a575
- (void)addText:(id)text;	// 0x3494c519
- (void)addTexts:(id)texts;	// 0x3494c579
- (id)animationPathForKey:(id)key;	// 0x3494d435
// converted property getter: - (id)animationPaths;	// 0x3494d425
// converted property getter: - (id)audioPlaylist;	// 0x3494d74d
// converted property getter: - (int)audioPriority;	// 0x3494d8e5
- (void)cleanup;	// 0x3494fa99
// converted property getter: - (id)container;	// 0x3494dbc9
- (void)copyAnimationPaths:(id)paths;	// 0x3494f979
- (void)copyAudioPlaylist:(id)playlist;	// 0x3494fa55
- (void)copyFilters:(id)filters;	// 0x3494f881
- (void)copySecondarySlides:(id)slides;	// 0x3494f691
- (void)copySlides:(id)slides;	// 0x3494f599
- (void)copyStruct:(id)aStruct;	// 0x3494f281
- (void)copyTexts:(id)texts;	// 0x3494f789
- (id)copyWithZone:(NSZone *)zone;	// 0x34948481
- (int)countOfFilters;	// 0x349515a1
- (int)countOfSlides;	// 0x34951341
- (int)countOfTexts;	// 0x34951471
- (void)createSecondarySlidesWithPaths:(id)paths;	// 0x3494e569
- (void)createSlidesWithPaths:(id)paths;	// 0x3494e3ed
- (void)createTextsWithDefaultStrings;	// 0x3494dbe9
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;	// 0x3494dfcd
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;	// 0x3494dff1
- (void)dealloc;	// 0x349485e5
- (id)description;	// 0x34946a41
- (void)dump;	// 0x3494ea35
- (id)effectAttributeForKey:(id)key;	// 0x34948bf1
// converted property getter: - (id)effectAttributes;	// 0x34948a59
// declared property getter: - (id)effectID;	// 0x34948771
- (id)effectPresetID;	// 0x3494ee41
// declared property getter: - (id)effectTiming;	// 0x3494dad9
- (void)encodeWithCoder:(id)coder;	// 0x34946ebd
// converted property getter: - (id)filters;	// 0x3494cce9
- (void)finalize;	// 0x349485a5
- (id)fullDebugLog;	// 0x3494ea5d
// converted property getter: - (double)fullDuration;	// 0x3494e969
- (BOOL)hasMovies;	// 0x34951265
// converted property getter: - (float)height;	// 0x349517c1
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x3494cd9d
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x349515e1
- (void)insertObject:(id)object inSlidesAtIndex:(int)index;	// 0x34951381
- (void)insertObject:(id)object inTextsAtIndex:(int)index;	// 0x349514b1
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;	// 0x3494b949
- (void)insertSlides:(id)slides atIndex:(int)index;	// 0x3494a5b9
- (void)insertTexts:(id)texts atIndex:(int)index;	// 0x3494c5bd
- (BOOL)isTextOnly;	// 0x3494cca1
// converted property getter: - (int)liveIndex;	// 0x3494db89
- (double)lowestDisplayTime;	// 0x3494c4cd
// declared property getter: - (double)mainDuration;	// 0x3494a10d
- (int)maxNumberOfSecondarySlides;	// 0x3494db39
- (int)maxNumberOfSlides;	// 0x3494dae9
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x3494d349
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;	// 0x3494b7c1
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;	// 0x3494cbcd
- (id)nearestLayerGroup;	// 0x34951319
- (id)nearestPlug;	// 0x3494f241
- (BOOL)needsParallelizer;	// 0x34950c31
- (id)objectID;	// 0x3494f1c1
- (id)objectInFiltersAtIndex:(int)index;	// 0x349515c1
- (id)objectInSlidesAtIndex:(int)index;	// 0x34951361
- (id)objectInTextsAtIndex:(int)index;	// 0x34951491
// converted property getter: - (float)opacity;	// 0x34948e19
// converted property getter: - (id)parentContainer;	// 0x3494d9a9
- (id)parentDocument;	// 0x3494f209
// declared property getter: - (double)phaseInDuration;	// 0x34949a19
// declared property getter: - (double)phaseOutDuration;	// 0x34949d91
// converted property getter: - (id)plug;	// 0x3494dbd9
- (id)plugID;	// 0x3494f199
// converted property getter: - (CGPoint)position;	// 0x349490ed
// declared property getter: - (id)presetID;	// 0x349488c5
// converted property getter: - (int)randomSeed;	// 0x3494d9b9
- (void)reconfigureSlides;	// 0x3494e6e9
- (void)removeAllFilters;	// 0x3494d2e9
- (void)removeAllSecondarySlides;	// 0x3494c031
- (void)removeAllSlides;	// 0x3494b5c9
- (void)removeAllTexts;	// 0x3494cb6d
- (void)removeAnimationPathForKey:(id)key;	// 0x3494d645
- (void)removeFiltersAtIndices:(id)indices;	// 0x3494d0bd
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x34951621
- (void)removeObjectFromSlidesAtIndex:(int)index;	// 0x349513c1
- (void)removeObjectFromTextsAtIndex:(int)index;	// 0x349514f1
- (void)removeSecondarySlidesAtIndices:(id)indices;	// 0x3494be05
- (void)removeSlidesAtIndices:(id)indices;	// 0x3494b085
- (void)removeTextsAtIndices:(id)indices;	// 0x3494c989
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x3495165d
- (void)replaceObjectInSlidesAtIndex:(int)index withObject:(id)object;	// 0x349513fd
- (void)replaceObjectInTextsAtIndex:(int)index withObject:(id)object;	// 0x3495152d
- (void)replaceSlide:(id)slide atIndex:(int)index;	// 0x3494b7a9
- (void)replaceSlideAtIndex:(int)index withSlide:(id)slide;	// 0x3494b62d
// declared property getter: - (BOOL)replaceSlides;	// 0x3494c0ed
- (void)replaceTextsWitStrings:(id)strings;	// 0x3494dd4d
// converted property getter: - (float)rotationAngle;	// 0x3494941d
// converted property getter: - (float)scale;	// 0x34948f81
- (void)scaleMainDuration;	// 0x34950e4d
// converted property getter: - (id)scriptingAnimations;	// 0x349518b1
// converted property getter: - (id)secondarySlides;	// 0x3494b895
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x3494d461
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x3494d75d
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x3494d905
// converted property setter: - (void)setContainer:(id)container;	// 0x34950179
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x34948c8d
// converted property setter: - (void)setEffectAttributes:(id)attributes;	// 0x34948af1
// declared property setter: - (void)setEffectID:(id)anId;	// 0x34948791
// converted property setter: - (void)setFullDuration:(double)duration;	// 0x3494e9c9
// converted property setter: - (void)setHeight:(float)height;	// 0x34951805
// converted property setter: - (void)setLiveIndex:(int)index;	// 0x3494dba9
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x3494a12d
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x34948e39
// converted property setter: - (void)setParentContainer:(id)container;	// 0x34950b81
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x34949a39
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x34949db1
// converted property setter: - (void)setPlug:(id)plug;	// 0x3494fbbd
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x3494911d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x349488f9
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x3494d9d9
// declared property setter: - (void)setReplaceSlides:(BOOL)slides;	// 0x3494c0fd
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x3494943d
// converted property setter: - (void)setScale:(float)scale;	// 0x34948fa1
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x34951c15
// converted property setter: - (void)setSize:(CGSize)size;	// 0x349495b5
// converted property setter: - (void)setWidth:(float)width;	// 0x3495187d
// converted property setter: - (void)setXPosition:(float)position;	// 0x34951715
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x34949769
// converted property setter: - (void)setYPosition:(float)position;	// 0x3495178d
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x349498d1
// converted property setter: - (void)setZPosition:(float)position;	// 0x349492d5
// converted property getter: - (CGSize)size;	// 0x34949585
- (id)slideInformation;	// 0x3494eeb1
// declared property getter: - (id)slides;	// 0x3494a505
// converted property getter: - (BOOL)supportsEffectTiming;	// 0x3494eea1
- (BOOL)supportsUnlimitedSlides;	// 0x3494c095
// declared property getter: - (id)texts;	// 0x3494c509
- (void)updateEffectAttributes;	// 0x3494f0c5
- (id)uuid;	// 0x3494f1e9
- (id)videoPaths;	// 0x3494ed61
// converted property getter: - (float)width;	// 0x34951839
// converted property getter: - (float)xPosition;	// 0x349516d1
// converted property getter: - (float)xRotationAngle;	// 0x34949749
// converted property getter: - (float)yPosition;	// 0x34951749
// converted property getter: - (float)yRotationAngle;	// 0x349498b1
- (int)zIndex;	// 0x3494a491
// converted property getter: - (float)zPosition;	// 0x349492b5
@end

