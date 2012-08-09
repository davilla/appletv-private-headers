/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MREffectManager : NSObject {
	NSMutableDictionary *mEffectSets;	// 4 = 0x4
	NSMutableDictionary *mEffectPools;	// 8 = 0x8
	NSMutableDictionary *mFontRepository;	// 12 = 0xc
}
+ (void)initialize;	// 0x320c9261
+ (id)sharedManager;	// 0x320c92c9
- (id)init;	// 0x320c92d9
- (id)attributeDescriptionForEffectID:(id)effectID andKey:(id)key;	// 0x320c9e3d
- (Class)classForEffectID:(id)effectID;	// 0x320c95c9
- (void)cleanup;	// 0x320c93a9
- (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x320c9ddd
- (void)dealloc;	// 0x320c9369
- (id)defaultEffectAttributesWithEffectID:(id)effectID andSlideInformation:(id)information;	// 0x320c9e0d
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x320c9d2d
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x320c9ce9
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x320c9d71
- (id)descriptionForEffectID:(id)effectID;	// 0x320c9a9d
- (id)effectWithEffectID:(id)effectID;	// 0x320c9701
- (BOOL)hasCustomTimingForEffectID:(id)effectID;	// 0x320c9db5
- (BOOL)hasMultiImageInputForEffectID:(id)effectID;	// 0x320c9b8d
- (id)imageInputInfosForEffectID:(id)effectID;	// 0x320c9bcd
- (id)imageProviderInfosForEffectID:(id)effectID;	// 0x320c9c01
- (BOOL)isOpaqueForEffectID:(id)effectID;	// 0x320c9c75
- (float)lineSpacingFactorForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x320c9e7d
- (void)recycleEffect:(id)effect;	// 0x320c9945
- (void)releaseResources;	// 0x320c940d
- (id)resourcePathForEffectID:(id)effectID andResource:(id)resource;	// 0x320c9ad5
- (id)sizeScriptForEffectID:(id)effectID andKey:(id)key;	// 0x320c9b41
- (BOOL)supportsAccumulationForEffectID:(id)effectID;	// 0x320c9c35
@end
