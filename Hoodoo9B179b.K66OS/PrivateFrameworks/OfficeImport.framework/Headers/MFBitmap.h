/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface MFBitmap : NSObject {
@private
	int m_width;	// 4 = 0x4
	int m_height;	// 8 = 0x8
	unsigned m_bitsPerPixel;	// 12 = 0xc
	int m_compression;	// 16 = 0x10
	BOOL m_isOS2;	// 20 = 0x14
	unsigned m_infoHeaderSize;	// 24 = 0x18
	unsigned m_paletteSize;	// 28 = 0x1c
	NSMutableData *m_bmpData;	// 32 = 0x20
}
- (id)init;	// 0x329fab0d
- (id)initWithBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned)arg7;	// 0x329fab55
- (id)initWithDIBitmap:(id)dibitmap :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x3287fab9
- (id)initWithDIBitmap:(id)dibitmap :(const char *)arg2 :(unsigned)arg3 :(const char *)arg4 :(unsigned)arg5 :(int)arg6;	// 0x328b4131
- (void)appendDIBPalette:(id)palette :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x3287fe31
- (void)dealloc;	// 0x32882419
- (BOOL)isEmpty;	// 0x32880031
- (BOOL)parseHeader:(const char *)header :(unsigned)arg2;	// 0x3287fcd1
- (BOOL)processDIBHeader:(id)header :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x3287fbb1
- (void)setMonoPalette:(id)palette;	// 0x3288018d
- (void)setNull;	// 0x328e9b99
- (void)writeFileHeader;	// 0x32880049
- (void)writeInfoHeader;	// 0x329faa4d
- (void)writePaletteEntry:(id)entry :(int)arg2;	// 0x328f46f9
@end
