/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSNumber.h> // Unknown library


@interface NSNumber (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x333b5d5d
@end

@interface NSNumber (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x3340f4f9
- (float)CA_distanceToValue:(id)value;	// 0x3340f365
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x3340f495
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x3340f3ad
@end

