/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "STSStgObject.h"


__attribute__((visibility("hidden")))
@interface STStream : STSStgObject {
@private
	Stream *m_pCStream;	// 4 = 0x4
}
- (id)initWithCStream:(Stream *)cstream;	// 0x313a82ad
- (void)close;	// 0x313a8cf5
- (void)dealloc;	// 0x313a8d15
- (id)getInfo;	// 0x313a8c15
- (unsigned long)getPos;	// 0x313a8ba1
- (id)readBytes:(unsigned long)bytes;	// 0x313a8a89
- (unsigned char)readLEboolean;	// 0x313a8999
- (unsigned char)readLEbyte;	// 0x313a89f1
- (BOOL)readLEchar;	// 0x313a8a3d
- (double)readLEdouble;	// 0x313a87ed
- (unsigned long)readLEdword;	// 0x313a8881
- (float)readLEfloat;	// 0x313a883d
- (long)readLElong;	// 0x313a88c5
- (short)readLEshort;	// 0x313a8951
- (unsigned short)readLEunichar;	// 0x313a87a9
- (unsigned short)readLEword;	// 0x313a8909
- (id)readLEwstring:(unsigned long)ewstring;	// 0x313a8695
- (void)releaseCStream;	// 0x313a8299
- (void)seek:(long)seek fromOrigin:(int)origin;	// 0x313a8bc5
- (void)setClass:(SSRW_GUID)aClass;	// 0x313a8b4d
- (void)writeBytes:(id)bytes;	// 0x313a8625
- (void)writeLEboolean:(unsigned char)eboolean;	// 0x313a854d
- (void)writeLEbyte:(unsigned char)ebyte;	// 0x313a85dd
- (void)writeLEchar:(BOOL)echar;	// 0x313a8595
- (void)writeLEdouble:(double)edouble;	// 0x313a83e5
- (void)writeLEdword:(unsigned long)edword;	// 0x313a845d
- (void)writeLEfloat:(float)efloat;	// 0x313a8421
- (void)writeLElong:(long)elong;	// 0x313a8499
- (void)writeLEshort:(short)eshort;	// 0x313a8511
- (void)writeLEunichar:(unsigned short)eunichar;	// 0x313a83d1
- (void)writeLEword:(unsigned short)eword;	// 0x313a84d5
- (void)writeLEwstring:(id)ewstring;	// 0x313a8361
- (void)writeLEwstringNoTerminator:(id)terminator;	// 0x313a82f1
@end

