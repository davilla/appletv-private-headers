/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"


@interface CPFontKerning : NSObject <CPDisposable> {
	CFDataRef kernTable;	// 4 = 0x4
	char *dataPtr;	// 8 = 0x8
	unsigned offset;	// 12 = 0xc
	unsigned kernTableLength;	// 16 = 0x10
	CFDictionaryRef kernDictionary;	// 20 = 0x14
	BOOL override;	// 24 = 0x18
	BOOL valid;	// 25 = 0x19
}
- (id)initWithCGFont:(CGFontRef)cgfont;	// 0x3029ec21
- (id)initWithKernData:(CFDataRef)kernData;	// 0x3029eb69
- (CFDictionaryRef)createKernTable;	// 0x3029ed71
- (void)dealloc;	// 0x3029ec55
- (void)dispose;	// 0x3029ec01
- (void)doKerningPair;	// 0x3029eccd
- (void)doOTSubtable;	// 0x3029e929
- (void)doSubtableFormat0;	// 0x3029ea85
- (void)doSubtableFormat1;	// 0x3029e83d
- (void)doSubtableFormat2;	// 0x3029e841
- (void)doSubtableFormat3;	// 0x3029e845
- (void)doTTSubtable;	// 0x3029e9cd
- (void)doTable;	// 0x3029e849
- (void)finalize;	// 0x3029ec91
- (unsigned char)readByte;	// 0x3029e7f5
- (short)readShort;	// 0x3029eb29
- (unsigned)readUnsignedLong;	// 0x3029ead9
- (unsigned short)readUnsignedShort;	// 0x3029eb41
@end

