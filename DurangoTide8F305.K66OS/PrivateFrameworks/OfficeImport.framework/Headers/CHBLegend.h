/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHBLegend : NSObject {
}
+ (int)chdLegendPositionEnumFromXlLegendPosition:(int)xlLegendPosition;	// 0x3453f5c5
+ (id)readCHDLegendEntryFrom:(const XlChartCustomLegend *)from state:(id)state;	// 0x34562061
+ (id)readFrom:(XlChartLegendFrame *)from state:(id)state;	// 0x3453f291
+ (int)xlLegendPositionEnumFromCHDLegendPosition:(int)chdlegendPosition;	// 0x345bacdd
@end

