/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CHBState.h"

@class EBReaderSheetState;

@interface CHBReaderState : CHBState {
	EBReaderSheetState *mEBReaderSheetState;	// 32 = 0x20
	XlChartBinaryReader *mXlReader;	// 36 = 0x24
	int mAxisGroup;	// 40 = 0x28
	XlChartPlot *mXlCurrentPlot;	// 44 = 0x2c
	int mXlCurrentPlotIndex;	// 48 = 0x30
}
@property(assign) int axisGroup;	// G=0x31cf3b79; S=0x31cf3629; converted property
@property(assign) XlChartPlot *xlCurrentPlot;	// G=0x31cf7621; S=0x31cf7215; converted property
@property(assign) int xlCurrentPlotIndex;	// G=0x31cf7b55; S=0x31cf7205; converted property
- (id)initWithEBReaderSheetState:(id)ebreaderSheetState;	// 0x31cecc1d
// converted property getter: - (int)axisGroup;	// 0x31cf3b79
- (const XlChartSeriesFormat *)defaultFormatForXlSeries:(const XlChartDataSeries *)xlSeries;	// 0x31cf9b69
- (id)ebReaderSheetState;	// 0x31ced3e5
- (void)readAndCacheXlChartDataSeries;	// 0x31ceeadd
- (id)resources;	// 0x31cf1dc1
// converted property setter: - (void)setAxisGroup:(int)group;	// 0x31cf3629
// converted property setter: - (void)setXlCurrentPlot:(XlChartPlot *)plot;	// 0x31cf7215
// converted property setter: - (void)setXlCurrentPlotIndex:(int)index;	// 0x31cf7205
- (id)workbook;	// 0x31cf58a5
- (const XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// 0x31cf9b29
// converted property getter: - (XlChartPlot *)xlCurrentPlot;	// 0x31cf7621
// converted property getter: - (int)xlCurrentPlotIndex;	// 0x31cf7b55
- (int)xlPlotCount;	// 0x31cf6529
- (XlChartBinaryReader *)xlReader;	// 0x31ced3d5
@end
