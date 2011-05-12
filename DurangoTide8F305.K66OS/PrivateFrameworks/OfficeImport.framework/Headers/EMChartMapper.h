/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class CHDChartType, CMState, EDResources, CHDAxis, CHDSeries, CHDChart;

__attribute__((visibility("hidden")))
@interface EMChartMapper : CMMapper {
@private
	CHDChart *mChart;	// 8 = 0x8
	CMState *mState;	// 12 = 0xc
	EDResources *mResources;	// 16 = 0x10
	CHDChartType *mMainType;	// 20 = 0x14
	CHDSeries *mMainSeries;	// 24 = 0x18
	CHDAxis *mBaseAxis;	// 28 = 0x1c
	CHDAxis *mPrimaryAxis;	// 32 = 0x20
	CHDAxis *mSecondaryAxis;	// 36 = 0x24
	BOOL mIsHorizontal;	// 40 = 0x28
	BOOL mIsStacked;	// 41 = 0x29
	BOOL mIsPercentStacked;	// 42 = 0x2a
	unsigned mPieIndex;	// 44 = 0x2c
	struct {
		BOOL primaryCategoryHasDates;
		BOOL secondaryCategoryHasDates;
		BOOL primaryAxisHasDates;
		BOOL secondaryAxisHasDates;
	} mPlotInfos;	// 48 = 0x30
	BOOL mHasDateCategory;	// 52 = 0x34
	BOOL mHasPrimaryDateAxis;	// 53 = 0x35
	BOOL mHasSecondaryDateAxis;	// 54 = 0x36
}
+ (CGColorRef)newColorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x344f2f5d
- (id)initWithChart:(id)chart parent:(id)parent;	// 0x344f2579
- (void)_addCategoryAxis:(id)axis series:(id)series state:(id)state toDescription:(id)description;	// 0x344f34d9
- (void)_addGraphicProperties:(id)properties toDescription:(id)description withState:(id)state;	// 0x344f52f1
- (void)_addStandardSeries:(id)series toDescription:(id)description withState:(id)state;	// 0x344f3cb9
- (void)_addUnitAxis:(id)axis series:(id)series state:(id)state toDescription:(id)description;	// 0x344f5541
- (id)_baseDateForState:(id)state;	// 0x34551fbd
- (void)addBackgroundToDescription:(id)description withState:(id)state;	// 0x344f2f85
- (void)addLegendToDescription:(id)description chartSize:(CGSize)size withState:(id)state;	// 0x344f337d
- (void)addSeries:(id)series toDescription:(id)description withState:(id)state;	// 0x344f3c95
- (void)addTitleToDescription:(id)description withState:(id)state;	// 0x344f2d45
- (id)createPdfWithState:(id)state withSize:(CGSize)size;	// 0x344f25a1
@end

