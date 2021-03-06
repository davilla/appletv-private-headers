/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <CALayer.h> // Unknown library

@class AVSynchronizedLayerInternal, AVPlayerItem;

@interface AVSynchronizedLayer : CALayer {
	AVSynchronizedLayerInternal *_syncLayer;	// 48 = 0x30
}
@property(retain, nonatomic) AVPlayerItem *playerItem;	// G=0x31788059; S=0x31788079; 
+ (id)synchronizedLayerWithPlayerItem:(id)playerItem;	// 0x31787f59
- (id)init;	// 0x31787fb5
- (void)dealloc;	// 0x317882d9
- (void)finalize;	// 0x317883c9
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x317881f9
// declared property getter: - (id)playerItem;	// 0x31788059
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x31788079
@end

