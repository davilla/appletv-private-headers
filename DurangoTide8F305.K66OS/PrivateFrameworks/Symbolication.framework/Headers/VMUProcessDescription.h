/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSMutableArray, NSString, NSArray, NSDictionary, NSCalendarDate;

@interface VMUProcessDescription : NSObject {
	unsigned _task;	// 4 = 0x4
	int _pid;	// 8 = 0x8
	CSTypeRef _symbolicator;	// 12 = 0xc
	NSString *_processName;	// 20 = 0x14
	BOOL _processNameNeedsCorrection;	// 24 = 0x18
	NSString *_executablePath;	// 28 = 0x1c
	BOOL _executablePathNeedsCorrection;	// 32 = 0x20
	unsigned long long _executableLoadAddress;	// 36 = 0x24
	int _cpuType;	// 44 = 0x2c
	BOOL _isNative;	// 48 = 0x30
	BOOL _is64Bit;	// 49 = 0x31
	NSDictionary *_lsApplicationInformation;	// 52 = 0x34
	NSMutableArray *_binaryImages;	// 56 = 0x38
	NSArray *_sortedBinaryImages;	// 60 = 0x3c
	NSDictionary *_binaryImageHints;	// 64 = 0x40
	NSArray *_unreadableBinaryImagePaths;	// 68 = 0x44
	BOOL _binaryImagePostProcessingComplete;	// 72 = 0x48
	NSDictionary *_buildVersionDictionary;	// 76 = 0x4c
	NSDictionary *_osVersionDictionary;	// 80 = 0x50
	NSString *_parentProcessName;	// 84 = 0x54
	NSString *_parentExecutablePath;	// 88 = 0x58
	int _ppid;	// 92 = 0x5c
	NSCalendarDate *_date;	// 96 = 0x60
	NSString *_internalError;	// 100 = 0x64
}
@property(readonly, retain) NSMutableArray *binaryImages;	// G=0x311b0ccd; converted property
@property(readonly, assign) int cpuType;	// G=0x311aef3d; converted property
@property(readonly, retain) NSCalendarDate *date;	// G=0x311aef0d; converted property
@property(readonly, retain) NSString *executablePath;	// G=0x311aef6d; converted property
@property(readonly, retain) NSString *parentProcessName;	// G=0x311aef5d; converted property
@property(readonly, assign) int pid;	// G=0x311aef2d; converted property
@property(readonly, retain) NSString *processName;	// G=0x311aef4d; converted property
@property(readonly, assign) unsigned task;	// G=0x311aef1d; converted property
- (id)initWithPid:(int)pid orTask:(unsigned)task;	// 0x311afae9
- (id)_binaryImagesDescriptionForRanges:(id)ranges;	// 0x311b1335
- (id)_buildInfoDescription;	// 0x311af3b9
- (id)_buildVersionDictionary;	// 0x311aef95
- (id)_bundleLock;	// 0x311b0ca9
- (id)_cpuTypeDescription;	// 0x311af4ed
- (void)_extractBinaryImageInfoFromSymbolOwner:(CSTypeRef)symbolOwner;	// 0x311b06a5
- (double)_extractDyldInfoFromSymbolOwner:(CSTypeRef)symbolOwner withNonContiguousMemory:(id)nonContiguousMemory;	// 0x311b0415
- (id)_extractInfoPlistFromSymbolOwner:(CSTypeRef)symbolOwner withNonContiguousMemory:(id)nonContiguousMemory;	// 0x311b04fd
- (id)_osVersionDictionary;	// 0x311b1ad5
- (id)_rangesOfBinaryImages:(id)binaryImages forBacktraces:(id)backtraces;	// 0x311b17b5
- (id)_readDataFromMemory:(id)memory atAddress:(unsigned long long)address size:(unsigned long)size;	// 0x311af88d
- (id)_sanitizeVersion:(id)version;	// 0x311af7f5
- (id)_systemVersionDescription;	// 0x311af2f1
- (id)binaryImageDictionaryForAddress:(unsigned)address;	// 0x311af575
// converted property getter: - (id)binaryImages;	// 0x311b0ccd
- (id)binaryImagesDescription;	// 0x311af495
- (id)binaryImagesDescriptionForBacktraces:(id)backtraces;	// 0x311af4ad
- (id)bundleIdentifier;	// 0x311af741
// converted property getter: - (int)cpuType;	// 0x311aef3d
// converted property getter: - (id)date;	// 0x311aef0d
- (id)dateAndVersionDescription;	// 0x311af019
- (void)dealloc;	// 0x311b1209
- (id)description;	// 0x311aefa5
- (id)displayName;	// 0x311af851
// converted property getter: - (id)executablePath;	// 0x311aef6d
- (BOOL)isAppleApplication;	// 0x311af6e1
- (BOOL)isTranslated;	// 0x311aef7d
// converted property getter: - (id)parentProcessName;	// 0x311aef5d
// converted property getter: - (int)pid;	// 0x311aef2d
- (id)processDescriptionHeader;	// 0x311af095
- (id)processIdentifier;	// 0x311af865
// converted property getter: - (id)processName;	// 0x311aef4d
- (id)processVersion;	// 0x311af76d
- (id)processVersionDictionary;	// 0x311af915
// converted property getter: - (unsigned)task;	// 0x311aef1d
@end

