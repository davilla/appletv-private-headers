/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIImage.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPPipelineJPEGDecoder;

@interface MPSurfaceBackedUIImage : UIImage {
	MPPipelineJPEGDecoder *decoder;	// 36 = 0x24
}
- (id)initWithIOSurface:(IOSurfaceRef)iosurface decoder:(id)decoder;	// 0x3378922d
- (void)dealloc;	// 0x33789281
@end

