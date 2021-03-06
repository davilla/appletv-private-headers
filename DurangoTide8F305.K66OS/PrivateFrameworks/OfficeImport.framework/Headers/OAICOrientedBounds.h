/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OAICOrientedBounds : NSObject {
}
+ (id)absoluteOrientedBoundsOfDrawable:(id)drawable;	// 0x345a465d
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)relativeOrientedBounds parentOrientedBounds:(id)bounds parentLogicalBounds:(CGRect)bounds3;	// 0x345a4e45
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)orientedBounds;	// 0x345a48a5
+ (id)adjustedOrientedBoundsWithOrientedBounds:(id)orientedBounds logicalBounds:(CGRect)bounds;	// 0x345a4751
+ (CGRect)axisParallelBoundsOfOrientedBounds:(id)orientedBounds;	// 0x345a4c95
+ (id)relativeOrientedBoundsOfDrawable:(id)drawable;	// 0x345a511d
+ (float)scaleFactorFromLength:(float)length toLength:(float)length2;	// 0x345a4631
+ (CGAffineTransform)transformFromBounds:(CGRect)bounds toOrientedBounds:(id)orientedBounds;	// 0x345a49c5
@end

