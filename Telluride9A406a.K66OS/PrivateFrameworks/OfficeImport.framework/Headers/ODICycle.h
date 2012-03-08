/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODICycle : NSObject {
}
+ (CGRect)boundingBoxWithIsTight:(BOOL)isTight state:(id)state;	// 0x32ad038d
+ (BOOL)map1NodeWithState:(id)state;	// 0x32aceacd
+ (BOOL)map2NodeWithState:(id)state;	// 0x32acead1
+ (CGRect)mapGSpaceWithState:(id)state;	// 0x32aceaa9
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x32aceadd
+ (void)mapNode:(id)node index:(unsigned)index state:(id)state;	// 0x32aceac5
+ (void)mapTransition:(id)transition index:(unsigned)index state:(id)state;	// 0x32aceac9
+ (void)mapWithState:(id)state;	// 0x32ad0225
+ (CGRect)nodeBoundsWithIndex:(unsigned)index state:(id)state;	// 0x32ad0449
+ (unsigned)nodeCountWithState:(id)state;	// 0x32ad01d9
+ (CGSize)nodeSizeWithState:(id)state;	// 0x32acea91
@end
