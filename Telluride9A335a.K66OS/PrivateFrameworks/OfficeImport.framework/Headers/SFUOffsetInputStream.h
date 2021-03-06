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
- (id)initWithInputStream:(id)inputStream;	// 0x35407961
- (id)initWithInputStream:(id)inputStream initialOffset:(long long)offset;	// 0x3540799d
- (BOOL)canSeek;	// 0x35407b35
- (void)close;	// 0x35407bdd
- (id)closeLocalStream;	// 0x35407951
- (void)dealloc;	// 0x35407bfd
- (void)disableSystemCaching;	// 0x35407b9d
- (void)enableSystemCaching;	// 0x35407bbd
- (long long)offset;	// 0x35407a1d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x35407b09
- (void)seekToOffset:(long long)offset;	// 0x35407b59
@end

