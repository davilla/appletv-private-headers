/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MRCroppingSpriteVBO : NSObject {
	CGPoint mPosition;	// 4 = 0x4
	CGSize mHalfSize;	// 12 = 0xc
	float mRotation;	// 20 = 0x14
	CGRect mInnerRect;	// 24 = 0x18
	CGRect mOuterRect;	// 40 = 0x28
	BOOL mPreservesImageAspectRatio;	// 56 = 0x38
	BOOL mHitIsActive;	// 57 = 0x39
	BOOL mNeedsInSpriteCoordinates;	// 58 = 0x3a
	CGSize mSpriteCoordinatesFactor;	// 60 = 0x3c
	CGPoint mSpriteCoordinatesOffset;	// 68 = 0x44
	unsigned char mMeshType;	// 76 = 0x4c
	unsigned mVBO;	// 80 = 0x50
	unsigned char mMiddleOffset;	// 84 = 0x54
	unsigned char mOuterOffset;	// 85 = 0x55
	unsigned char mNumberOfVertices;	// 86 = 0x56
	BOOL mPositionWasUpdated;	// 87 = 0x57
	BOOL mRectsWereUpdated;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) CGSize halfSize;	// G=0x36484c09; @synthesize=mHalfSize
@property(assign, nonatomic) BOOL hitIsActive;	// G=0x36484c99; S=0x36484ca9; @synthesize=mHitIsActive
@property(assign, nonatomic) CGRect innerRect;	// G=0x36484c31; S=0x364835e5; @synthesize=mInnerRect
@property(assign, nonatomic) unsigned char meshType;	// G=0x36484d31; S=0x36484d41; @synthesize=mMeshType
@property(assign, nonatomic) BOOL needsInSpriteCoordinates;	// G=0x36484cb9; S=0x36484cc9; @synthesize=mNeedsInSpriteCoordinates
@property(assign, nonatomic) CGRect outerRect;	// G=0x36484c55; S=0x364836c9; @synthesize=mOuterRect
@property(readonly, assign, nonatomic) CGPoint position;	// G=0x36484bf1; @synthesize=mPosition
@property(assign, nonatomic) BOOL preservesImageAspectRatio;	// G=0x36484c79; S=0x36484c89; @synthesize=mPreservesImageAspectRatio
@property(readonly, assign, nonatomic) float rotation;	// G=0x36484c21; @synthesize=mRotation
@property(assign, nonatomic) CGSize spriteCoordinatesFactor;	// G=0x36484cd9; S=0x36484cf1; @synthesize=mSpriteCoordinatesFactor
@property(assign, nonatomic) CGPoint spriteCoordinatesOffset;	// G=0x36484d05; S=0x36484d1d; @synthesize=mSpriteCoordinatesOffset
- (id)init;	// 0x36483219
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation context:(id)context;	// 0x364832d1
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect context:(id)context;	// 0x36483321
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect outerRect:(CGRect)rect5 context:(id)context;	// 0x364833a1
- (void)fakeRenderInContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x364834ad
- (void)getOpaquePosition:(CGPoint *)position andHalfSize:(CGSize *)size;	// 0x364837b9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix;	// 0x36484aa9
// declared property getter: - (CGSize)halfSize;	// 0x36484c09
- (BOOL)hitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x36484959
// declared property getter: - (BOOL)hitIsActive;	// 0x36484c99
// declared property getter: - (CGRect)innerRect;	// 0x36484c31
// declared property getter: - (unsigned char)meshType;	// 0x36484d31
// declared property getter: - (BOOL)needsInSpriteCoordinates;	// 0x36484cb9
// declared property getter: - (CGRect)outerRect;	// 0x36484c55
// declared property getter: - (CGPoint)position;	// 0x36484bf1
// declared property getter: - (BOOL)preservesImageAspectRatio;	// 0x36484c79
- (void)renderImageInner:(id)inner inContext:(id)context;	// 0x36484465
- (void)renderImageMiddle:(id)middle inContext:(id)context;	// 0x364845c1
- (void)renderImageOuter:(id)outer inContext:(id)context;	// 0x36484799
- (void)reset;	// 0x36483441
// declared property getter: - (float)rotation;	// 0x36484c21
// declared property setter: - (void)setHitIsActive:(BOOL)active;	// 0x36484ca9
// declared property setter: - (void)setInnerRect:(CGRect)rect;	// 0x364835e5
// declared property setter: - (void)setMeshType:(unsigned char)type;	// 0x36484d41
// declared property setter: - (void)setNeedsInSpriteCoordinates:(BOOL)spriteCoordinates;	// 0x36484cc9
// declared property setter: - (void)setOuterRect:(CGRect)rect;	// 0x364836c9
// declared property setter: - (void)setPreservesImageAspectRatio:(BOOL)ratio;	// 0x36484c89
// declared property setter: - (void)setSpriteCoordinatesFactor:(CGSize)factor;	// 0x36484cf1
// declared property setter: - (void)setSpriteCoordinatesOffset:(CGPoint)offset;	// 0x36484d1d
// declared property getter: - (CGSize)spriteCoordinatesFactor;	// 0x36484cd9
// declared property getter: - (CGPoint)spriteCoordinatesOffset;	// 0x36484d05
- (void)updateVBOsInContext:(id)context;	// 0x36483951
@end

