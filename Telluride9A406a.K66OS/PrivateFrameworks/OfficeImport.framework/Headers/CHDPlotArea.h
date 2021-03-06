/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDAxesCollection, OADGraphicProperties, CHDChartTypesCollection;

__attribute__((visibility("hidden")))
@interface CHDPlotArea : NSObject {
@private
	CHDChartTypesCollection *mChartTypes;	// 4 = 0x4
	CHDAxesCollection *mAxes;	// 8 = 0x8
	OADGraphicProperties *mGraphicProperties;	// 12 = 0xc
	bool mCategoryAxesReversed;	// 16 = 0x10
	bool mCategoryAxesReversedOverridden;	// 17 = 0x11
	bool mContainsVolumeStockType;	// 18 = 0x12
}
@property(assign) bool containsVolumeStockType;	// G=0x32a83065; S=0x32a83075; converted property
@property(retain) id graphicProperties;	// G=0x32994cd5; S=0x329857f1; converted property
- (id)initWithChart:(id)chart;	// 0x3297c3f9
- (id)axes;	// 0x32985c15
- (id)chartTypes;	// 0x32988d35
// converted property getter: - (bool)containsVolumeStockType;	// 0x32a83065
- (void)dealloc;	// 0x32997999
// converted property getter: - (id)graphicProperties;	// 0x32994cd5
- (bool)hasSecondaryAxis;	// 0x32a83255
- (bool)hasSecondaryYAxisDeleted;	// 0x32a831b5
- (bool)isCategoryAxesReversed:(bool)reversed;	// 0x3299069d
- (void)markSecondaryAxes;	// 0x32a83085
// converted property setter: - (void)setContainsVolumeStockType:(bool)type;	// 0x32a83075
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x329857f1
@end

