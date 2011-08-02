/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMultiPartWidgetLayer.h"


__attribute__((visibility("hidden")))
@interface BRCursorLayer : BRMultiPartWidgetLayer {
@private
	float _radius;	// 96 = 0x60
	float _haloPercentage;	// 100 = 0x64
}
@property(assign) float cornerRadius;	// G=0x329e6fbd; S=0x329e6fd1; converted property
@property(assign) float haloPercentage;	// G=0x329e6f9d; S=0x329e6fad; converted property
- (id)init;	// 0x329e7069
// converted property getter: - (float)cornerRadius;	// 0x329e6fbd
// converted property getter: - (float)haloPercentage;	// 0x329e6f9d
- (id)imageMapForCornerRadius:(float)cornerRadius;	// 0x329e6fcd
// converted property setter: - (void)setCornerRadius:(float)radius;	// 0x329e6fd1
// converted property setter: - (void)setHaloPercentage:(float)percentage;	// 0x329e6fad
@end
