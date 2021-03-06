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
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x31a97425; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x31a9774d; S=0x31a9775d; converted property
@property(assign) int audioPriority;	// G=0x31a978e5; S=0x31a97905; converted property
@property(retain) MCContainerEffect *container;	// G=0x31a97bc9; S=0x31a9a179; converted property
@property(retain) id effectAttributes;	// G=0x31a92a59; S=0x31a92af1; converted property
@property(copy, nonatomic) NSString *effectID;	// G=0x31a92771; S=0x31a92791; 
@property(readonly, assign) NSObject<MZEffectTiming> *effectTiming;	// G=0x31a97ad9; @synthesize=_effectTiming
@property(readonly, retain) NSMutableArray *filters;	// G=0x31a96ce9; converted property
@property(assign) double fullDuration;	// G=0x31a98969; S=0x31a989c9; converted property
@property(assign) float height;	// G=0x31a9b7c1; S=0x31a9b805; converted property
@property(assign) int liveIndex;	// G=0x31a97b89; S=0x31a97ba9; converted property
@property(assign) double mainDuration;	// G=0x31a9410d; S=0x31a9412d; 
@property(assign) float opacity;	// G=0x31a92e19; S=0x31a92e39; converted property
@property(retain) MPEffectContainer *parentContainer;	// G=0x31a979a9; S=0x31a9ab81; converted property
@property(assign) double phaseInDuration;	// G=0x31a93a19; S=0x31a93a39; 
@property(assign) double phaseOutDuration;	// G=0x31a93d91; S=0x31a93db1; 
@property(retain) MCPlugParallel *plug;	// G=0x31a97bd9; S=0x31a99bbd; converted property
@property(assign) CGPoint position;	// G=0x31a930ed; S=0x31a9311d; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x31a928c5; S=0x31a928f9; 
@property(assign) int randomSeed;	// G=0x31a979b9; S=0x31a979d9; converted property
@property(assign) BOOL replaceSlides;	// G=0x31a960ed; S=0x31a960fd; 
@property(assign) float rotationAngle;	// G=0x31a9341d; S=0x31a9343d; converted property
@property(assign) float scale;	// G=0x31a92f81; S=0x31a92fa1; converted property
@property(retain) id scriptingAnimations;	// G=0x31a9b8b1; S=0x31a9bc15; converted property
@property(readonly, retain) NSMutableArray *secondarySlides;	// G=0x31a95895; converted property
@property(assign) CGSize size;	// G=0x31a93585; S=0x31a935b5; converted property
@property(readonly, assign) NSArray *slides;	// G=0x31a94505; 
@property(readonly, assign) BOOL supportsEffectTiming;	// G=0x31a98ea1; converted property
@property(readonly, assign) NSArray *texts;	// G=0x31a96509; 
@property(assign) float width;	// G=0x31a9b839; S=0x31a9b87d; converted property
@property(assign) float xPosition;	// G=0x31a9b6d1; S=0x31a9b715; converted property
@property(assign) float xRotationAngle;	// G=0x31a93749; S=0x31a93769; converted property
@property(assign) float yPosition;	// G=0x31a9b749; S=0x31a9b78d; converted property
@property(assign) float yRotationAngle;	// G=0x31a938b1; S=0x31a938d1; converted property
@property(assign) float zPosition;	// G=0x31a932b5; S=0x31a932d5; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a90331
+ (id)effectWithEffectID:(id)effectID;	// 0x31a90381
+ (id)effectWithEffectID:(id)effectID andPaths:(id)paths;	// 0x31a903bd
+ (id)effectWithEffectID:(id)effectID andStrings:(id)strings;	// 0x31a903fd
+ (id)effectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x31a9043d
- (id)init;	// 0x31a9071d
- (id)initWithCoder:(id)coder;	// 0x31a917c1
- (id)initWithEffectID:(id)effectID;	// 0x31a90485
- (id)initWithEffectID:(id)effectID andPaths:(id)paths;	// 0x31a90499
- (id)initWithEffectID:(id)effectID andStrings:(id)strings;	// 0x31a90565
- (id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x31a90635
- (void)_updateEffectTiming;	// 0x31a9610d
- (void)_updateTiming:(BOOL)timing;	// 0x31a96319
- (void)addFilter:(id)filter;	// 0x31a96cf9
- (void)addFilters:(id)filters;	// 0x31a96d59
- (void)addSecondarySlide:(id)slide;	// 0x31a958a5
- (void)addSecondarySlides:(id)slides;	// 0x31a95905
- (void)addSlide:(id)slide;	// 0x31a94515
- (void)addSlides:(id)slides;	// 0x31a94575
- (void)addText:(id)text;	// 0x31a96519
- (void)addTexts:(id)texts;	// 0x31a96579
- (id)animationPathForKey:(id)key;	// 0x31a97435
// converted property getter: - (id)animationPaths;	// 0x31a97425
// converted property getter: - (id)audioPlaylist;	// 0x31a9774d
// converted property getter: - (int)audioPriority;	// 0x31a978e5
- (void)cleanup;	// 0x31a99a99
// converted property getter: - (id)container;	// 0x31a97bc9
- (void)copyAnimationPaths:(id)paths;	// 0x31a99979
- (void)copyAudioPlaylist:(id)playlist;	// 0x31a99a55
- (void)copyFilters:(id)filters;	// 0x31a99881
- (void)copySecondarySlides:(id)slides;	// 0x31a99691
- (void)copySlides:(id)slides;	// 0x31a99599
- (void)copyStruct:(id)aStruct;	// 0x31a99281
- (void)copyTexts:(id)texts;	// 0x31a99789
- (id)copyWithZone:(NSZone *)zone;	// 0x31a92481
- (int)countOfFilters;	// 0x31a9b5a1
- (int)countOfSlides;	// 0x31a9b341
- (int)countOfTexts;	// 0x31a9b471
- (void)createSecondarySlidesWithPaths:(id)paths;	// 0x31a98569
- (void)createSlidesWithPaths:(id)paths;	// 0x31a983ed
- (void)createTextsWithDefaultStrings;	// 0x31a97be9
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;	// 0x31a97fcd
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;	// 0x31a97ff1
- (void)dealloc;	// 0x31a925e5
- (id)description;	// 0x31a90a41
- (void)dump;	// 0x31a98a35
- (id)effectAttributeForKey:(id)key;	// 0x31a92bf1
// converted property getter: - (id)effectAttributes;	// 0x31a92a59
// declared property getter: - (id)effectID;	// 0x31a92771
- (id)effectPresetID;	// 0x31a98e41
// declared property getter: - (id)effectTiming;	// 0x31a97ad9
- (void)encodeWithCoder:(id)coder;	// 0x31a90ebd
// converted property getter: - (id)filters;	// 0x31a96ce9
- (void)finalize;	// 0x31a925a5
- (id)fullDebugLog;	// 0x31a98a5d
// converted property getter: - (double)fullDuration;	// 0x31a98969
- (BOOL)hasMovies;	// 0x31a9b265
// converted property getter: - (float)height;	// 0x31a9b7c1
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x31a96d9d
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x31a9b5e1
- (void)insertObject:(id)object inSlidesAtIndex:(int)index;	// 0x31a9b381
- (void)insertObject:(id)object inTextsAtIndex:(int)index;	// 0x31a9b4b1
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;	// 0x31a95949
- (void)insertSlides:(id)slides atIndex:(int)index;	// 0x31a945b9
- (void)insertTexts:(id)texts atIndex:(int)index;	// 0x31a965bd
- (BOOL)isTextOnly;	// 0x31a96ca1
// converted property getter: - (int)liveIndex;	// 0x31a97b89
- (double)lowestDisplayTime;	// 0x31a964cd
// declared property getter: - (double)mainDuration;	// 0x31a9410d
- (int)maxNumberOfSecondarySlides;	// 0x31a97b39
- (int)maxNumberOfSlides;	// 0x31a97ae9
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x31a97349
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;	// 0x31a957c1
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;	// 0x31a96bcd
- (id)nearestLayerGroup;	// 0x31a9b319
- (id)nearestPlug;	// 0x31a99241
- (BOOL)needsParallelizer;	// 0x31a9ac31
- (id)objectID;	// 0x31a991c1
- (id)objectInFiltersAtIndex:(int)index;	// 0x31a9b5c1
- (id)objectInSlidesAtIndex:(int)index;	// 0x31a9b361
- (id)objectInTextsAtIndex:(int)index;	// 0x31a9b491
// converted property getter: - (float)opacity;	// 0x31a92e19
// converted property getter: - (id)parentContainer;	// 0x31a979a9
- (id)parentDocument;	// 0x31a99209
// declared property getter: - (double)phaseInDuration;	// 0x31a93a19
// declared property getter: - (double)phaseOutDuration;	// 0x31a93d91
// converted property getter: - (id)plug;	// 0x31a97bd9
- (id)plugID;	// 0x31a99199
// converted property getter: - (CGPoint)position;	// 0x31a930ed
// declared property getter: - (id)presetID;	// 0x31a928c5
// converted property getter: - (int)randomSeed;	// 0x31a979b9
- (void)reconfigureSlides;	// 0x31a986e9
- (void)removeAllFilters;	// 0x31a972e9
- (void)removeAllSecondarySlides;	// 0x31a96031
- (void)removeAllSlides;	// 0x31a955c9
- (void)removeAllTexts;	// 0x31a96b6d
- (void)removeAnimationPathForKey:(id)key;	// 0x31a97645
- (void)removeFiltersAtIndices:(id)indices;	// 0x31a970bd
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x31a9b621
- (void)removeObjectFromSlidesAtIndex:(int)index;	// 0x31a9b3c1
- (void)removeObjectFromTextsAtIndex:(int)index;	// 0x31a9b4f1
- (void)removeSecondarySlidesAtIndices:(id)indices;	// 0x31a95e05
- (void)removeSlidesAtIndices:(id)indices;	// 0x31a95085
- (void)removeTextsAtIndices:(id)indices;	// 0x31a96989
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x31a9b65d
- (void)replaceObjectInSlidesAtIndex:(int)index withObject:(id)object;	// 0x31a9b3fd
- (void)replaceObjectInTextsAtIndex:(int)index withObject:(id)object;	// 0x31a9b52d
- (void)replaceSlide:(id)slide atIndex:(int)index;	// 0x31a957a9
- (void)replaceSlideAtIndex:(int)index withSlide:(id)slide;	// 0x31a9562d
// declared property getter: - (BOOL)replaceSlides;	// 0x31a960ed
- (void)replaceTextsWitStrings:(id)strings;	// 0x31a97d4d
// converted property getter: - (float)rotationAngle;	// 0x31a9341d
// converted property getter: - (float)scale;	// 0x31a92f81
- (void)scaleMainDuration;	// 0x31a9ae4d
// converted property getter: - (id)scriptingAnimations;	// 0x31a9b8b1
// converted property getter: - (id)secondarySlides;	// 0x31a95895
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x31a97461
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x31a9775d
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x31a97905
// converted property setter: - (void)setContainer:(id)container;	// 0x31a9a179
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x31a92c8d
// converted property setter: - (void)setEffectAttributes:(id)attributes;	// 0x31a92af1
// declared property setter: - (void)setEffectID:(id)anId;	// 0x31a92791
// converted property setter: - (void)setFullDuration:(double)duration;	// 0x31a989c9
// converted property setter: - (void)setHeight:(float)height;	// 0x31a9b805
// converted property setter: - (void)setLiveIndex:(int)index;	// 0x31a97ba9
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x31a9412d
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x31a92e39
// converted property setter: - (void)setParentContainer:(id)container;	// 0x31a9ab81
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x31a93a39
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x31a93db1
// converted property setter: - (void)setPlug:(id)plug;	// 0x31a99bbd
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x31a9311d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x31a928f9
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x31a979d9
// declared property setter: - (void)setReplaceSlides:(BOOL)slides;	// 0x31a960fd
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x31a9343d
// converted property setter: - (void)setScale:(float)scale;	// 0x31a92fa1
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x31a9bc15
// converted property setter: - (void)setSize:(CGSize)size;	// 0x31a935b5
// converted property setter: - (void)setWidth:(float)width;	// 0x31a9b87d
// converted property setter: - (void)setXPosition:(float)position;	// 0x31a9b715
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x31a93769
// converted property setter: - (void)setYPosition:(float)position;	// 0x31a9b78d
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x31a938d1
// converted property setter: - (void)setZPosition:(float)position;	// 0x31a932d5
// converted property getter: - (CGSize)size;	// 0x31a93585
- (id)slideInformation;	// 0x31a98eb1
// declared property getter: - (id)slides;	// 0x31a94505
// converted property getter: - (BOOL)supportsEffectTiming;	// 0x31a98ea1
- (BOOL)supportsUnlimitedSlides;	// 0x31a96095
// declared property getter: - (id)texts;	// 0x31a96509
- (void)updateEffectAttributes;	// 0x31a990c5
- (id)uuid;	// 0x31a991e9
- (id)videoPaths;	// 0x31a98d61
// converted property getter: - (float)width;	// 0x31a9b839
// converted property getter: - (float)xPosition;	// 0x31a9b6d1
// converted property getter: - (float)xRotationAngle;	// 0x31a93749
// converted property getter: - (float)yPosition;	// 0x31a9b749
// converted property getter: - (float)yRotationAngle;	// 0x31a938b1
- (int)zIndex;	// 0x31a94491
// converted property getter: - (float)zPosition;	// 0x31a932b5
@end

