/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString, NSArray;

@interface CAGradientLayer : CALayer {
}
@property(retain) id colorMap;	// G=0x3028b711; S=0x3028b71d; 
@property(copy) NSArray *colors;	// G=0x3028b69d; S=0x3028b6c5; 
@property(assign) CGPoint endPoint;	// G=0x3028b6d1; S=0x3028b6f5; 
@property(copy) NSArray *locations;	// G=0x3028b691; S=0x3028b6b9; 
@property(assign) CGPoint startPoint;	// G=0x3028b6e1; S=0x3028b701; 
@property(copy) NSString *type;	// G=0x3028b681; S=0x3028b6a9; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3028b589
+ (id)defaultValueForKey:(id)key;	// 0x3028b729
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x3028b7c5
- (id)_implicitActionForKey:(id)key;	// 0x3028b5dd
- (void)_renderBackgroundInContext:(CGContextRef)context;	// 0x3028b9e5
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x3028b4f1
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x3028b4b5
// declared property getter: - (id)colorMap;	// 0x3028b711
// declared property getter: - (id)colors;	// 0x3028b69d
- (void)didChangeValueForKey:(id)key;	// 0x3028b52d
// declared property getter: - (CGPoint)endPoint;	// 0x3028b6d1
// declared property getter: - (id)locations;	// 0x3028b691
// declared property setter: - (void)setColorMap:(id)map;	// 0x3028b71d
// declared property setter: - (void)setColors:(id)colors;	// 0x3028b6c5
// declared property setter: - (void)setEndPoint:(CGPoint)point;	// 0x3028b6f5
// declared property setter: - (void)setLocations:(id)locations;	// 0x3028b6b9
// declared property setter: - (void)setStartPoint:(CGPoint)point;	// 0x3028b701
// declared property setter: - (void)setType:(id)type;	// 0x3028b6a9
// declared property getter: - (CGPoint)startPoint;	// 0x3028b6e1
// declared property getter: - (id)type;	// 0x3028b681
@end

