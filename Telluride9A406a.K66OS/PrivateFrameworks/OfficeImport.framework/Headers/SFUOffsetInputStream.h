/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"


__attribute__((visibility("hidden")))
@interface SFUOffsetInputStream : NSObject <SFUInputStream> {
@private
	id<SFUInputStream> mInputStream;	// 4 = 0x4
	long long mInitialOffset;	// 8 = 0x8
}
- (id)initWithInputStream:(id)inputStream;	// 0x32afe961
- (id)initWithInputStream:(id)inputStream initialOffset:(long long)offset;	// 0x32afe99d
- (BOOL)canSeek;	// 0x32afeb35
- (void)close;	// 0x32afebdd
- (id)closeLocalStream;	// 0x32afe951
- (void)dealloc;	// 0x32afebfd
- (void)disableSystemCaching;	// 0x32afeb9d
- (void)enableSystemCaching;	// 0x32afebbd
- (long long)offset;	// 0x32afea1d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x32afeb09
- (void)seekToOffset:(long long)offset;	// 0x32afeb59
@end
