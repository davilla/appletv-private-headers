/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "SFUOutputStream.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUFileOutputStream : NSObject <SFUOutputStream> {
@private
	FILE *mFile;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x3464bb7d
- (BOOL)canCreateInputStream;	// 0x3464bb5d
- (BOOL)canSeek;	// 0x3464bb59
- (void)close;	// 0x3464bc9d
- (id)closeLocalStream;	// 0x3464bb65
- (void)dealloc;	// 0x3464bcbd
- (id)inputStream;	// 0x3464bb61
- (long long)offset;	// 0x3464bde5
- (id)path;	// 0x3464bb49
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x3464beb9
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x3464bd15
@end

