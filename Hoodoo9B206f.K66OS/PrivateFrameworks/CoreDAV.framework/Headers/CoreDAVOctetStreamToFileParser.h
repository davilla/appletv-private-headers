/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOctetStreamParser.h"

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {
	NSFileHandle *_fileHandle;	// 12 = 0xc
}
@property(retain) NSFileHandle *fileHandle;	// G=0x33a010b1; S=0x33a010c5; @synthesize=_fileHandle
- (id)initWithFileHandle:(id)fileHandle;	// 0x33a00fed
- (void)dealloc;	// 0x33a01035
// declared property getter: - (id)fileHandle;	// 0x33a010b1
- (BOOL)processData:(id)data forTask:(id)task;	// 0x33a01081
// declared property setter: - (void)setFileHandle:(id)handle;	// 0x33a010c5
@end

