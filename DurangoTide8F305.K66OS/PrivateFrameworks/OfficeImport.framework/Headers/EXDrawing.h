/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXDrawing : NSObject {
}
+ (void)readAbsoluteAnchorNode:(xmlNode *)node state:(id)state;	// 0x34576461
+ (EDCellAnchorMarker)readAnchorMarkerFromNode:(xmlNode *)node;	// 0x34563a55
+ (void)readClientDataFromParentNode:(xmlNode *)parentNode state:(id)state;	// 0x34563edd
+ (void)readDrawableNode:(xmlNode *)node anchor:(id)anchor state:(id)state;	// 0x34563b19
+ (void)readFromPart:(id)part state:(id)state;	// 0x345637f5
+ (void)readOneCellAnchorNode:(xmlNode *)node state:(id)state;	// 0x34576ff1
+ (void)readTwoCellAnchorNode:(xmlNode *)node state:(id)state;	// 0x34563939
@end

