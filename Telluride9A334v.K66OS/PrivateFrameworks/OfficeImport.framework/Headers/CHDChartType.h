/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDChart, CHDSeriesCollection, EDCollection, CHDDataLabel;

__attribute__((visibility("hidden")))
@interface CHDChartType : NSObject {
@private
	CHDChart *mChart;	// 4 = 0x4
	EDCollection *mAxisIds;	// 8 = 0x8
	CHDSeriesCollection *mSeries;	// 12 = 0xc
	CHDDataLabel *mDefaultDataLabel;	// 16 = 0x10
	bool mVaryColors;	// 20 = 0x14
}
@property(retain) id defaultDataLabel;	// G=0x35745cd9; S=0x35650951; converted property
@property(retain) id seriesCollection;	// G=0x3564fcf5; S=0x356cdde9; converted property
@property(assign, getter=isVaryColors) bool varyColors;	// G=0x356cca75; S=0x3564d8a1; converted property
+ (id)chartTypeWithChart:(id)chart;	// 0x356c34a5
+ (bool)is3DType;	// 0x356e2311
- (id)initWithChart:(id)chart;	// 0x3564d791
- (id)axes;	// 0x35656931
- (id)axisForClass:(Class)aClass;	// 0x35745d35
- (id)axisIds;	// 0x3564d8b1
- (id)chart;	// 0x356510c5
- (id)contentFormat;	// 0x35745d15
- (void)dealloc;	// 0x3565ba0d
// converted property getter: - (id)defaultDataLabel;	// 0x35745cd9
- (int)defaultLabelPosition;	// 0x35745ce9
- (id)defaultTitleWithResources:(id)resources;	// 0x356e3171
- (bool)isHorizontal;	// 0x356511a9
- (bool)isPlotedOnSecondaryAxis;	// 0x35745e11
// converted property getter: - (bool)isVaryColors;	// 0x356cca75
// converted property getter: - (id)seriesCollection;	// 0x3564fcf5
// converted property setter: - (void)setDefaultDataLabel:(id)label;	// 0x35650951
// converted property setter: - (void)setSeriesCollection:(id)collection;	// 0x356cdde9
// converted property setter: - (void)setVaryColors:(bool)colors;	// 0x3564d8a1
@end

