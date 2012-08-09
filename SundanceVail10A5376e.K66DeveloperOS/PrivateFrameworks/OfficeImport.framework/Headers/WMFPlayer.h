/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFGraphicsDevice;

@interface WMFPlayer : NSObject {
	MFGraphicsDevice *m_gdi;	// 4 = 0x4
	long m_records;	// 8 = 0x8
	unsigned short m_windowsVersion;	// 12 = 0xc
	BOOL m_boundsSet;	// 14 = 0xe
	BOOL m_ignoreSetWindowOrg;	// 15 = 0xf
}
@property(readonly, assign) long records;	// G=0x3715f281; converted property
+ (CGRect)boundsInLogicalUnits:(id)logicalUnits;	// 0x3715fbe5
+ (CGRect)boundsInPoints:(id)points;	// 0x3715fced
+ (CGRect)placeableBounds:(const char *)bounds;	// 0x3709fecd
+ (CGRect)windowBounds:(id)bounds;	// 0x3715fa55
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x3704cc39
- (void)dealloc;	// 0x3704ea05
- (void)done;	// 0x3704e965
- (id)parseRegion:(unsigned)region :(const char *)arg2;	// 0x370cfe91
- (int)play:(unsigned)play :(const char *)arg2;	// 0x3704d2b1
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x3715f3d1
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x3715f295
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x3715f489
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3704db41
- (int)playCreateDIBPatternBrush:(unsigned)brush :(const char *)arg2;	// 0x370bbafd
- (int)playCreateFontIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3704ea59
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x370afab9
- (int)playCreatePatternBrush:(unsigned)brush :(const char *)arg2;	// 0x3715f8a9
- (int)playCreatePenIndirect:(unsigned)indirect :(const char *)arg2;	// 0x3704de35
- (int)playCreateRegion:(unsigned)region :(const char *)arg2;	// 0x370cfe45
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x3704e571
- (int)playDibBitBlt:(unsigned)blt :(const char *)arg2;	// 0x370bb9bd
- (int)playDibStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x3704fe8d
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x370bca8d
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x370af439
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2;	// 0x370af619
- (int)playFillRegion:(unsigned)region :(const char *)arg2;	// 0x3715f945
- (int)playFrameRegion:(unsigned)region :(const char *)arg2;	// 0x3715f98d
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x3704ced1
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x370a6f45
- (int)playInvertRegion:(unsigned)region :(const char *)arg2;	// 0x3715f9ed
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x370af541
- (int)playMoveTo:(unsigned)to :(const char *)arg2;	// 0x370af4d9
- (int)playOffsetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x3715f6a5
- (int)playOffsetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x3715f659
- (int)playPaintRegion:(unsigned)region :(const char *)arg2;	// 0x3715fa21
- (int)playPatBlt:(unsigned)blt :(const char *)arg2;	// 0x370bb799
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x370cfd11
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2;	// 0x370a6d65
- (int)playPolygon:(unsigned)polygon :(const char *)arg2;	// 0x3704dfe9
- (int)playPolyline:(unsigned)polyline :(const char *)arg2;	// 0x3704e71d
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x370bb869
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x370af5ad
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x3715f871
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x370503bd
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x3715f541
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x3704eefd
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x370bcb91
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x3715f5f1
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x370c0dad
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x3704ddd1
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x370afcbd
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x3704fda9
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x3704ee85
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x3704fe4d
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x3715f78d
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x3704df79
- (int)playSetROP2:(unsigned)a2 :(const char *)arg2;	// 0x3704df41
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x3705074d
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x3704fbfd
- (int)playSetTextCharExtra:(unsigned)extra :(const char *)arg2;	// 0x370bcaf9
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x3704fd05
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x3704fcb9
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x3715f6f1
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x3715f73d
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x3704d9b9
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x3704d959
- (int)playStretchDib:(unsigned)dib :(const char *)arg2;	// 0x3705078d
- (int)playTextOut:(unsigned)anOut :(const char *)arg2;	// 0x370b5065
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x3715f291
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x3704ea55
// converted property getter: - (long)records;	// 0x3715f281
@end
