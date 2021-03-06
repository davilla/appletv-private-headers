/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSURLDownloadDecoder.h"
#import "NSURLDataDecoder.h"

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder, NSURLDataDecoder> {
	z_stream_s _stream;	// 4 = 0x4
	unsigned _modificationTime;	// 60 = 0x3c
	NSString *_filename;	// 64 = 0x40
	BOOL _streamInitialized;	// 68 = 0x44
	BOOL _decodedHeader;	// 69 = 0x45
	BOOL _finishedInflating;	// 70 = 0x46
	BOOL _pad;	// 71 = 0x47
}
+ (id)MIMEType;	// 0x373d8cf9
+ (BOOL)canDecodeDownloadHeaderData:(id)data;	// 0x373d8cd5
+ (BOOL)decodeDownloadHeader:(id)header headerLength:(int *)length modificationTime:(unsigned *)time filename:(id *)filename;	// 0x373d8b71
- (id)init;	// 0x373d8d05
- (void)dealloc;	// 0x373d8d81
- (id)decodeData:(id)data;	// 0x373d8e41
- (BOOL)decodeDownloadData:(id)data dataForkData:(id *)data2 resourceForkData:(id *)data3;	// 0x373d9005
- (id)fileAttributes;	// 0x373d906d
- (id)filenameWithOriginalFilename:(id)originalFilename;	// 0x373d90e1
- (void)finalize;	// 0x373d8df1
- (BOOL)finishDownloadDecoding;	// 0x373d9055
- (BOOL)isFinishedDecoding;	// 0x373d902d
@end

