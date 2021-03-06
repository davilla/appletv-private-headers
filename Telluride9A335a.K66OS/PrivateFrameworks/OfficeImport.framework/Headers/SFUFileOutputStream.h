/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUFileOutputStream : NSObject <SFUOutputStream> {
@private
	FILE *mFile;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x354050b1
- (BOOL)canCreateInputStream;	// 0x35405091
- (BOOL)canSeek;	// 0x3540508d
- (void)close;	// 0x354051fd
- (id)closeLocalStream;	// 0x35405099
- (void)dealloc;	// 0x35405225
- (id)inputStream;	// 0x35405095
- (long long)offset;	// 0x35405379
- (id)path;	// 0x3540507d
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x35405289
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x35405459
@end

