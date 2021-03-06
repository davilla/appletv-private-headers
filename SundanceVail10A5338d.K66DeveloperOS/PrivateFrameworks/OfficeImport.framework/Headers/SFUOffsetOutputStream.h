/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library


@interface SFUOffsetOutputStream : NSObject <SFUOutputStream> {
	id<SFUOutputStream> mOutputStream;	// 4 = 0x4
	long long mInitialOffset;	// 8 = 0x8
}
- (id)initWithOutputStream:(id)outputStream;	// 0x33c1f395
- (BOOL)canCreateInputStream;	// 0x33c1f5a9
- (BOOL)canSeek;	// 0x33c1f465
- (void)close;	// 0x33c1f66d
- (id)closeLocalStream;	// 0x33c1f68d
- (void)dealloc;	// 0x33c1f3f9
- (id)inputStream;	// 0x33c1f5cd
- (long long)offset;	// 0x33c1f4c9
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x33c1f489
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x33c1f445
@end

