/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying> {
	NSString *_directoryPath;	// 4 = 0x4
	NSString *_fileName;	// 8 = 0x8
	int _maxNumberOfLogFiles;	// 12 = 0xc
	unsigned long _maxSizeInBytes;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *logDirectoryPath;	// G=0x3233f21d; S=0x3233f231; @synthesize=_directoryPath
@property(copy, nonatomic) NSString *logFileBaseName;	// G=0x3233f241; S=0x3233f255; @synthesize=_fileName
@property(assign, nonatomic) unsigned long maxLogFileSize;	// G=0x3233f265; S=0x3233f275; @synthesize=_maxSizeInBytes
@property(assign, nonatomic) int maxNumberOfLogFiles;	// G=0x3233f285; S=0x3233f295; @synthesize=_maxNumberOfLogFiles
- (id)init;	// 0x3233f0b9
- (id)copyWithZone:(NSZone *)zone;	// 0x3233f16d
- (void)dealloc;	// 0x3233f109
// declared property getter: - (id)logDirectoryPath;	// 0x3233f21d
// declared property getter: - (id)logFileBaseName;	// 0x3233f241
// declared property getter: - (unsigned long)maxLogFileSize;	// 0x3233f265
// declared property getter: - (int)maxNumberOfLogFiles;	// 0x3233f285
// declared property setter: - (void)setLogDirectoryPath:(id)path;	// 0x3233f231
// declared property setter: - (void)setLogFileBaseName:(id)name;	// 0x3233f255
// declared property setter: - (void)setMaxLogFileSize:(unsigned long)size;	// 0x3233f275
// declared property setter: - (void)setMaxNumberOfLogFiles:(int)logFiles;	// 0x3233f295
@end

