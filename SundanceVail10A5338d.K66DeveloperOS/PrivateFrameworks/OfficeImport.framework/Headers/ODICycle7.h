/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ODICycle.h"


@interface ODICycle7 : ODICycle {
}
+ (void)addShapeForNode:(id)node relativeBounds:(CGRect)bounds state:(id)state;	// 0x33c3cec9
+ (void)addShapeForTransition:(id)transition relativeBounds:(CGRect)bounds rotation:(float)rotation state:(id)state;	// 0x33c3cfb1
+ (BOOL)map1NodeWithState:(id)state;	// 0x33c3d1b1
+ (BOOL)map2NodeWithState:(id)state;	// 0x33c3d24d
+ (CGRect)mapGSpaceWithState:(id)state;	// 0x33c3ce99
+ (void)mapNode:(id)node index:(unsigned)index state:(id)state;	// 0x33c3cf49
+ (void)mapTransition:(id)transition index:(unsigned)index state:(id)state;	// 0x33c3d041
+ (CGSize)nodeSizeWithState:(id)state;	// 0x33c3ce29
@end

