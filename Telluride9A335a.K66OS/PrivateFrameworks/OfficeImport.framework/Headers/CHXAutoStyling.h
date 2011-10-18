/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHAutoStyling.h"
#import "CHAutoStyling.h"


__attribute__((visibility("hidden")))
@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling> {
}
+ (id)colorWithSchemeColorId:(int)schemeColorId shade:(float)shade;	// 0x3532c7e9
+ (id)colorWithSchemeColorId:(int)schemeColorId tint:(float)tint;	// 0x353074c9
+ (id)colorWithSchemeColorId:(int)schemeColorId transformType:(int)type transformValue:(float)value;	// 0x353074e9
- (id)autoAxisColor;	// 0x35307495
- (id)autoAxisStroke;	// 0x3538ce89
- (id)autoChartAreaColor;	// 0x3530730d
- (id)autoColorOfFirstColumnSeriesWithIndex:(int)index seriesCount:(int)count;	// 0x3538d105
- (id)autoColorOfSeriesWithIndex:(int)index;	// 0x3530c04d
- (id)autoMinorGridColor;	// 0x3530b6d1
- (id)autoPlotAreaColor;	// 0x35307e25
- (id)autoStrokeForSeriesIndex:(int)seriesIndex;	// 0x3538ced9
- (void)resolveAxisGraphicProperties:(id)properties;	// 0x3530b7f1
- (void)resolveChartAreaGraphicProperties:(id)properties;	// 0x35307205
- (void)resolveFloorGraphicProperties:(id)properties;	// 0x35307671
- (void)resolveGraphicPropertiesOfErrorBar:(id)errorBar forSeriesIndex:(int)seriesIndex;	// 0x3538cff9
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex;	// 0x3530dae5
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex isLine:(bool)line;	// 0x3530c375
- (void)resolveGraphicPropertiesOfTrendline:(id)trendline forSeriesIndex:(int)seriesIndex;	// 0x3538cf29
- (void)resolveLegendGraphicProperties:(id)properties;	// 0x3530c829
- (void)resolveMajorGridLinesGraphicProperties:(id)properties;	// 0x3530b725
- (void)resolveMarker:(id)marker withSeriesGraphicProperties:(id)seriesGraphicProperties forSeriesIndex:(int)seriesIndex;	// 0x3530bd69
- (void)resolveMinorGridLinesGraphicProperties:(id)properties;	// 0x3530b605
- (void)resolvePlotAreaGraphicProperties:(id)properties;	// 0x35307d09
- (void)resolveWallGraphicProperties:(id)properties;	// 0x35307751
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)graphicProperties;	// 0x3538cd21
- (int)styleColumn;	// 0x3530c33d
- (int)styleRow;	// 0x3530737d
@end

