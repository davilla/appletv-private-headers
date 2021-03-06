/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class MFGraphicsDevice;

__attribute__((visibility("hidden")))
@interface EMFPlayer : NSObject {
@private
	MFGraphicsDevice *m_gdi;	// 4 = 0x4
	BOOL m_headerDone;	// 8 = 0x8
}
+ (CGRect)boundsInLogicalUnits:(id)logicalUnits;	// 0x31b19425
+ (CGRect)boundsInPoints:(id)points;	// 0x31b181ad
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x31978501
- (void)dealloc;	// 0x3198785d
- (void)done;	// 0x3197d5d1
- (int)play:(unsigned)play :(const char *)arg2;	// 0x31978615
- (int)playAbortPath:(unsigned)path :(const char *)arg2;	// 0x31b182dd
- (int)playAngleArc:(unsigned)arc :(const char *)arg2 :(BOOL)arg3;	// 0x31b18bfd
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x31b18dc1
- (int)playArcTo:(unsigned)to :(const char *)arg2;	// 0x31b18d3d
- (int)playBeginPath:(unsigned)path :(const char *)arg2;	// 0x31a05e51
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x3197ba69
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x31b18cb9
- (int)playCloseFigure:(unsigned)figure :(const char *)arg2;	// 0x31a064c9
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3197b869
- (int)playCreateDibPatternBrushPT:(unsigned)pt :(const char *)arg2;	// 0x31a5de01
- (int)playCreateMonoBrush:(unsigned)brush :(const char *)arg2;	// 0x31a9d2d5
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x31a78c01
- (int)playCreatePen:(unsigned)pen :(const char *)arg2;	// 0x3197cbb9
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x3197d43d
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x31a5d409
- (int)playEndPath:(unsigned)path :(const char *)arg2;	// 0x31a065e9
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x31a5812d
- (int)playExtCreateFontIndirectW:(unsigned)w :(const char *)arg2;	// 0x3197a79d
- (int)playExtCreatePen:(unsigned)pen :(const char *)arg2;	// 0x31a05ce1
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2 :(BOOL)arg3;	// 0x3197af25
- (int)playExtTextOutA:(unsigned)a :(const char *)arg2;	// 0x31a57839
- (int)playExtTextOutW:(unsigned)w :(const char *)arg2;	// 0x3197af01
- (int)playFillRgn:(unsigned)rgn :(const char *)arg2;	// 0x31b193b1
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x3197936d
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x319f7261
- (int)playInvertRgn:(unsigned)rgn :(const char *)arg2;	// 0x31b19309
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x3197cdfd
- (int)playMaskBlt:(unsigned)blt :(const char *)arg2;	// 0x31b1888d
- (int)playModifyWorldTransform:(unsigned)transform :(const char *)arg2;	// 0x31a5e9b1
- (int)playMoveToEx:(unsigned)ex :(const char *)arg2;	// 0x3197cd4d
- (int)playPaintRgn:(unsigned)rgn :(const char *)arg2;	// 0x31b1935d
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x31a5d7e5
- (int)playPlgBlt:(unsigned)blt :(const char *)arg2;	// 0x31b184f5
- (int)playPolyBezier:(unsigned)bezier :(const char *)arg2 :(BOOL)arg3;	// 0x31a77c09
- (int)playPolyBezierTo:(unsigned)to :(const char *)arg2 :(BOOL)arg3;	// 0x31a05f5d
- (int)playPolyDraw:(unsigned)draw :(const char *)arg2 :(BOOL)arg3;	// 0x31b18f19
- (int)playPolyLine:(unsigned)line :(const char *)arg2 :(BOOL)arg3;	// 0x31984561
- (int)playPolyLineTo:(unsigned)to :(const char *)arg2 :(BOOL)arg3;	// 0x31a8e881
- (int)playPolyPolyLine:(unsigned)line :(const char *)arg2 :(BOOL)arg3;	// 0x31a911ed
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2 :(BOOL)arg3;	// 0x31984665
- (int)playPolygon:(unsigned)polygon :(const char *)arg2 :(BOOL)arg3;	// 0x319f7415
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x31a78ce1
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x319f735d
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x31b190d9
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x319f719d
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x31b18e89
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x319f7171
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x31a899e1
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x31b19251
- (int)playSelectClipPath:(unsigned)path :(const char *)arg2;	// 0x31a62439
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x319847b9
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x31979df5
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x319f71e1
- (int)playSetArcDirection:(unsigned)direction :(const char *)arg2;	// 0x31b18e45
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x319f7301
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x3197a725
- (int)playSetBrushOrg:(unsigned)org :(const char *)arg2;	// 0x3197b799
- (int)playSetDIBitsToDevice:(unsigned)device :(const char *)arg2;	// 0x31b182fd
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x319844b5
- (int)playSetMetaRgn:(unsigned)rgn :(const char *)arg2;	// 0x31a622a5
- (int)playSetMiterLimit:(unsigned)limit :(const char *)arg2;	// 0x31a5ebed
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x31b19141
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x31a05c95
- (int)playSetRop2:(unsigned)a2 :(const char *)arg2;	// 0x31a580e9
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x31a5ddbd
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x3197999d
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x3197ae35
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x31a8de51
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x319844f9
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x319f74dd
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x31979ce9
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x31979aa5
- (int)playSetWorldTransform:(unsigned)transform :(const char *)arg2;	// 0x31a622e9
- (int)playStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x31a5d589
- (int)playStretchDIBits:(unsigned)bits :(const char *)arg2;	// 0x31a27621
- (int)playStrokeAndFillPath:(unsigned)path :(const char *)arg2 :(BOOL)arg3 :(BOOL)arg4;	// 0x31a06665
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x31b181a9
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x31979999
- (int)playWidenPath:(unsigned)path :(const char *)arg2;	// 0x31b182bd
@end

