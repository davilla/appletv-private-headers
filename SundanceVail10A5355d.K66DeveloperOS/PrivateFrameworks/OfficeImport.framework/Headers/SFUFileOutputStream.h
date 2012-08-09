/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface SFUFileOutputStream : NSObject <SFUOutputStream> {
	FILE *mFile;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x31e4b86d
- (BOOL)canCreateInputStream;	// 0x31e4bcc1
- (BOOL)canSeek;	// 0x31e4bbe1
- (void)close;	// 0x31e4bcc9
- (id)closeLocalStream;	// 0x31e4bced
- (void)dealloc;	// 0x31e4b9b1
- (id)inputStream;	// 0x31e4bcc5
- (long long)offset;	// 0x31e4bb01
- (id)path;	// 0x31e4ba15
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x31e4bbe5
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x31e4ba25
@end
