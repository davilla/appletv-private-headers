/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface ICCameraFileProperties : NSObject {
	long long _fileSize;	// 4 = 0x4
	BOOL _hasThumbnail;	// 12 = 0xc
	BOOL _hasMetadata;	// 13 = 0xd
	BOOL _raw;	// 14 = 0xe
	int _fetchingThumbnailLock;	// 16 = 0x10
	BOOL _fetchingThumbnail;	// 20 = 0x14
	int _fetchingMetadataLock;	// 24 = 0x18
	BOOL _fetchingMetadata;	// 28 = 0x1c
	CGImageRef _originalThumbnail;	// 32 = 0x20
	CGImageRef _thumbnail;	// 36 = 0x24
	NSMutableDictionary *_metadata;	// 40 = 0x28
	NSMutableDictionary *_metadata_hidden;	// 44 = 0x2c
	unsigned _orientation;	// 48 = 0x30
	BOOL _hasOverriddenOrientation;	// 52 = 0x34
}
@property(assign) BOOL fetchingMetadata;	// G=0x354f3d61; S=0x354f3d2d; 
@property(assign) BOOL fetchingThumbnail;	// G=0x354f3dc9; S=0x354f3d95; 
@property(assign) long long fileSize;	// G=0x354f3c81; S=0x354f3c4d; @synthesize=_fileSize
@property(assign) BOOL hasMetadata;	// G=0x354f3551; S=0x354f3561; @synthesize=_hasMetadata
@property(assign) BOOL hasOverriddenOrientation;	// G=0x354f34f1; S=0x354f3501; @synthesize=_hasOverriddenOrientation
@property(assign) BOOL hasThumbnail;	// G=0x354f3571; S=0x354f3581; @synthesize=_hasThumbnail
@property(retain) NSMutableDictionary *metadata;	// G=0x354f3cd9; S=0x354f3cb5; @synthesize=_metadata
@property(retain) NSMutableDictionary *metadata_hidden;	// G=0x354f3d15; S=0x354f3cf1; @synthesize=_metadata_hidden
@property(assign) unsigned orientation;	// G=0x354f3511; S=0x354f3521; @synthesize=_orientation
@property(assign) CGImageRef originalThumbnail;	// G=0x354f34e1; S=0x354f3dfd; @dynamic
@property(assign, getter=isRaw) BOOL raw;	// G=0x354f3531; S=0x354f3541; @synthesize=_raw
@property(assign) CGImageRef thumbnail;	// G=0x354f34d1; S=0x354f3e29; @dynamic
- (void)dealloc;	// 0x354f3bd1
// declared property getter: - (BOOL)fetchingMetadata;	// 0x354f3d61
// declared property getter: - (BOOL)fetchingThumbnail;	// 0x354f3dc9
// declared property getter: - (long long)fileSize;	// 0x354f3c81
- (void)finalize;	// 0x354f3e55
// declared property getter: - (BOOL)hasMetadata;	// 0x354f3551
// declared property getter: - (BOOL)hasOverriddenOrientation;	// 0x354f34f1
// declared property getter: - (BOOL)hasThumbnail;	// 0x354f3571
// declared property getter: - (BOOL)isRaw;	// 0x354f3531
// declared property getter: - (id)metadata;	// 0x354f3cd9
// declared property getter: - (id)metadata_hidden;	// 0x354f3d15
// declared property getter: - (unsigned)orientation;	// 0x354f3511
// declared property getter: - (CGImageRef)originalThumbnail;	// 0x354f34e1
// declared property setter: - (void)setFetchingMetadata:(BOOL)metadata;	// 0x354f3d2d
// declared property setter: - (void)setFetchingThumbnail:(BOOL)thumbnail;	// 0x354f3d95
// declared property setter: - (void)setFileSize:(long long)size;	// 0x354f3c4d
// declared property setter: - (void)setHasMetadata:(BOOL)metadata;	// 0x354f3561
// declared property setter: - (void)setHasOverriddenOrientation:(BOOL)orientation;	// 0x354f3501
// declared property setter: - (void)setHasThumbnail:(BOOL)thumbnail;	// 0x354f3581
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x354f3cb5
// declared property setter: - (void)setMetadata_hidden:(id)hidden;	// 0x354f3cf1
// declared property setter: - (void)setOrientation:(unsigned)orientation;	// 0x354f3521
// declared property setter: - (void)setOriginalThumbnail:(CGImageRef)thumbnail;	// 0x354f3dfd
// declared property setter: - (void)setRaw:(BOOL)raw;	// 0x354f3541
// declared property setter: - (void)setThumbnail:(CGImageRef)thumbnail;	// 0x354f3e29
// declared property getter: - (CGImageRef)thumbnail;	// 0x354f34d1
@end

