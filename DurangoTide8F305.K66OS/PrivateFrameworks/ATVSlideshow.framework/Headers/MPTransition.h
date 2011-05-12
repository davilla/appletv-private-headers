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
@property(assign) double duration;	// G=0x3326f9a1; S=0x3326f9c1; converted property
@property(assign) BOOL isRandom;	// G=0x33270ae5; S=0x33270b05; converted property
@property(readonly, retain) id parent;	// G=0x332701a5; converted property
@property(retain) id parentContainer;	// G=0x332701b5; S=0x3327064d; converted property
@property(retain) id presetID;	// G=0x3326f6e9; S=0x3326f709; converted property
@property(retain) id transitionAttributes;	// G=0x3326fcc1; S=0x3326fd3d; converted property
@property(retain) id transitionID;	// G=0x3326f521; S=0x3326f541; converted property
+ (id)transitionWithTransitionID:(id)transitionID;	// 0x3326eed1
- (id)init;	// 0x3326efe9
- (id)initWithCoder:(id)coder;	// 0x3326f335
- (id)initWithTransitionID:(id)transitionID;	// 0x3326ef05
- (id)_transitionAttributes;	// 0x33270ba1
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x33270225
- (void)copyAttribures:(id)attribures;	// 0x332705c1
- (void)copyStruct:(id)aStruct;	// 0x332704b9
- (id)copyWithZone:(NSZone *)zone;	// 0x3326f0a1
- (void)dealloc;	// 0x3326f4b1
- (id)description;	// 0x3326f11d
- (void)dump;	// 0x332701c5
// converted property getter: - (double)duration;	// 0x3326f9a1
- (void)encodeWithCoder:(id)coder;	// 0x3326f209
- (double)findMaxDuration;	// 0x33270229
- (id)fullDebugLog;	// 0x332701e9
// converted property getter: - (BOOL)isRandom;	// 0x33270ae5
// converted property getter: - (id)parent;	// 0x332701a5
// converted property getter: - (id)parentContainer;	// 0x332701b5
- (id)parentDocument;	// 0x3327061d
// converted property getter: - (id)presetID;	// 0x3326f6e9
- (void)recreateWithPlug:(id)plug;	// 0x332709bd
// converted property setter: - (void)setDuration:(double)duration;	// 0x3326f9c1
// converted property setter: - (void)setIsRandom:(BOOL)random;	// 0x33270b05
// converted property setter: - (void)setParentContainer:(id)container;	// 0x3327064d
- (void)setParentWithAction:(id)action;	// 0x33270819
// converted property setter: - (void)setPresetID:(id)anId;	// 0x3326f709
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x3326ff91
// converted property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x3326fd3d
// converted property setter: - (void)setTransitionID:(id)anId;	// 0x3326f541
- (id)transitionAttributeForKey:(id)key;	// 0x3326fec5
// converted property getter: - (id)transitionAttributes;	// 0x3326fcc1
// converted property getter: - (id)transitionID;	// 0x3326f521
- (id)transitionPresetID;	// 0x33270459
@end

