/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MFPartialNetworkData : NSObject {
	NSMutableData *_rawData;	// 4 = 0x4
	NSMutableData *_unixData;	// 8 = 0x8
}
@property(retain) NSMutableData *rawData;	// G=0x32fbb9f5; S=0x32fbbc05; converted property
- (void)appendRawData:(id)data;	// 0x32fbbac9
- (id)copyDataWithUnixLineEndings;	// 0x32fbbd05
- (id)dataWithUnixLineEndings;	// 0x32fbbcdd
- (void)dealloc;	// 0x32fbefe9
- (void)purgeCaches;	// 0x32fbbd8d
// converted property getter: - (id)rawData;	// 0x32fbb9f5
- (unsigned)rawDataLength;	// 0x32fbbc91
// converted property setter: - (void)setRawData:(id)data;	// 0x32fbbc05
@end
