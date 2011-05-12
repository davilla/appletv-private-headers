/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"


@interface CPFontInfo : NSObject <CPDisposable> {
	CFDataRef fontData;	// 4 = 0x4
	char *dataPtr;	// 8 = 0x8
	unsigned offset;	// 12 = 0xc
	unsigned fontDataLength;	// 16 = 0x10
	BOOL valid;	// 20 = 0x14
}
- (id)initWithFontData:(CFDataRef)fontData;	// 0x302bc211
- (CFDataRef)createKernData;	// 0x302bc465
- (void)dealloc;	// 0x302bc2b9
- (void)dispose;	// 0x302bc299
- (void)finalize;	// 0x302bc2f5
- (BOOL)getDescriptor:(XXStruct_FvSZlC *)descriptor;	// 0x302bc331
- (int)kernUnitsPerEm;	// 0x302bc0fd
- (unsigned char)readByte;	// 0x302bc0b5
- (float)readFloat;	// 0x302bc18d
- (int)readLong;	// 0x302bc1ad
- (CGRect)readRect;	// 0x302bc139
- (unsigned)readUnsignedLong;	// 0x302bc1c1
@end

