/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MRShader, EAGLContext, MRContextState, MRImage, MRImageManager;
@protocol MZMediaManagement;

@interface MRContext : NSObject {
	MRContext *mBaseContext;	// 4 = 0x4
	EAGLContext *mGLContext;	// 8 = 0x8
	CGPoint mPixelOffset;	// 12 = 0xc
	CGSize mPixelSize;	// 20 = 0x14
	int mVRAM;	// 28 = 0x1c
	float mFieldOfViewFactor;	// 32 = 0x20
	float mProjectionMatrix[16];	// 36 = 0x24
	int mOrientation;	// 100 = 0x64
	id<MZMediaManagement> mAssetManager;	// 104 = 0x68
	MRImageManager *mImageManager;	// 108 = 0x6c
	BOOL mIsLocalContext;	// 112 = 0x70
	BOOL mIsFlipped;	// 113 = 0x71
	BOOL mIsUsingIntelGPU;	// 114 = 0x72
	BOOL mIsUsingIntelGMA950;	// 115 = 0x73
	BOOL mPrefersSharedVRAM;	// 116 = 0x74
	BOOL mSupportsFragmentShaders;	// 117 = 0x75
	MRContextState *mOuterState;	// 120 = 0x78
	MRContextState *mInnerState;	// 124 = 0x7c
	NSMutableDictionary *mVertexAttributes;	// 128 = 0x80
	BOOL mCurrentVBOWasUpdated;	// 132 = 0x84
	float mLocalAspectRatio;	// 136 = 0x88
	int mScissorRect[4];	// 140 = 0x8c
	MRShader *mCurrentShader;	// 156 = 0x9c
	MRImage *mTextureUnitImages[4];	// 160 = 0xa0
	int mActiveTextureUnit;	// 176 = 0xb0
	int mRenderBuffer;	// 180 = 0xb4
	MRImage *mBlackImage;	// 184 = 0xb8
	int _dimensionalMode;	// 188 = 0xbc
}
@property(readonly, assign, nonatomic) float aspectRatio;	// G=0x354ce515; 
@property(retain) id<MZMediaManagement> assetManager;	// G=0x354d2489; S=0x354d249d; @synthesize=mAssetManager
@property(readonly, assign, nonatomic) const float *backColor;	// G=0x354cf025; 
@property(readonly, assign) MRContext *baseContext;	// G=0x354d2479; @synthesize=mBaseContext
@property(readonly, assign) CGColorSpaceRef colorSpace;	// G=0x354ce531; 
@property(assign, nonatomic) int dimensionalMode;	// G=0x354d25e1; S=0x354ce13d; @synthesize=_dimensionalMode
@property(readonly, assign, nonatomic) const float *foreColor;	// G=0x354ced51; 
@property(readonly, assign, nonatomic) BOOL foreColorIsOpaqueWhite;	// G=0x354ced71; 
@property(readonly, assign) EAGLContext *glContext;	// G=0x354d25c1; @synthesize=mGLContext
@property(readonly, assign) MRImageManager *imageManager;	// G=0x354d24c1; @synthesize=mImageManager
@property(readonly, assign, nonatomic) BOOL isDoubleBuffered;	// G=0x354ce571; 
@property(assign, nonatomic) BOOL isFlipped;	// G=0x354d2571; S=0x354ce97d; @synthesize=mIsFlipped
@property(readonly, assign, nonatomic) BOOL isUsingIntelGMA950;	// G=0x354d25a1; @synthesize=mIsUsingIntelGMA950
@property(readonly, assign, nonatomic) BOOL isUsingIntelGPU;	// G=0x354d2591; @synthesize=mIsUsingIntelGPU
@property(assign, nonatomic) float localAspectRatio;	// G=0x354d2531; S=0x354d2541; @synthesize=mLocalAspectRatio
@property(readonly, assign, nonatomic) unsigned long maxDimension;	// G=0x354ce579; 
@property(readonly, assign, nonatomic) const float *modelViewMatrix;	// G=0x354d1abd; 
@property(readonly, assign) CGColorSpaceRef monochromaticColorSpace;	// G=0x354ce551; 
@property(assign, nonatomic) int orientation;	// G=0x354d2551; S=0x354d2561; @synthesize=mOrientation
@property(assign, nonatomic) CGPoint pixelOffset;	// G=0x354d24d1; S=0x354d24ed; @synthesize=mPixelOffset
@property(assign, nonatomic) CGSize pixelSize;	// G=0x354d2501; S=0x354d251d; @synthesize=mPixelSize
@property(readonly, assign, nonatomic) BOOL prefersSharedVRAM;	// G=0x354d25b1; @synthesize=mPrefersSharedVRAM
@property(readonly, assign, nonatomic) const float *projectionMatrix;	// G=0x354d1aad; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x354ce4c5; 
@property(readonly, assign, nonatomic) BOOL supportsFragmentShaders;	// G=0x354d2581; @synthesize=mSupportsFragmentShaders
@property(readonly, assign, nonatomic) unsigned virtualScreen;	// G=0x354ce575; 
@property(readonly, assign, nonatomic) int vram;	// G=0x354d25d1; @synthesize=mVRAM
- (id)initLocalWithContext:(id)context glContext:(id)context2 andSize:(CGSize)size;	// 0x354cd94d
- (id)initWithEAGLContext:(id)eaglcontext andAssetManager:(id)manager;	// 0x354cd789
- (void)_commitOuterToInner;	// 0x354cf849
- (void)_updateTextureOnUnit:(unsigned)unit;	// 0x354cf30d
// declared property getter: - (float)aspectRatio;	// 0x354ce515
// declared property getter: - (id)assetManager;	// 0x354d2489
// declared property getter: - (const float *)backColor;	// 0x354cf025
// declared property getter: - (id)baseContext;	// 0x354d2479
- (id)beginLocalContextWithSize:(CGSize)size backgroundColor:(const float *)color state:(XXStruct_vue6hD *)state;	// 0x354ce6c1
- (void)blend:(int)blend;	// 0x354ce9b5
- (void)cleanup;	// 0x354cdc75
- (void)clear:(int)clear;	// 0x354cea75
// declared property getter: - (CGColorSpaceRef)colorSpace;	// 0x354ce531
- (BOOL)commitShaderChange;	// 0x354cf495
- (void)composeForeColor:(const float *)color saveTo:(float *)to;	// 0x354ceeb9
- (void)composeForeColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x354cef61
- (void)composeModelViewMatrix:(float [16])matrix saveTo:(float *)to;	// 0x354d1b39
- (void)cull:(int)cull;	// 0x354cea01
- (void)dealloc;	// 0x354cdbad
- (void)depthTest:(BOOL)test;	// 0x354cea55
// declared property getter: - (int)dimensionalMode;	// 0x354d25e1
- (void)drawLinesFromOffset:(unsigned)offset count:(unsigned)count;	// 0x354d2405
- (void)drawTriangleStripFromOffset:(unsigned)offset count:(unsigned)count;	// 0x354d236d
- (void)drawTrianglesFromOffset:(unsigned)offset count:(unsigned)count;	// 0x354d23b9
- (void)finalize;	// 0x354cdc35
- (void)flush;	// 0x354ce5b5
// declared property getter: - (const float *)foreColor;	// 0x354ced51
// declared property getter: - (BOOL)foreColorIsOpaqueWhite;	// 0x354ced71
// declared property getter: - (id)glContext;	// 0x354d25c1
// declared property getter: - (id)imageManager;	// 0x354d24c1
- (id)imageSetOnTextureUnit:(unsigned)unit;	// 0x354cf2c1
// declared property getter: - (BOOL)isDoubleBuffered;	// 0x354ce571
// declared property getter: - (BOOL)isFlipped;	// 0x354d2571
// declared property getter: - (BOOL)isUsingIntelGMA950;	// 0x354d25a1
// declared property getter: - (BOOL)isUsingIntelGPU;	// 0x354d2591
// declared property getter: - (float)localAspectRatio;	// 0x354d2531
- (void)lock;	// 0x354cdd85
// declared property getter: - (unsigned long)maxDimension;	// 0x354ce579
// declared property getter: - (const float *)modelViewMatrix;	// 0x354d1abd
// declared property getter: - (CGColorSpaceRef)monochromaticColorSpace;	// 0x354ce551
// declared property getter: - (int)orientation;	// 0x354d2551
// declared property getter: - (CGPoint)pixelOffset;	// 0x354d24d1
// declared property getter: - (CGSize)pixelSize;	// 0x354d2501
// declared property getter: - (BOOL)prefersSharedVRAM;	// 0x354d25b1
// declared property getter: - (const float *)projectionMatrix;	// 0x354d1aad
- (void)purgeResources:(BOOL)resources;	// 0x354ce6a1
- (void)restoreBackColor:(const float *)color;	// 0x354cf129
- (void)restoreForeColor:(const float *)color;	// 0x354cf011
- (void)restoreModelViewMatrix:(float [16])matrix;	// 0x354d1b85
- (void)restoreScissorRect:(const int *)rect;	// 0x354ced3d
- (id)retainedByUserBlackImage;	// 0x354ce95d
- (id)retainedByUserImageByEndingLocalContext:(id)context andRestoreState:(const XXStruct_vue6hD *)state;	// 0x354ce859
// declared property setter: - (void)setAssetManager:(id)manager;	// 0x354d249d
- (void)setBackColor:(const float *)color saveTo:(float *)to;	// 0x354cf045
- (void)setBackColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x354cf099
- (void)setColorsPointer:(const float *)pointer;	// 0x354d1f9d
// declared property setter: - (void)setDimensionalMode:(int)mode;	// 0x354ce13d
- (void)setForeColor:(const float *)color saveTo:(float *)to;	// 0x354cedd5
- (void)setForeColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x354cee29
- (void)setImage:(id)image onTextureUnit:(unsigned)unit withReferenceAspectRatio:(float)referenceAspectRatio state:(XXStruct_S04vsC *)state;	// 0x354cf13d
- (void)setInSpriteCoordinatesPointer:(const float *)spriteCoordinatesPointer;	// 0x354d2019
// declared property setter: - (void)setIsFlipped:(BOOL)flipped;	// 0x354ce97d
// declared property setter: - (void)setLocalAspectRatio:(float)ratio;	// 0x354d2541
- (void)setModelViewMatrix:(float [16])matrix saveTo:(float *)to;	// 0x354d1add
- (void)setNormal:(float)normal :(float)arg2 :(float)arg3;	// 0x354d1b99
- (void)setNormalsPointer:(const float *)pointer;	// 0x354d1f65
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x354d2561
// declared property setter: - (void)setPixelOffset:(CGPoint)offset;	// 0x354d24ed
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x354d251d
- (void)setScissorRect:(const int *)rect saveTo:(int *)to;	// 0x354ceba1
- (void)setShader:(id)shader;	// 0x354d11e9
- (void)setShaderUniformFloat:(float)aFloat forKey:(id)key;	// 0x354d1595
- (void)setShaderUniformInt:(int)int forKey:(id)key;	// 0x354d1499
- (void)setShaderUniformVec2:(float)a2 :(float)arg2 forKey:(id)key;	// 0x354d169d
- (void)setShaderUniformVec3:(float)a3 :(float)arg2 :(float)arg3 forKey:(id)key;	// 0x354d17cd
- (void)setShaderUniformVec4:(float)a4 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)key;	// 0x354d1929
- (void)setTextureCoordinatesPointer:(const float *)pointer onTextureUnit:(unsigned)unit;	// 0x354d1fd5
- (void)setTextureMatrix:(float [16])matrix onTextureUnit:(unsigned)unit;	// 0x354d1be9
- (void)setVertex2DPointer:(const float *)pointer;	// 0x354d1e85
- (void)setVertex3DPointer:(const float *)pointer;	// 0x354d1ef5
- (void)setVertexAttributePointer:(const float *)pointer ofSize:(unsigned)size forKey:(id)key;	// 0x354d2051
- (void)setVertexBuffer2D:(unsigned)d withFeatures:(unsigned)features;	// 0x354d1d5d
- (void)setVertexBuffer2D:(unsigned)d withStride:(unsigned)stride inSpriteCoordinatesOffset:(unsigned)spriteCoordinatesOffset texture0CoordinatesOffset:(unsigned)offset;	// 0x354d1c21
// declared property getter: - (CGSize)size;	// 0x354ce4c5
// declared property getter: - (BOOL)supportsFragmentShaders;	// 0x354d2581
- (BOOL)supportsMirroredRepeatForImage:(id)image;	// 0x354d2451
- (void)unlock;	// 0x354cdd89
- (void)unsetColorsPointer;	// 0x354d2269
- (void)unsetImage:(id)image onTextureUnit:(unsigned)unit state:(const XXStruct_S04vsC *)state;	// 0x354cf269
- (void)unsetInSpriteCoordinatesPointer;	// 0x354d22ad
- (void)unsetNormalsPointer;	// 0x354d2249
- (void)unsetShader;	// 0x354d129d
- (void)unsetTextureCoordinatesPointerOnTextureUnit:(unsigned)unit;	// 0x354d2289
- (void)unsetVertexAttributePointerForKey:(id)key;	// 0x354d22cd
- (void)unsetVertexPointer;	// 0x354d21cd
- (void)updateGeometry;	// 0x354cdd8d
- (void)uploadBuffer:(void *)buffer withSize:(int)size toVertexBuffer2D:(unsigned)vertexBuffer2D;	// 0x354d22ed
// declared property getter: - (unsigned)virtualScreen;	// 0x354ce575
// declared property getter: - (int)vram;	// 0x354d25d1
@end
