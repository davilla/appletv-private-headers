/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MPTransitionInternal, NSMutableDictionary;

@interface MPTransition : NSObject <NSCoding, NSCopying> {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	id _parent;	// 8 = 0x8
	MPTransitionInternal *_internal;	// 12 = 0xc
}
@property(assign) double duration;	// G=0x33cfe9f9; S=0x33cfea19; converted property
@property(assign) BOOL isRandom;	// G=0x33cffb3d; S=0x33cffb5d; converted property
@property(readonly, retain) id parent;	// G=0x33cff1fd; converted property
@property(retain) id parentContainer;	// G=0x33cff20d; S=0x33cff6a5; converted property
@property(retain) id presetID;	// G=0x33cfe741; S=0x33cfe761; converted property
@property(retain) id transitionAttributes;	// G=0x33cfed19; S=0x33cfed95; converted property
@property(retain) id transitionID;	// G=0x33cfe579; S=0x33cfe599; converted property
+ (id)transitionWithTransitionID:(id)transitionID;	// 0x33cfdf29
- (id)init;	// 0x33cfe041
- (id)initWithCoder:(id)coder;	// 0x33cfe38d
- (id)initWithTransitionID:(id)transitionID;	// 0x33cfdf5d
- (id)_transitionAttributes;	// 0x33cffbf9
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x33cff27d
- (void)copyAttribures:(id)attribures;	// 0x33cff619
- (void)copyStruct:(id)aStruct;	// 0x33cff511
- (id)copyWithZone:(NSZone *)zone;	// 0x33cfe0f9
- (void)dealloc;	// 0x33cfe509
- (id)description;	// 0x33cfe175
- (void)dump;	// 0x33cff21d
// converted property getter: - (double)duration;	// 0x33cfe9f9
- (void)encodeWithCoder:(id)coder;	// 0x33cfe261
- (double)findMaxDuration;	// 0x33cff281
- (id)fullDebugLog;	// 0x33cff241
// converted property getter: - (BOOL)isRandom;	// 0x33cffb3d
// converted property getter: - (id)parent;	// 0x33cff1fd
// converted property getter: - (id)parentContainer;	// 0x33cff20d
- (id)parentDocument;	// 0x33cff675
// converted property getter: - (id)presetID;	// 0x33cfe741
- (void)recreateWithPlug:(id)plug;	// 0x33cffa15
// converted property setter: - (void)setDuration:(double)duration;	// 0x33cfea19
// converted property setter: - (void)setIsRandom:(BOOL)random;	// 0x33cffb5d
// converted property setter: - (void)setParentContainer:(id)container;	// 0x33cff6a5
- (void)setParentWithAction:(id)action;	// 0x33cff871
// converted property setter: - (void)setPresetID:(id)anId;	// 0x33cfe761
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x33cfefe9
// converted property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x33cfed95
// converted property setter: - (void)setTransitionID:(id)anId;	// 0x33cfe599
- (id)transitionAttributeForKey:(id)key;	// 0x33cfef1d
// converted property getter: - (id)transitionAttributes;	// 0x33cfed19
// converted property getter: - (id)transitionID;	// 0x33cfe579
- (id)transitionPresetID;	// 0x33cff4b1
@end

