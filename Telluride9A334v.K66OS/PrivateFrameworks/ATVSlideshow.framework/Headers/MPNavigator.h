/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import <NSObject.h> // Unknown library
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPNavigatorSupport.h"

@class MCPlug, NSString, NSMutableDictionary, MPNavigatorInternal, MCContainerNavigator;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {
	MPNavigatorInternal *_internal;	// 4 = 0x4
	NSMutableDictionary *_layers;	// 8 = 0x8
	NSMutableDictionary *_actions;	// 12 = 0xc
	MCPlug *_plug;	// 16 = 0x10
	MCContainerNavigator *_navigator;	// 20 = 0x14
	id _parent;	// 24 = 0x18
	NSMutableDictionary *_animationPaths;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x32ec7d29; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x32ec6729; converted property
@property(assign) double duration;	// G=0x32ec75b1; S=0x32ec75d1; converted property
@property(copy) NSString *initialLayer;	// G=0x32ec6605; S=0x32ec6625; @dynamic
@property(assign) BOOL isTriggered;	// G=0x32ec7b55; S=0x32ec7b79; converted property
@property(readonly, retain) NSMutableDictionary *layers;	// G=0x32ec6719; converted property
@property(assign) double numberOfLoops;	// G=0x32ec79dd; S=0x32ec79fd; converted property
@property(assign) float opacity;	// G=0x32ec6aa9; S=0x32ec6ac9; converted property
@property(retain) id parent;	// G=0x32ec5f71; S=0x32ec8299; converted property
@property(assign) double phaseInDuration;	// G=0x32ec76ed; S=0x32ec770d; converted property
@property(assign) double phaseOutDuration;	// G=0x32ec7865; S=0x32ec7885; converted property
@property(retain) MCPlug *plug;	// G=0x32ec7fc5; S=0x32ec8529; converted property
@property(assign) CGPoint position;	// G=0x32ec6bb9; S=0x32ec6be9; converted property
@property(assign) float rotationAngle;	// G=0x32ec6e05; S=0x32ec6e25; converted property
@property(assign) float scale;	// G=0x32ec7271; S=0x32ec7291; converted property
@property(assign) CGSize size;	// G=0x32ec6f15; S=0x32ec6f45; converted property
@property(assign) BOOL startsPaused;	// G=0x32ec7c61; S=0x32ec7c85; converted property
@property(assign) double timeIn;	// G=0x32ec7495; S=0x32ec74b5; converted property
@property(assign) float xRotationAngle;	// G=0x32ec7051; S=0x32ec7071; converted property
@property(assign) float yRotationAngle;	// G=0x32ec7161; S=0x32ec7181; converted property
@property(assign) int zIndex;	// G=0x32ec7381; S=0x32ec73c9; converted property
@property(assign) float zPosition;	// G=0x32ec6cf5; S=0x32ec6d15; converted property
- (id)init;	// 0x32ec4685
- (id)initWithCoder:(id)coder;	// 0x32ec50c5
- (id)actionForKey:(id)key;	// 0x32ec7d39
- (id)actionableObjectForID:(id)anId;	// 0x32ec99dd
// converted property getter: - (id)actions;	// 0x32ec7d29
- (id)allSlides:(BOOL)slides;	// 0x32ec7fd5
- (id)allSongs;	// 0x32ec80cd
- (id)animationPathForKey:(id)key;	// 0x32ec6739
// converted property getter: - (id)animationPaths;	// 0x32ec6729
- (void)cleanup;	// 0x32ec907d
- (void)configureActions;	// 0x32ec8349
- (void)copyActions:(id)actions;	// 0x32ec9849
- (void)copyAnimationPaths:(id)paths;	// 0x32ec9771
- (void)copyLayers:(id)layers;	// 0x32ec95dd
- (void)copyStruct:(id)aStruct;	// 0x32ec92a1
- (id)copyWithZone:(NSZone *)zone;	// 0x32ec5ce9
- (void)dealloc;	// 0x32ec5ded
// converted property getter: - (double)duration;	// 0x32ec75b1
- (void)encodeWithCoder:(id)coder;	// 0x32ec4965
- (void)finalize;	// 0x32ec5dad
// declared property getter: - (id)initialLayer;	// 0x32ec6605
// converted property getter: - (BOOL)isTriggered;	// 0x32ec7b55
- (id)layerForKey:(id)key;	// 0x32ec5ff9
- (id)layerKey;	// 0x32ec5f81
- (id)layerKeyDictionary;	// 0x32ec9ae9
// converted property getter: - (id)layers;	// 0x32ec6719
- (id)navigatorKey;	// 0x32ec5ee1
// converted property getter: - (double)numberOfLoops;	// 0x32ec79dd
- (id)objectID;	// 0x32ec8259
// converted property getter: - (float)opacity;	// 0x32ec6aa9
// converted property getter: - (id)parent;	// 0x32ec5f71
- (id)parentDocument;	// 0x32ec81c1
// converted property getter: - (double)phaseInDuration;	// 0x32ec76ed
// converted property getter: - (double)phaseOutDuration;	// 0x32ec7865
// converted property getter: - (id)plug;	// 0x32ec7fc5
- (id)plugID;	// 0x32ec8239
// converted property getter: - (CGPoint)position;	// 0x32ec6bb9
- (void)reconnectAll;	// 0x32ec9921
- (void)removeActionForKey:(id)key;	// 0x32ec7f01
- (void)removeAllLayers;	// 0x32ec6539
- (void)removeAnimationPathForKey:(id)key;	// 0x32ec698d
- (void)removeLayerForKey:(id)key;	// 0x32ec6355
// converted property getter: - (float)rotationAngle;	// 0x32ec6e05
// converted property getter: - (float)scale;	// 0x32ec7271
- (void)setAction:(id)action forKey:(id)key;	// 0x32ec7d59
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x32ec6759
- (void)setContainer:(id)container;	// 0x32ec84e1
// converted property setter: - (void)setDuration:(double)duration;	// 0x32ec75d1
// declared property setter: - (void)setInitialLayer:(id)layer;	// 0x32ec6625
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x32ec7b79
- (void)setLayer:(id)layer forKey:(id)key;	// 0x32ec6019
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x32ec79fd
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x32ec6ac9
// converted property setter: - (void)setParent:(id)parent;	// 0x32ec8299
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x32ec770d
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x32ec7885
// converted property setter: - (void)setPlug:(id)plug;	// 0x32ec8529
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x32ec6be9
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x32ec6e25
// converted property setter: - (void)setScale:(float)scale;	// 0x32ec7291
// converted property setter: - (void)setSize:(CGSize)size;	// 0x32ec6f45
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x32ec7c85
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x32ec74b5
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x32ec7071
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x32ec7181
// converted property setter: - (void)setZIndex:(int)index;	// 0x32ec73c9
// converted property setter: - (void)setZPosition:(float)position;	// 0x32ec6d15
// converted property getter: - (CGSize)size;	// 0x32ec6f15
// converted property getter: - (BOOL)startsPaused;	// 0x32ec7c61
// converted property getter: - (double)timeIn;	// 0x32ec7495
- (id)uuid;	// 0x32ec8279
// converted property getter: - (float)xRotationAngle;	// 0x32ec7051
// converted property getter: - (float)yRotationAngle;	// 0x32ec7161
// converted property getter: - (int)zIndex;	// 0x32ec7381
// converted property getter: - (float)zPosition;	// 0x32ec6cf5
@end

