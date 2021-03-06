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
- (id)initWithInputStream:(id)inputStream;	// 0x312ce0b5
- (id)initWithInputStream:(id)inputStream initialOffset:(long long)offset;	// 0x312ce0f1
- (BOOL)canSeek;	// 0x312ce2b5
- (void)close;	// 0x312ce365
- (id)closeLocalStream;	// 0x312ce385
- (void)dealloc;	// 0x312ce169
- (void)disableSystemCaching;	// 0x312ce325
- (void)enableSystemCaching;	// 0x312ce345
- (long long)offset;	// 0x312ce1b5
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x312ce295
- (void)seekToOffset:(long long)offset;	// 0x312ce2d9
@end

