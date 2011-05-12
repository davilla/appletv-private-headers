/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString, NSFileHandle;

@interface DARollableLog : NSObject {
	NSDate *_lastStatDate;	// 4 = 0x4
	NSString *_baseFilename;	// 8 = 0x8
	NSString *_generationalFilenameFormat;	// 12 = 0xc
	NSFileHandle *_fh;	// 16 = 0x10
	dispatch_source_s *_fdWatcher;	// 20 = 0x14
	dispatch_queue_s *_logQueue;	// 24 = 0x18
	dispatch_queue_s *_logRequestQueue;	// 28 = 0x1c
}
@property(retain) NSFileHandle *fh;	// G=0x3407b665; S=0x3407b695; @synthesize=_fh
@property(retain) NSDate *lastStatDate;	// G=0x3407b67d; S=0x3407b6c1; @synthesize=_lastStatDate
+ (id)_filenameWithBase:(id)base generationalFormat:(id)format generation:(int)generation;	// 0x3407a8b9
+ (id)_generationalFormatFromBase:(id)base;	// 0x3407b6ed
+ (id)allLogFilesForFilename:(id)filename;	// 0x3407a6d1
+ (void)enableLogRolling;	// 0x3407a455
+ (id)loggerWithFilename:(id)filename;	// 0x3407b7b9
- (id)initWithFilename:(id)filename;	// 0x3407aee1
- (id)_filenameWithGenerationNumber:(int)generationNumber;	// 0x3407a871
- (id)_fullCompressedFilePathWithGenerationNumber:(int)generationNumber;	// 0x3407a7f5
- (id)_fullFilePathWithGenerationNumber:(int)generationNumber;	// 0x3407a821
- (void)_loadUpHandle;	// 0x3407a8e1
- (void)_rollLogs;	// 0x3407ad01
- (void)_statFileIfNecessaryForRollingCheck;	// 0x3407a501
- (id)compressFile:(id)file;	// 0x3407b3ad
// declared property getter: - (id)fh;	// 0x3407b665
// declared property getter: - (id)lastStatDate;	// 0x3407b67d
- (void)logData:(id)data;	// 0x3407b0a1
- (void)logString:(id)string;	// 0x3407a49d
// declared property setter: - (void)setFh:(id)fh;	// 0x3407b695
// declared property setter: - (void)setLastStatDate:(id)date;	// 0x3407b6c1
- (void)slurpDataFromFile:(id)file;	// 0x3407affd
@end

