/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class NSString, NSMutableDictionary;

@interface MPTransition : NSObject <NSCoding, NSCopying> {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	id _parent;	// 8 = 0x8
	NSString *_transitionID;	// 12 = 0xc
	NSString *_presetID;	// 16 = 0x10
	double _duration;	// 20 = 0x14
	BOOL _isRandom;	// 28 = 0x1c
	int _randomSeed;	// 32 = 0x20
}
@property(assign, nonatomic) double duration;	// G=0x333ec5dd; S=0x333ec019; @synthesize=_duration
@property(assign) BOOL isRandom;	// G=0x333ecb0d; S=0x333ecb1d; converted property
@property(readonly, retain) id parent;	// G=0x333ec4ed; converted property
@property(retain) id parentContainer;	// G=0x333ec4fd; S=0x333ec9f5; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x333ec5c9; S=0x333ebf79; @synthesize=_presetID
@property(assign) int randomSeed;	// G=0x333ec50d; S=0x333ec51d; converted property
@property(retain) id transitionAttributes;	// G=0x333ec215; S=0x333ec28d; converted property
@property(copy, nonatomic) NSString *transitionID;	// G=0x333ec5b5; S=0x333ebe21; @synthesize=_transitionID
+ (id)transitionWithTransitionID:(id)transitionID;	// 0x333eb79d
- (id)init;	// 0x333eb8e9
- (id)initWithCoder:(id)coder;	// 0x333ebc0d
- (id)initWithTransitionID:(id)transitionID;	// 0x333eb7d9
- (id)_transitionAttributes;	// 0x333ecde9
- (void)applyFormattedAttributes;	// 0x333ecce5
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x333ec65d
- (void)copyAttribures:(id)attribures;	// 0x333ec961
- (void)copyVars:(id)vars;	// 0x333ec89d
- (id)copyWithZone:(NSZone *)zone;	// 0x333eb959
- (void)dealloc;	// 0x333ebd91
- (id)description;	// 0x333eb9d1
- (void)dump;	// 0x333ec5f5
// declared property getter: - (double)duration;	// 0x333ec5dd
- (void)encodeWithCoder:(id)coder;	// 0x333ebab1
- (double)findMaxDuration;	// 0x333ec661
- (id)formattedAttributes;	// 0x333ecbb1
- (id)fullDebugLog;	// 0x333ec61d
// converted property getter: - (BOOL)isRandom;	// 0x333ecb0d
// converted property getter: - (id)parent;	// 0x333ec4ed
// converted property getter: - (id)parentContainer;	// 0x333ec4fd
- (id)parentDocument;	// 0x333ec9bd
// declared property getter: - (id)presetID;	// 0x333ec5c9
// converted property getter: - (int)randomSeed;	// 0x333ec50d
// declared property setter: - (void)setDuration:(double)duration;	// 0x333ec019
// converted property setter: - (void)setIsRandom:(BOOL)random;	// 0x333ecb1d
// converted property setter: - (void)setParentContainer:(id)container;	// 0x333ec9f5
// declared property setter: - (void)setPresetID:(id)anId;	// 0x333ebf79
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x333ec51d
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x333ec3e9
// converted property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x333ec28d
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x333ebe21
- (id)transitionAttributeForKey:(id)key;	// 0x333ec30d
// converted property getter: - (id)transitionAttributes;	// 0x333ec215
// declared property getter: - (id)transitionID;	// 0x333ec5b5
- (id)transitionPresetID;	// 0x333ec83d
@end

