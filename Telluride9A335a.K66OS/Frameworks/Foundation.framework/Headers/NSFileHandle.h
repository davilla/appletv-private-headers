/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSFileHandle : NSObject {
}
@property(retain) id readabilityHandler;	// G=0x3206aa5d; S=0x3206aa81; converted property
@property(retain) id writeabilityHandler;	// G=0x3206aa15; S=0x3206aa39; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3204742d
+ (id)fileHandleForReadingAtPath:(id)path;	// 0x320473e5
+ (id)fileHandleForReadingFromURL:(id)url error:(id *)error;	// 0x3206a6e5
+ (id)fileHandleForUpdatingAtPath:(id)path;	// 0x3206a69d
+ (id)fileHandleForUpdatingURL:(id)updatingURL error:(id *)error;	// 0x3206a7f5
+ (id)fileHandleForWritingAtPath:(id)path;	// 0x32047c65
+ (id)fileHandleForWritingToURL:(id)url error:(id *)error;	// 0x3206a76d
+ (id)fileHandleWithNullDevice;	// 0x3206a5ed
+ (id)fileHandleWithStandardError;	// 0x3206a551
+ (id)fileHandleWithStandardInput;	// 0x3206a415
+ (id)fileHandleWithStandardOutput;	// 0x3206a4b5
+ (void)initialize;	// 0x320472ed
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;	// 0x3206a655
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id *)error;	// 0x3206a679
- (id)availableData;	// 0x3206a87d
- (void)closeFile;	// 0x3206a9c9
- (int)fileDescriptor;	// 0x3206a9ed
- (unsigned long long)offsetInFile;	// 0x3206a90d
- (id)readDataOfLength:(unsigned)length;	// 0x3206a8c5
- (id)readDataToEndOfFile;	// 0x3206a8a1
// converted property getter: - (id)readabilityHandler;	// 0x3206aa5d
- (unsigned long long)seekToEndOfFile;	// 0x3206a935
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x3206a95d
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x3206aa81
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x3206aa39
- (void)synchronizeFile;	// 0x3206a9a5
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x3206a981
- (void)writeData:(id)data;	// 0x3206a8e9
// converted property getter: - (id)writeabilityHandler;	// 0x3206aa15
@end

