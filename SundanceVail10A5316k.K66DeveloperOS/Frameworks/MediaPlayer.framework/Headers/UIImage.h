/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImage.h> // Unknown library


@interface UIImage (MPUtilities)
+ (id)imageFromAlbumArtData:(id)albumArtData artworkInfo:(MLArtworkInstanceInfo *)info;	// 0x3480f7e9
- (CGRect)bitmapRectFromImageRect:(CGRect)imageRect;	// 0x3480fa11
@end

@interface UIImage (MMPAdditions)
- (BOOL)mpIsCoverflowPlaceholder;	// 0x348aa3d1
@end

@interface UIImage (MPImageCacheAdditions)
@property(assign, nonatomic) BOOL isPlaceholder;	// G=0x348bdf41; S=0x348bdef9; 
@property(assign, nonatomic) CGRect mediaImageSubRect;	// G=0x348bdd89; S=0x348bde69; 
@property(assign, nonatomic) double mediaImageTime;	// G=0x348bde29; S=0x348bdebd; 
// declared property getter: - (BOOL)isPlaceholder;	// 0x348bdf41
// declared property getter: - (CGRect)mediaImageSubRect;	// 0x348bdd89
// declared property getter: - (double)mediaImageTime;	// 0x348bde29
// declared property setter: - (void)setIsPlaceholder:(BOOL)placeholder;	// 0x348bdef9
// declared property setter: - (void)setMediaImageSubRect:(CGRect)rect;	// 0x348bde69
// declared property setter: - (void)setMediaImageTime:(double)time;	// 0x348bdebd
@end

@interface UIImage (MPAdditions)
- (id)mp_stretchableImageWithLeftCapWidth:(int)leftCapWidth rightCapWidth:(int)width;	// 0x348f372d
@end
