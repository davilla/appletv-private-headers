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
@interface WMFPlayer : NSObject {
@private
	MFGraphicsDevice *m_gdi;	// 4 = 0x4
	int m_records;	// 8 = 0x8
	unsigned short m_windowsVersion;	// 12 = 0xc
	BOOL m_boundsSet;	// 14 = 0xe
	BOOL m_ignoreSetWindowOrg;	// 15 = 0xf
}
+ (CGRect)boundsInPoints:(id)points;	// 0x345f3905
+ (CGRect)placeableBounds:(const char *)bounds;	// 0x3455e0a5
+ (CGRect)windowBounds:(id)bounds;	// 0x345f3109
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x3445686d
- (void)dealloc;	// 0x3445f5f1
- (void)done;	// 0x34457f71
- (id)parseRegion:(unsigned)region :(const char *)arg2;	// 0x3453c855
- (int)play:(unsigned)play :(const char *)arg2;	// 0x3445704d
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x34563561
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x345f37ad
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x345f36d5
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x34457bcd
- (int)playCreateDIBPatternBrush:(unsigned)brush :(const char *)arg2;	// 0x3453c7a5
- (int)playCreateFontIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3445a601
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x344d69c9
- (int)playCreatePatternBrush:(unsigned)brush :(const char *)arg2;	// 0x345f3381
- (int)playCreatePenIndirect:(unsigned)indirect :(const char *)arg2;	// 0x34457855
- (int)playCreateRegion:(unsigned)region :(const char *)arg2;	// 0x3453c811
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x34457b99
- (int)playDibBitBlt:(unsigned)blt :(const char *)arg2;	// 0x344d6ec9
- (int)playDibStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x3453119d
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x3446c1ed
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x344d6cf9
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2;	// 0x3445aa41
- (int)playFillRegion:(unsigned)region :(const char *)arg2;	// 0x345f3339
- (int)playFrameRegion:(unsigned)region :(const char *)arg2;	// 0x345f32c9
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x34456ad9
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x3445bafd
- (int)playInvertRegion:(unsigned)region :(const char *)arg2;	// 0x345f3295
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x34457a11
- (int)playMoveTo:(unsigned)to :(const char *)arg2;	// 0x344579b1
- (int)playOffsetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x345f35c5
- (int)playOffsetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x345f360d
- (int)playPaintRegion:(unsigned)region :(const char *)arg2;	// 0x345f3261
- (int)playPatBlt:(unsigned)blt :(const char *)arg2;	// 0x3445c085
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x345376c9
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2;	// 0x34457ce5
- (int)playPolygon:(unsigned)polygon :(const char *)arg2;	// 0x34467c15
- (int)playPolyline:(unsigned)polyline :(const char *)arg2;	// 0x3445c2f1
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x344d6bd9
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x3446c051
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x345f3421
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x3445bc41
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x3456f8a9
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x3445acad
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x344cba7d
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x345f3655
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x345301c9
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x3445797d
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x344d6ba5
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x344cb9e9
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x3445a9ad
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x3445763d
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x345f3461
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x34467d7d
- (int)playSetROP2:(unsigned)a2 :(const char *)arg2;	// 0x344cbbed
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x344c43a9
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x3445c44d
- (int)playSetTextCharExtra:(unsigned)extra :(const char *)arg2;	// 0x3453e86d
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x3445a9e5
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x344cb99d
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x345f357d
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x345f3535
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x34457675
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x344577f9
- (int)playStretchDib:(unsigned)dib :(const char *)arg2;	// 0x344c43e5
- (int)playTextOut:(unsigned)anOut :(const char *)arg2;	// 0x3453ca3d
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x345f30a5
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x3445a5fd
- (long)records;	// 0x345f3095
@end

