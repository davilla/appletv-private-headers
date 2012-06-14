/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFDeviceDriver.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSAffineTransform;

__attribute__((visibility("hidden")))
@interface MFCocoaDeviceDriver : NSObject <MFDeviceDriver> {
@private
	CGRect m_canvas;	// 4 = 0x4
	CGRect m_viewBox;	// 20 = 0x14
	NSAffineTransform *m_viewBoxTransform;	// 36 = 0x24
	NSAffineTransform *m_worldToDeviceTransform;	// 40 = 0x28
	NSAffineTransform *m_combinedTransform;	// 44 = 0x2c
}
+ (int)getROP:(id)rop;	// 0x3440eff5
- (id)initWithCanvas:(CGRect)canvas;	// 0x34409fcd
- (int)activateTransform:(id)transform;	// 0x3440b9c9
- (int)angleArc:(id)arc :(int)arg2 :(int)arg3 :(unsigned long)arg4 :(double)arg5 :(double)arg6;	// 0x3463b155
- (int)arc:(id)arc :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x3455dde5
- (int)arcTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x3463b339
- (int)bezier:(id)bezier :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x3454a349
- (int)bezierTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;	// 0x344d1cad
- (int)bitBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(unsigned long)arg9 :(CGAffineTransform *)arg10 :(unsigned long)arg11;	// 0x34529c79
- (int)chord:(id)chord :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x3463afcd
- (void)concatTransforms;	// 0x3440ba3d
- (id)createBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned)arg7;	// 0x3463af05
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x344bfa61
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(const char *)arg4 :(unsigned)arg5 :(int)arg6;	// 0x344f40c9
- (id)createFont:(int)font;	// 0x3440a50d
- (id)createFont:(long)font :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x3440cd25
- (id)createFontIndirectW:(long)w :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x345286d9
- (id)createHatchBrush:(id)brush :(int)arg2;	// 0x3458306d
- (id)createNullBrush;	// 0x34411405
- (id)createPath;	// 0x3440ad25
- (id)createPatternBrush:(id)brush usePaletteForBilevel:(BOOL)bilevel;	// 0x34534511
- (id)createPen;	// 0x344f4819
- (id)createPen:(int)pen :(long)arg2 :(id)arg3 :(double *)arg4;	// 0x3440a9ed
- (id)createRegionWithPath:(id)path;	// 0x345355f9
- (id)createRegionWithRects:(id)rects :(id)arg2;	// 0x345323e1
- (id)createSolidBrush:(id)brush;	// 0x3440abe9
- (void)dealloc;	// 0x34406329
- (void)drawBezierPath:(id)path dc:(id)dc fill:(BOOL)fill stroke:(BOOL)stroke;	// 0x3440ed7d
- (int)ellipse:(id)ellipse :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x3440e0f9
- (int)excludeClipRect:(CGRect)rect;	// 0x34529d95
- (int)extTextOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int *)arg10 :(int)arg11;	// 0x3440d835
- (int)intersectClipRect:(CGRect)rect;	// 0x34410c59
- (int)lineTo:(id)to :(double)arg2 :(double)arg3;	// 0x3452800d
- (int)maskBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(id)arg9 :(int)arg10 :(int)arg11 :(unsigned long)arg12 :(CGAffineTransform *)arg13 :(unsigned long)arg14;	// 0x3463af71
- (int)patBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(unsigned long)arg6;	// 0x3440f975
- (int)pie:(id)pie :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x34531c9d
- (int)plgBlt:(id)blt :(CGPoint *)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12;	// 0x3463af01
- (int)polyPolygon:(id)polygon :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x344c7c29
- (int)polyPolyline:(id)polyline :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x34564e7d
- (int)polygon:(id)polygon :(CGPoint *)arg2 :(int)arg3;	// 0x344112f5
- (int)polyline:(id)polyline :(CGPoint *)arg2 :(int)arg3;	// 0x34411561
- (int)rectangle:(id)rectangle :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x34411119
- (int)removeClip;	// 0x344f4b99
- (int)roundRect:(id)rect :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(double)arg6 :(double)arg7;	// 0x345711c1
- (int)setMetaRgn;	// 0x34563269
- (void)setTransform:(id)transform;	// 0x34410f91
- (int)setViewBox:(double)box :(double)arg2 :(double)arg3 :(double)arg4;	// 0x3440bde1
- (int)stretchBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int)arg10 :(unsigned long)arg11 :(CGAffineTransform *)arg12 :(unsigned long)arg13;	// 0x344c01fd
- (int)textOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4;	// 0x34534d15
- (void)updateViewBoxTransform;	// 0x3440bf11
@end
