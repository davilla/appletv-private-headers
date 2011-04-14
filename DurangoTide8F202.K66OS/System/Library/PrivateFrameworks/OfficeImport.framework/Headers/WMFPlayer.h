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
+ (CGRect)boundsInPoints:(id)points;	// 0x31b1b905
+ (CGRect)placeableBounds:(const char *)bounds;	// 0x31a860a5
+ (CGRect)windowBounds:(id)bounds;	// 0x31b1b109
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x3197e86d
- (void)dealloc;	// 0x319875f1
- (void)done;	// 0x3197ff71
- (id)parseRegion:(unsigned)region :(const char *)arg2;	// 0x31a64855
- (int)play:(unsigned)play :(const char *)arg2;	// 0x3197f04d
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x31a8b561
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x31b1b7ad
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x31b1b6d5
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3197fbcd
- (int)playCreateDIBPatternBrush:(unsigned)brush :(const char *)arg2;	// 0x31a647a5
- (int)playCreateFontIndirect:(unsigned)indirect :(const char *)arg2;	// 0x31982601
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x319fe9c9
- (int)playCreatePatternBrush:(unsigned)brush :(const char *)arg2;	// 0x31b1b381
- (int)playCreatePenIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3197f855
- (int)playCreateRegion:(unsigned)region :(const char *)arg2;	// 0x31a64811
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x3197fb99
- (int)playDibBitBlt:(unsigned)blt :(const char *)arg2;	// 0x319feec9
- (int)playDibStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x31a5919d
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x319941ed
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x319fecf9
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2;	// 0x31982a41
- (int)playFillRegion:(unsigned)region :(const char *)arg2;	// 0x31b1b339
- (int)playFrameRegion:(unsigned)region :(const char *)arg2;	// 0x31b1b2c9
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x3197ead9
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x31983afd
- (int)playInvertRegion:(unsigned)region :(const char *)arg2;	// 0x31b1b295
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x3197fa11
- (int)playMoveTo:(unsigned)to :(const char *)arg2;	// 0x3197f9b1
- (int)playOffsetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x31b1b5c5
- (int)playOffsetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x31b1b60d
- (int)playPaintRegion:(unsigned)region :(const char *)arg2;	// 0x31b1b261
- (int)playPatBlt:(unsigned)blt :(const char *)arg2;	// 0x31984085
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x31a5f6c9
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2;	// 0x3197fce5
- (int)playPolygon:(unsigned)polygon :(const char *)arg2;	// 0x3198fc15
- (int)playPolyline:(unsigned)polyline :(const char *)arg2;	// 0x319842f1
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x319febd9
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x31994051
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x31b1b421
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x31983c41
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x31a978a9
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x31982cad
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x319f3a7d
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x31b1b655
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x31a581c9
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x3197f97d
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x319feba5
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x319f39e9
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x319829ad
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x3197f63d
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x31b1b461
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x3198fd7d
- (int)playSetROP2:(unsigned)a2 :(const char *)arg2;	// 0x319f3bed
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x319ec3a9
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x3198444d
- (int)playSetTextCharExtra:(unsigned)extra :(const char *)arg2;	// 0x31a6686d
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x319829e5
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x319f399d
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x31b1b57d
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x31b1b535
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x3197f675
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x3197f7f9
- (int)playStretchDib:(unsigned)dib :(const char *)arg2;	// 0x319ec3e5
- (int)playTextOut:(unsigned)anOut :(const char *)arg2;	// 0x31a64a3d
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x31b1b0a5
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x319825fd
- (long)records;	// 0x31b1b095
@end
