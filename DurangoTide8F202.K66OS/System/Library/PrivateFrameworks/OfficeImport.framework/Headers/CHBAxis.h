/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHBAxis : NSObject {
}
+ (Class)chbAxisClassWith:(id)with;	// 0x31ae2a19
+ (Class)chbAxisClassWith:(XlChartPlotAxis *)with plotAxis:(int)axis;	// 0x31a10ad5
+ (int)chbAxisIdForPlotAxis:(int)plotAxis state:(id)state;	// 0x31a10f49
+ (int)chdAxisPositionFromAxisType:(int)axisType;	// 0x31a10fb5
+ (id)readWithXlPlotAxis:(int)xlPlotAxis state:(id)state;	// 0x31a0f839
+ (int)xlPlotAxisTypeFrom:(int)from;	// 0x31ae29fd
@end

