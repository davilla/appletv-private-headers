/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOutputStream;

@interface _NSJSONWriter : NSObject {
	NSOutputStream *outputStream;	// 4 = 0x4
	int kind;	// 8 = 0x8
	char *dataBuffer;	// 12 = 0xc
	unsigned dataBufferLen;	// 16 = 0x10
	unsigned dataLen;	// 20 = 0x14
	BOOL freeDataBuffer;	// 24 = 0x18
	char *tempBuffer;	// 28 = 0x1c
	unsigned tempBufferLen;	// 32 = 0x20
	int totalDataWritten;	// 36 = 0x24
}
- (id)init;	// 0x303411ed
- (int)appendString:(id)string range:(NSRange)range;	// 0x30341765
- (id)dataWithRootObject:(id)rootObject options:(unsigned)options error:(id *)error;	// 0x30341321
- (void)dealloc;	// 0x30341249
- (void)finalize;	// 0x303412b5
- (void)resizeTemporaryBuffer:(unsigned long)buffer;	// 0x303416fd
- (int)writeRootObject:(id)object toStream:(id)stream options:(unsigned)options error:(id *)error;	// 0x30341659
@end
