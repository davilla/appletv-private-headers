/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ODICycle.h"


__attribute__((visibility("hidden")))
@interface ODICycle5 : ODICycle {
}
+ (void)addShapeForNode:(id)node relativeBounds:(CGRect)bounds state:(id)state;	// 0x312eb56d
+ (void)addShapeForTransition:(id)transition startAngle:(float)angle endAngle:(float)angle3 state:(id)state;	// 0x312eb6ad
+ (float)intersectionAngleNextToAngle:(float)angle isAfter:(BOOL)after state:(id)state;	// 0x312eb7f9
+ (BOOL)map1NodeWithState:(id)state;	// 0x312ebc11
+ (BOOL)map2NodeWithState:(id)state;	// 0x312ebcb1
+ (CGRect)mapGSpaceWithState:(id)state;	// 0x312eb53d
+ (void)mapNode:(id)node index:(unsigned)index state:(id)state;	// 0x312eb5ed
+ (void)mapStyleForTransition:(id)transition shape:(id)shape state:(id)state;	// 0x312eb7d9
+ (void)mapTransition:(id)transition index:(unsigned)index state:(id)state;	// 0x312ebad1
+ (CGSize)nodeSizeWithState:(id)state;	// 0x312eb4c9
+ (float)normalizedAngle:(float)angle;	// 0x312eb659
@end

