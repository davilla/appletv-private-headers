/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQZEntryInputStream.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQZInflateInputStream : NSObject <GQZEntryInputStream> {
@private
	z_stream_s mStream;	// 4 = 0x4
	id<GQZEntryInputStream> mInput;	// 60 = 0x3c
}
- (id)initWithInput:(id)input;	// 0x304ada09
- (void)dealloc;	// 0x304adbc5
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x304adc25
- (void)readToOwnBuffer:(const char **)ownBuffer size:(unsigned *)size;	// 0x304ad9d1
@end

