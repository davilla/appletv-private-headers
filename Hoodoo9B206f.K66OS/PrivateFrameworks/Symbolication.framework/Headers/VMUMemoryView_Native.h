/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <NSObject.h> // Unknown library
#import "VMUMemoryView.h"


@interface VMUMemoryView_Native : NSObject <VMUMemoryView> {
	VMURange _addressRange;	// 4 = 0x4
	unsigned long _cursor;	// 20 = 0x14
	char *_data;	// 24 = 0x18
	id _gcKeepAlive;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x30bb8ea1; converted property
@property(assign) unsigned long long cursor;	// G=0x30bb8ec5; S=0x30bbac95; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x30bb8eed
- (long long)LEB128;	// 0x30bb9901
- (unsigned long long)ULEB128;	// 0x30bb9975
// converted property getter: - (VMURange)addressRange;	// 0x30bb8ea1
- (void)advanceCursor:(unsigned long long)cursor;	// 0x30bbaba9
- (id)arrayOfInt16:(unsigned long)int16;	// 0x30bb9fcd
- (id)arrayOfInt32:(unsigned long)int32;	// 0x30bb9ef1
- (id)arrayOfInt64:(unsigned long)int64;	// 0x30bb9e15
- (id)arrayOfInt8:(unsigned long)int8;	// 0x30bba0a9
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x30bb9c61
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x30bb9b85
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x30bb9aa9
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x30bb9d3d
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x30bb9391
// converted property getter: - (unsigned long long)cursor;	// 0x30bb8ec5
- (id)description;	// 0x30bb8f7d
- (dyld_image_info_64)dyldImageInfo;	// 0x30bb958d
- (dyld_image_info_64)dyldImageInfo64;	// 0x30bb946d
- (short)int16;	// 0x30bba835
- (int)int32;	// 0x30bba735
- (long long)int64;	// 0x30bba631
- (BOOL)int8;	// 0x30bba935
- (BOOL)isCursorPointerAligned;	// 0x30bbaa79
- (nlist_64)nlist;	// 0x30bb97d9
- (nlist_64)nlist_64;	// 0x30bb96c1
- (void)pointerAlignCursor;	// 0x30bbaa35
- (id)readBytes:(unsigned long)bytes;	// 0x30bba181
- (void)rewindCursor:(unsigned long long)cursor;	// 0x30bbaabd
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x30bbac95
- (id)stringWithEncoding:(unsigned)encoding;	// 0x30bb9021
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x30bb9371
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x30bb919d
- (unsigned short)uint16;	// 0x30bba431
- (unsigned)uint32;	// 0x30bba331
- (unsigned long long)uint64;	// 0x30bba22d
- (unsigned char)uint8;	// 0x30bba531
@end
