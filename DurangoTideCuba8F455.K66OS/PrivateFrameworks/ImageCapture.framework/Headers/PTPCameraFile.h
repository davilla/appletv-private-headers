/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFile.h"

@class NSString;

@interface PTPCameraFile : ICCameraFile {
@private
	void *_ptpCameraFileProperties;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
}
@property(copy) id info;	// G=0x332c0505; S=0x332c2ab1; 
@property(readonly, assign) unsigned objHandle;	// G=0x332c04f5; 
@property(retain) NSString *path;	// G=0x332c5af1; S=0x332c5b21; @synthesize=_path
@property(readonly, assign) unsigned storageID;	// G=0x332c04e5; 
@property(readonly, assign) unsigned type;	// G=0x332c04d5; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x332c0641
- (void)dealloc;	// 0x332c2d69
- (void)finalize;	// 0x332c2d11
// declared property getter: - (id)info;	// 0x332c0505
- (id)metadataDict;	// 0x332c716d
// declared property getter: - (unsigned long)objHandle;	// 0x332c04f5
// declared property getter: - (id)path;	// 0x332c5af1
// declared property setter: - (void)setInfo:(id)info;	// 0x332c2ab1
// declared property setter: - (void)setPath:(id)path;	// 0x332c5b21
// declared property getter: - (unsigned long)storageID;	// 0x332c04e5
- (id)thumbData;	// 0x332c45ad
// declared property getter: - (unsigned)type;	// 0x332c04d5
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x332c5bad
@end

