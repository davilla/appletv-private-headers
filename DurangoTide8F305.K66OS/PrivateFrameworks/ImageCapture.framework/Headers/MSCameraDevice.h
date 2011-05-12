/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraDevice.h"


@interface MSCameraDevice : ICCameraDevice {
@private
	void *_msCameraProperties;	// 12 = 0xc
}
- (id)initWithVolumePath:(id)volumePath mediaPaths:(id)paths;	// 0x312eae0d
- (void)dealloc;	// 0x312e8899
- (BOOL)eject;	// 0x312eb531
- (void)enumerateContent;	// 0x312eb129
- (void)finalize;	// 0x312e8845
- (unsigned)itemsInFolder:(char *)folder;	// 0x312eb015
@end

