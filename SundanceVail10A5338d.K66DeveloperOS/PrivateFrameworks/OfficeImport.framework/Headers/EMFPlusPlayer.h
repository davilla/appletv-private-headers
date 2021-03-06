/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EMFPlayer, MFPEffect, NSMutableData, MFPGraphics;

@interface EMFPlusPlayer : NSObject {
	MFPGraphics *mGraphics;	// 4 = 0x4
	EMFPlayer *mOwner;	// 8 = 0x8
	int mLargeType;	// 12 = 0xc
	unsigned short mLargeFlags;	// 16 = 0x10
	unsigned long mLargeSize;	// 20 = 0x14
	NSMutableData *mLargeData;	// 24 = 0x18
	MFPEffect *mEffect;	// 28 = 0x1c
}
@property(retain) id effect;	// G=0x33c49b95; S=0x33c49ba5; converted property
+ (float)firstTabPosPastPos:(float)pos stringFormat:(id)format isExplicit:(BOOL *)anExplicit;	// 0x33c4cb09
+ (int)serializableObjectTypeForGUID:(id)guid;	// 0x33c4992d
- (id)initWithOwner:(id)owner canvas:(CGRect)canvas;	// 0x33a1ef71
- (CGPathRef)canvasInWorldCoordinates;	// 0x33c4b669
- (void)dealloc;	// 0x33a2289d
// converted property getter: - (id)effect;	// 0x33c49b95
- (int)play:(const char *)play :(unsigned long)arg2;	// 0x33ae0849
- (int)playBeginContainer:(const char *)container :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e211
- (int)playBeginContainerNoParams:(const char *)params :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e2a5
- (int)playBlurEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4e919
- (int)playBrightnessContrastEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4eb81
- (int)playBrush:(const char *)brush :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4aaf1
- (int)playClear:(const char *)clear :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4b82d
- (int)playColorBalanceEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4ee61
- (int)playColorCurveEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4f0d5
- (int)playColorLUTEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4eb11
- (int)playColorMatrixEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4ea39
- (int)playCustomLineCap:(const char *)cap :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4b5ad
- (int)playDrawArc:(const char *)arc :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4bce5
- (int)playDrawBeziers:(const char *)beziers :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4bf3d
- (int)playDrawClosedCurve:(const char *)curve :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4c2b5
- (int)playDrawCurve:(const char *)curve :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4c4c9
- (int)playDrawDriverString:(const char *)string :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4db49
- (int)playDrawEllipse:(const char *)ellipse :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4b9d9
- (int)playDrawImage:(const char *)image :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4c811
- (int)playDrawImagePoints:(const char *)points :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4c8d5
- (int)playDrawLines:(const char *)lines :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4bc35
- (int)playDrawPath:(const char *)path :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4c709
- (int)playDrawPie:(const char *)pie :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4be61
- (int)playDrawRects:(const char *)rects :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4badd
- (int)playDrawString:(const char *)string :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4cbf1
- (int)playEndContainer:(const char *)container :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e2e5
- (int)playFillClosedCurve:(const char *)curve :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4c0a1
- (int)playFillEllipse:(const char *)ellipse :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4b8f1
- (int)playFillPath:(const char *)path :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4c79d
- (int)playFillPath:(CGPathRef)path :(const char *)arg2 :(unsigned long)arg3 :(unsigned short)arg4;	// 0x33c4b6ed
- (int)playFillPie:(const char *)pie :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4bd85
- (int)playFillPolygon:(const char *)polygon :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4bb7d
- (int)playFillRects:(const char *)rects :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4ba3d
- (int)playFont:(const char *)font :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4b16d
- (int)playGetDC:(const char *)dc :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e169
- (int)playGraphics:(const char *)graphics :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4b5b1
- (int)playHeader:(const char *)header :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33ae0e5d
- (int)playHueSaturationLightnessEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4ec25
- (int)playImage:(const char *)image :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4b0f9
- (int)playImageAttributes:(const char *)attributes :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4b5a9
- (int)playLevelsEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4ecf1
- (int)playMultiplyWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e3dd
- (int)playObject:(const char *)object :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4b5b5
- (int)playOffsetClip:(const char *)clip :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e865
- (int)playPath:(const char *)path :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4b041
- (int)playPen:(const char *)pen :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4ab65
- (int)playRecord:(int)record :(const char *)arg2 :(unsigned long)arg3 :(unsigned short)arg4;	// 0x33ae0b21
- (int)playRedEyeCorrectionEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4ef2d
- (int)playRegion:(const char *)region :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4b0f5
- (int)playResetClip:(const char *)clip :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e6f5
- (int)playResetWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e37d
- (int)playRestore:(const char *)restore :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e1d1
- (int)playRotateWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e599
- (int)playSave:(const char *)save :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e191
- (int)playScaleWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e4f1
- (int)playSerializableObject:(const char *)object :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4f1a1
- (int)playSetAntiAliasMode:(const char *)mode :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e8c1
- (int)playSetClipPath:(const char *)path :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e7c5
- (int)playSetClipRect:(const char *)rect :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e775
- (int)playSetClipRegion:(const char *)region :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e861
- (int)playSetCompositingMode:(const char *)mode :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e911
- (int)playSetCompositingQuality:(const char *)quality :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e915
- (int)playSetInterpolationMode:(const char *)mode :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e8e5
- (int)playSetPageTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e649
- (int)playSetPixelOffsetMode:(const char *)mode :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e90d
- (int)playSetRenderingOrigin:(const char *)origin :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e869
- (int)playSetTextContrast:(const char *)contrast :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e8e1
- (int)playSetTextRenderingHint:(const char *)hint :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e8dd
- (int)playSetWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e325
- (int)playSharpenEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4e9a1
- (int)playStringFormat:(const char *)format :(unsigned long)arg2 :(unsigned char)arg3;	// 0x33c4b315
- (int)playStrokePath:(CGPathRef)path :(const char *)arg2 :(unsigned long)arg3 :(unsigned short)arg4;	// 0x33c4b7d9
- (int)playTintEffectWithData:(const char *)data size:(unsigned long)size;	// 0x33c4edbd
- (int)playTranslateWorldTransform:(const char *)transform :(unsigned long)arg2 :(unsigned short)arg3;	// 0x33c4e449
- (int)playUnknown:(const char *)unknown :(unsigned long)arg2 :(int)arg3 :(unsigned short)arg4;	// 0x33c49be1
- (int)readBrush:(const char *)brush :(unsigned long)arg2 returnBrush:(id *)brush3;	// 0x33c4a3ad
- (int)readGradientBrush:(id)brush from:(const char **)from brushFlags:(unsigned long)flags;	// 0x33c49ff5
- (int)readImage:(const char *)image :(unsigned long)arg2 :(id *)arg3;	// 0x33c49be9
- (int)readPath:(const char *)path :(unsigned long)arg2 returnPath:(CGPathRef *)path3;	// 0x33c49df1
- (void)resetLargeRecord;	// 0x33c4f361
- (int)setClipPath:(CGPathRef)path flags:(unsigned short)flags;	// 0x33c4e71d
// converted property setter: - (void)setEffect:(id)effect;	// 0x33c49ba5
@end

