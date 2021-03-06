/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CATextLayer.h"


@interface CASmoothedTextLayer : CATextLayer {
}
@property(assign) unsigned fontSmoothingStyle;	// G=0x36cd9311; S=0x36cd9309; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x36cd91b1
+ (id)defaultValueForKey:(id)key;	// 0x36cd9265
+ (BOOL)needsDisplayForKey:(id)key;	// 0x36cd9209
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x36cd9389
- (void)_drawLine:(CTLineRef)line inContext:(CGContextRef)context atPoint:(CGPoint)point;	// 0x36cd941d
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x36cd9351
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x36cd9319
- (void)didChangeValueForKey:(id)key;	// 0x36cd914d
// declared property getter: - (unsigned)fontSmoothingStyle;	// 0x36cd9311
// declared property setter: - (void)setFontSmoothingStyle:(unsigned)style;	// 0x36cd9309
@end

