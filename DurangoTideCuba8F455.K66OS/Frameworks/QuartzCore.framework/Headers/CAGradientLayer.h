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
@property(retain) id colorMap;	// G=0x33414711; S=0x3341471d; 
@property(copy) NSArray *colors;	// G=0x3341469d; S=0x334146c5; 
@property(assign) CGPoint endPoint;	// G=0x334146d1; S=0x334146f5; 
@property(copy) NSArray *locations;	// G=0x33414691; S=0x334146b9; 
@property(assign) CGPoint startPoint;	// G=0x334146e1; S=0x33414701; 
@property(copy) NSString *type;	// G=0x33414681; S=0x334146a9; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x33414589
+ (id)defaultValueForKey:(id)key;	// 0x33414729
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x334147c5
- (id)_implicitActionForKey:(id)key;	// 0x334145dd
- (void)_renderBackgroundInContext:(CGContextRef)context;	// 0x334149e5
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x334144f1
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x334144b5
// declared property getter: - (id)colorMap;	// 0x33414711
// declared property getter: - (id)colors;	// 0x3341469d
- (void)didChangeValueForKey:(id)key;	// 0x3341452d
// declared property getter: - (CGPoint)endPoint;	// 0x334146d1
// declared property getter: - (id)locations;	// 0x33414691
// declared property setter: - (void)setColorMap:(id)map;	// 0x3341471d
// declared property setter: - (void)setColors:(id)colors;	// 0x334146c5
// declared property setter: - (void)setEndPoint:(CGPoint)point;	// 0x334146f5
// declared property setter: - (void)setLocations:(id)locations;	// 0x334146b9
// declared property setter: - (void)setStartPoint:(CGPoint)point;	// 0x33414701
// declared property setter: - (void)setType:(id)type;	// 0x334146a9
// declared property getter: - (CGPoint)startPoint;	// 0x334146e1
// declared property getter: - (id)type;	// 0x33414681
@end

