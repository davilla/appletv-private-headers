/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSRequestDelegate.h"

@class MPMediaItem, NSError, SSKeybagRequest;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
@private
	MPMediaItem *_mediaItem;	// 8 = 0x8
	SSKeybagRequest *_request;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
}
@property(retain, nonatomic) NSError *error;	// G=0x348f3e8d; S=0x348f3e9d; @synthesize=_error
@property(retain, nonatomic) MPMediaItem *mediaItem;	// G=0x348f3e4d; S=0x348f3e5d; @synthesize=_mediaItem
@property(retain, nonatomic) SSKeybagRequest *request;	// G=0x348f3e6d; S=0x348f3e7d; @synthesize=_request
- (id)initWithMediaItem:(id)mediaItem;	// 0x348f3a6d
- (void)dealloc;	// 0x348f3ac1
// declared property getter: - (id)error;	// 0x348f3e8d
// declared property getter: - (id)mediaItem;	// 0x348f3e4d
// declared property getter: - (id)request;	// 0x348f3e6d
- (void)request:(id)request didFailWithError:(id)error;	// 0x348f3d41
- (void)requestDidFinish:(id)request;	// 0x348f3dc1
- (void)resolveError:(id)error;	// 0x348f3b5d
// declared property setter: - (void)setError:(id)error;	// 0x348f3e9d
// declared property setter: - (void)setMediaItem:(id)item;	// 0x348f3e5d
// declared property setter: - (void)setRequest:(id)request;	// 0x348f3e7d
@end

