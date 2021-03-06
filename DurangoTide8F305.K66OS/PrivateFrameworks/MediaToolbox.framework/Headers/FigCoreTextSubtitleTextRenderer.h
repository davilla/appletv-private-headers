/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

#import "MediaToolbox-Structs.h"
#import "FigSubtitleTextRenderer.h"


@interface FigCoreTextSubtitleTextRenderer : FigSubtitleTextRenderer {
@private
	FigCoreTextSubtitleTextRendererPrivate *_priv;	// 4 = 0x4
}
- (id)init;	// 0x34246d91
- (void)dealloc;	// 0x34246dd9
- (void)drawSubtitleText:(CFAttributedStringRef)text inRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x34246e55
@end

