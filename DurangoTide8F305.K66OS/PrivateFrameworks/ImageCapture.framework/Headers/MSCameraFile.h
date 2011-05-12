/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraFile.h"

@class NSString;

@interface MSCameraFile : ICCameraFile {
@private
	void *_msCameraFileProperties;	// 12 = 0xc
}
@property(assign) int bitsPerPixel;	// G=0x312e8685; S=0x312e8695; 
@property(copy) NSString *exifCreationDateTime;	// G=0x312e85a5; S=0x312e8929; 
@property(copy) NSString *exifModificationDateTime;	// G=0x312e85b5; S=0x312e88ed; 
@property(readonly, assign) timespec fsCreationTime;	// G=0x312e8541; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x312e8559; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x312e8531; 
@property(readonly, assign) long long fsSize;	// G=0x312e8571; 
@property(assign) int imgHeight;	// G=0x312e8665; S=0x312e8675; 
@property(assign) int imgWidth;	// G=0x312e8645; S=0x312e8655; 
@property(assign) int thmHeight;	// G=0x312e8625; S=0x312e8635; 
@property(assign) int thmOffset;	// G=0x312e85e5; S=0x312e85f5; 
@property(assign) int thmSize;	// G=0x312e85c5; S=0x312e85d5; 
@property(assign) int thmWidth;	// G=0x312e8605; S=0x312e8615; 
@property(assign) unsigned type;	// G=0x312e8585; S=0x312e8595; 
@property(assign) BOOL updatedBasicMetadata;	// G=0x312e86a5; S=0x312e86b9; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x312e86cd
// declared property getter: - (int)bitsPerPixel;	// 0x312e8685
- (void)dealloc;	// 0x312e89c5
// declared property getter: - (id)exifCreationDateTime;	// 0x312e85a5
// declared property getter: - (id)exifModificationDateTime;	// 0x312e85b5
- (void)finalize;	// 0x312e8965
// declared property getter: - (timespec)fsCreationTime;	// 0x312e8541
// declared property getter: - (timespec)fsModificationTime;	// 0x312e8559
// declared property getter: - (unsigned long long)fsSN;	// 0x312e8531
// declared property getter: - (long long)fsSize;	// 0x312e8571
// declared property getter: - (int)imgHeight;	// 0x312e8665
// declared property getter: - (int)imgWidth;	// 0x312e8645
- (id)metadataDict;	// 0x312ea561
// declared property setter: - (void)setBitsPerPixel:(int)pixel;	// 0x312e8695
// declared property setter: - (void)setExifCreationDateTime:(id)time;	// 0x312e8929
// declared property setter: - (void)setExifModificationDateTime:(id)time;	// 0x312e88ed
// declared property setter: - (void)setImgHeight:(int)height;	// 0x312e8675
// declared property setter: - (void)setImgWidth:(int)width;	// 0x312e8655
// declared property setter: - (void)setThmHeight:(int)height;	// 0x312e8635
// declared property setter: - (void)setThmOffset:(int)offset;	// 0x312e85f5
// declared property setter: - (void)setThmSize:(int)size;	// 0x312e85d5
// declared property setter: - (void)setThmWidth:(int)width;	// 0x312e8615
// declared property setter: - (void)setType:(unsigned)type;	// 0x312e8595
// declared property setter: - (void)setUpdatedBasicMetadata:(BOOL)metadata;	// 0x312e86b9
// declared property getter: - (int)thmHeight;	// 0x312e8625
// declared property getter: - (int)thmOffset;	// 0x312e85e5
// declared property getter: - (int)thmSize;	// 0x312e85c5
// declared property getter: - (int)thmWidth;	// 0x312e8605
- (id)thumbData;	// 0x312e9f41
// declared property getter: - (unsigned)type;	// 0x312e8585
- (void)updateBasicMetadata;	// 0x312ea7ad
// declared property getter: - (BOOL)updatedBasicMetadata;	// 0x312e86a5
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x312e98cd
@end

