/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLPhoto.h"

@class NSString, NSDate, NSSet;

@interface MLPhotoMemoryStorage : MLPhoto {
@private
	int _imageID;	// 4 = 0x4
	unsigned _durationInMilliseconds;	// 8 = 0x8
	NSString *_videoPath;	// 12 = 0xc
	NSString *_fileExtension;	// 16 = 0x10
	NSString *_metadataPath;	// 20 = 0x14
	NSString *_filenameWithoutExtension;	// 24 = 0x18
	NSDate *_date;	// 28 = 0x1c
	NSSet *_extensions;	// 32 = 0x20
	unsigned _writeIsPending : 1;	// 36 = 0x24
	int _type;	// 40 = 0x28
	double _captureTime;	// 44 = 0x2c
	double _longitude;	// 52 = 0x34
	double _latitude;	// 60 = 0x3c
}
@property(assign) double captureTime;	// G=0x31bdd561; S=0x31bdd571; converted property
@property(assign) double durationInMilliseconds;	// G=0x31bdd525; S=0x31bdd509; converted property
@property(readonly, retain) NSString *filenameWithoutExtension;	// G=0x31bdd5cd; converted property
@property(readonly, assign) int imageID;	// G=0x31bdd4f9; converted property
@property(assign) double latitude;	// G=0x31bdd585; S=0x31bdd595; converted property
@property(assign) double longitude;	// G=0x31bdd5a9; S=0x31bdd5b9; converted property
@property(retain) id pathForVideoFile;	// G=0x31bdd5dd; S=0x31bde021; converted property
- (id)initWithImageID:(int)imageID;	// 0x31bdd705
- (id)_metadataPath;	// 0x31bdd4e9
- (void)_setFilenameFromFullSizeVideoPath:(id)fullSizeVideoPath;	// 0x31bde1e5
- (void)_setMetadataPathFromFullSizeVideoPath:(id)fullSizeVideoPath;	// 0x31bde2e9
- (void)addExtension:(id)extension;	// 0x31bddf3d
// converted property getter: - (double)captureTime;	// 0x31bdd561
- (void)dealloc;	// 0x31bde141
- (id)description;	// 0x31bde0a1
// converted property getter: - (double)durationInMilliseconds;	// 0x31bdd525
- (CGRect)faceRectangles:(id)rectangles;	// 0x31bde2a5
// converted property getter: - (id)filenameWithoutExtension;	// 0x31bdd5cd
- (BOOL)hasFullSizeImageData;	// 0x31bddf8d
// converted property getter: - (int)imageID;	// 0x31bdd4f9
- (BOOL)isWritePending;	// 0x31bdd605
// converted property getter: - (double)latitude;	// 0x31bdd585
// converted property getter: - (double)longitude;	// 0x31bdd5a9
- (id)pathForImageFile;	// 0x31bddfbd
// converted property getter: - (id)pathForVideoFile;	// 0x31bdd5dd
- (id)pathForVideoPreviewFile;	// 0x31bddfa9
- (int)photoType;	// 0x31bdd541
// converted property setter: - (void)setCaptureTime:(double)time;	// 0x31bdd571
- (void)setDate:(id)date;	// 0x31bddeed
// converted property setter: - (void)setDurationInMilliseconds:(double)milliseconds;	// 0x31bdd509
// converted property setter: - (void)setLatitude:(double)latitude;	// 0x31bdd595
// converted property setter: - (void)setLongitude:(double)longitude;	// 0x31bdd5b9
// converted property setter: - (void)setPathForVideoFile:(id)videoFile;	// 0x31bde021
- (void)setType:(int)type;	// 0x31bdd551
- (void)setWriteIsPending:(BOOL)pending;	// 0x31bdd619
@end

