/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ECPackedDataUtils : NSObject {
}
+ (id)dumpDataToHexadecimalString:(char *)hexadecimalString start:(unsigned)start stop:(unsigned)stop nicelyFormatted:(bool)formatted;	// 0x32d13bad
+ (char *)prepareForDataOfLength:(unsigned)length atIndex:(unsigned)index withPreviousLength:(unsigned)previousLength inPackedData:(CFDataRef)packedData packedDataSize:(unsigned)size;	// 0x32d13d3d
+ (id)readStringFromData:(char *)data atOffset:(unsigned)offset withLength:(unsigned)length;	// 0x32d13cd5
+ (bool)setData:(char *)data ofLength:(unsigned)length atIndex:(unsigned)index withPreviousLength:(unsigned)previousLength inPackedData:(CFDataRef)packedData packedDataSize:(unsigned)size;	// 0x32d13d05
+ (void)writeString:(id)string toPackedData:(CFDataRef)packedData packedDataSize:(unsigned)size atIndex:(unsigned)index withPreviousLength:(unsigned short)previousLength outLength:(unsigned short *)length;	// 0x32d13c6d
@end

