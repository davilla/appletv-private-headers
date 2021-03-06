/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPImageCacheRequest.h"
#import "MediaPlayer-Structs.h"

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest {
@private
	NSURL *_url;	// 60 = 0x3c
	BOOL _usePlaceholderAsFallback;	// 64 = 0x40
}
@property(assign, nonatomic) BOOL usePlaceholderAsFallback;	// G=0x348fb1a9; S=0x348fb1b9; @synthesize=_usePlaceholderAsFallback
- (id)initWithURL:(id)url;	// 0x348fae65
- (id)copyRawImageReturningError:(id *)error;	// 0x348faf51
- (void)dealloc;	// 0x348faf05
- (id)placeholderImage;	// 0x348fb121
// declared property setter: - (void)setUsePlaceholderAsFallback:(BOOL)fallback;	// 0x348fb1b9
- (id)uniqueKey;	// 0x348fb189
// declared property getter: - (BOOL)usePlaceholderAsFallback;	// 0x348fb1a9
@end

