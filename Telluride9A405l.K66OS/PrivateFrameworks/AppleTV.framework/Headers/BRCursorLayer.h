/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMultiPartWidgetLayer.h"


__attribute__((visibility("hidden")))
@interface BRCursorLayer : BRMultiPartWidgetLayer {
@private
	float _radius;	// 100 = 0x64
	float _haloPercentage;	// 104 = 0x68
}
@property(assign) float cornerRadius;	// G=0x35debe29; S=0x35debe39; converted property
@property(assign) float haloPercentage;	// G=0x35debe09; S=0x35debe19; converted property
- (id)init;	// 0x35debdad
- (void)applyMapForCornerRadius:(float)cornerRadius;	// 0x35debe79
// converted property getter: - (float)cornerRadius;	// 0x35debe29
// converted property getter: - (float)haloPercentage;	// 0x35debe09
// converted property setter: - (void)setCornerRadius:(float)radius;	// 0x35debe39
// converted property setter: - (void)setHaloPercentage:(float)percentage;	// 0x35debe19
@end

