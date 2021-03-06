/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODICycle.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ODICycle5 : ODICycle {
}
+ (void)addShapeForNode:(id)node relativeBounds:(CGRect)bounds state:(id)state;	// 0x34626a69
+ (void)addShapeForTransition:(id)transition startAngle:(float)angle endAngle:(float)angle3 state:(id)state;	// 0x34626895
+ (float)intersectionAngleNextToAngle:(float)angle isAfter:(BOOL)after state:(id)state;	// 0x34626531
+ (BOOL)map1NodeWithState:(id)state;	// 0x34626365
+ (BOOL)map2NodeWithState:(id)state;	// 0x34625ad5
+ (CGRect)mapGSpaceWithState:(id)state;	// 0x34626af5
+ (void)mapNode:(id)node index:(unsigned)index state:(id)state;	// 0x34626a11
+ (void)mapStyleForTransition:(id)transition shape:(id)shape state:(id)state;	// 0x34626875
+ (void)mapTransition:(id)transition index:(unsigned)index state:(id)state;	// 0x34626405
+ (CGSize)nodeSizeWithState:(id)state;	// 0x34626b15
+ (float)normalizedAngle:(float)angle;	// 0x346269c1
@end

