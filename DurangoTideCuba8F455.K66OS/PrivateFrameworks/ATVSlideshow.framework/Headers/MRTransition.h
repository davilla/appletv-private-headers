/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "ATVSlideshow-Structs.h"
#import "MRRenderable.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, MRLayer, NSString, MRImage;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	id mTransitioner;	// 8 = 0x8
	MRLayer *mSourceLayer;	// 12 = 0xc
	MRLayer *mTargetLayer;	// 16 = 0x10
	MRImage *mSourceLayerImage;	// 20 = 0x14
	MRImage *mTargetLayerImage;	// 24 = 0x18
	MRImage *mOutputImage;	// 28 = 0x1c
	NSString *mTransitionID;	// 32 = 0x20
	NSString *mPresetID;	// 36 = 0x24
	NSDictionary *mAttributes;	// 40 = 0x28
	NSDictionary *mFlattenedAttributes;	// 44 = 0x2c
	BOOL mNeedsToUpdateAttributes;	// 48 = 0x30
	CGSize mPixelSize;	// 52 = 0x34
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x33d966e5; S=0x33d95fe1; @synthesize=mAttributes
@property(readonly, assign) BOOL isAlphaFriendly;	// G=0x33d9636d; 
@property(readonly, assign) BOOL isInfinite;	// G=0x33d963dd; 
@property(readonly, assign) BOOL isNative3D;	// G=0x33d962fd; 
@property(readonly, assign) BOOL isOpaque;	// G=0x33d96335; 
@property(readonly, assign) BOOL needsSourceLayerImageForPrecomputing;	// G=0x33d95f71; 
@property(readonly, assign) BOOL needsTargetLayerImageForPrecomputing;	// G=0x33d95fa9; 
@property(readonly, assign) BOOL noContentsMotion;	// G=0x33d95f39; 
@property(assign) CGSize pixelSize;	// G=0x33d966f5; S=0x33d96719; @synthesize=mPixelSize
@property(copy) NSString *presetID;	// G=0x33d966a1; S=0x33d966b9; @synthesize=mPresetID
@property(retain) MRLayer *sourceLayer;	// G=0x33d965f1; S=0x33d96609; @synthesize=mSourceLayer
@property(retain, nonatomic) MRImage *sourceLayerImage;	// G=0x33d96671; S=0x33d961e9; @synthesize=mSourceLayerImage
@property(retain) MRLayer *targetLayer;	// G=0x33d96631; S=0x33d96649; @synthesize=mTargetLayer
@property(retain, nonatomic) MRImage *targetLayerImage;	// G=0x33d96681; S=0x33d9622d; @synthesize=mTargetLayerImage
@property(readonly, assign) NSString *transitionID;	// G=0x33d96691; @synthesize=mTransitionID
+ (id)retainedTransitionWithTransitionID:(id)transitionID forTransitioner:(id)transitioner;	// 0x33d95bb5
- (id)initWithTransitionID:(id)transitionID;	// 0x33d95bfd
// declared property getter: - (id)attributes;	// 0x33d966e5
- (void)cancelLoading;	// 0x33d962f9
- (void)cleanup;	// 0x33d95da5
- (void)dealloc;	// 0x33d95d25
- (void)finalize;	// 0x33d95d65
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x33d9636d
// declared property getter: - (BOOL)isInfinite;	// 0x33d963dd
- (BOOL)isLoadedForTime:(double)time;	// 0x33d96271
// declared property getter: - (BOOL)isNative3D;	// 0x33d962fd
// declared property getter: - (BOOL)isOpaque;	// 0x33d96335
- (BOOL)isRetainedByTransitioner;	// 0x33d95f21
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x33d96275
// declared property getter: - (BOOL)needsSourceLayerImageForPrecomputing;	// 0x33d95f71
// declared property getter: - (BOOL)needsTargetLayerImageForPrecomputing;	// 0x33d95fa9
// declared property getter: - (BOOL)noContentsMotion;	// 0x33d95f39
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d964b5
// declared property getter: - (CGSize)pixelSize;	// 0x33d966f5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d963e1
// declared property getter: - (id)presetID;	// 0x33d966a1
- (void)releaseByTransitioner:(id)transitioner;	// 0x33d95e41
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d9648d
- (void)retainByTransitioner:(id)transitioner;	// 0x33d95e1d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d964a1
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x33d95fe1
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x33d96719
// declared property setter: - (void)setPresetID:(id)anId;	// 0x33d966b9
// declared property setter: - (void)setSourceLayer:(id)layer;	// 0x33d96609
// declared property setter: - (void)setSourceLayerImage:(id)image;	// 0x33d961e9
// declared property setter: - (void)setTargetLayer:(id)layer;	// 0x33d96649
// declared property setter: - (void)setTargetLayerImage:(id)image;	// 0x33d9622d
// declared property getter: - (id)sourceLayer;	// 0x33d965f1
// declared property getter: - (id)sourceLayerImage;	// 0x33d96671
// declared property getter: - (id)targetLayer;	// 0x33d96631
// declared property getter: - (id)targetLayerImage;	// 0x33d96681
// declared property getter: - (id)transitionID;	// 0x33d96691
- (void)unload;	// 0x33d96279
@end

