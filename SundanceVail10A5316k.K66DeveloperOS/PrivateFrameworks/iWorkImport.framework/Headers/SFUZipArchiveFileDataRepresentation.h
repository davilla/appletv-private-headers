/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUZipArchiveDataRepresentation.h"
#import "SFUDataRepresentation.h"

@class SFUFileDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
@private
	SFUFileDataRepresentation *mFileRepresentation;	// 20 = 0x14
	int mFd;	// 24 = 0x18
}
- (id)initWithPath:(id)path;	// 0x36cbf985
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x36cbfe51
- (long long)dataLength;	// 0x36cbfba5
- (void)dealloc;	// 0x36cbfb1d
- (BOOL)hasSameLocationAs:(id)as;	// 0x36cbfbe9
- (id)inputStream;	// 0x36cbfbc9
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x36cbfcd1
- (BOOL)isEncrypted;	// 0x36cbfbc5
- (BOOL)isReadable;	// 0x36cbfb81
- (id)path;	// 0x36cbfcb1
@end
