/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPMediaItemArtwork : NSObject {
@private
	MPMediaItemArtworkInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemArtworkInternal _internal;	// G=0x30144665; S=0x30144679; @synthesize
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x301445d9; 
@property(readonly, assign, nonatomic) CGRect imageCropRect;	// G=0x30144641; 
- (id)initWithImage:(id)image;	// 0x301443e5
// declared property getter: - (MPMediaItemArtworkInternal)_internal;	// 0x30144665
- (id)albumImageDataWithSize:(CGSize)size;	// 0x301445b1
- (id)albumImageWithSize:(CGSize)size;	// 0x30144589
// declared property getter: - (CGRect)bounds;	// 0x301445d9
- (id)coverFlowImageWithSize:(CGSize)size;	// 0x30144561
- (void)dealloc;	// 0x30144485
- (BOOL)hasArtworkAvailable;	// 0x301444d1
// declared property getter: - (CGRect)imageCropRect;	// 0x30144641
- (id)imageDataWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x30144535
- (id)imageWithSize:(CGSize)size;	// 0x301444d5
- (id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x301444fd
// declared property setter: - (void)set_internal:(MPMediaItemArtworkInternal)internal;	// 0x30144679
@end

