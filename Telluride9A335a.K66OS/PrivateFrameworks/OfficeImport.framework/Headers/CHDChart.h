/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableContainer.h"
#import "OADGraphic.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, CHDDefaultTextProperties, EDSheet, CHDView3D, CHDPlotArea, CHDLegend, CHDTitle, EDWorkbook, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDChart : OADGraphic <OADDrawableContainer> {
@private
	EDSheet *mSheet;	// 28 = 0x1c
	int mStyleId;	// 32 = 0x20
	bool mAutoTitleDeleted;	// 36 = 0x24
	bool mPlotVisibleCellsOnly;	// 37 = 0x25
	bool mMSGraph;	// 38 = 0x26
	bool mDirectionChanged;	// 39 = 0x27
	int mDisplayBlankCellsAs;	// 40 = 0x28
	CHDPlotArea *mPlotArea;	// 44 = 0x2c
	CHDView3D *mView3D;	// 48 = 0x30
	CHDTitle *mTitle;	// 52 = 0x34
	CHDLegend *mLegend;	// 56 = 0x38
	EDWorkbook *mExternalData;	// 60 = 0x3c
	OADGraphicProperties *mChartAreaGraphicProperties;	// 64 = 0x40
	OADGraphicProperties *mBackWallGraphicProperties;	// 68 = 0x44
	OADGraphicProperties *mSideWallGraphicProperties;	// 72 = 0x48
	OADGraphicProperties *mFloorGraphicProperties;	// 76 = 0x4c
	CHDDefaultTextProperties *mDefaultTextProperties;	// 80 = 0x50
	int mChartDirection;	// 84 = 0x54
	CGRect mLogicalBounds;	// 88 = 0x58
	NSMutableArray *mDrawables;	// 104 = 0x68
}
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// G=0x3538a7a5; S=0x35296541; converted property
@property(retain) id backWallGraphicProperties;	// G=0x3538a7f5; S=0x35297629; converted property
@property(retain) id chartAreaGraphicProperties;	// G=0x3529dd99; S=0x3528a609; converted property
@property(retain) id defaultTextProperties;	// G=0x3528d15d; S=0x3538a879; converted property
@property(assign) int direction;	// G=0x35296149; S=0x35299581; converted property
@property(assign, getter=isDirectionChanged) bool directionChanged;	// G=0x3538a869; S=0x35312e31; converted property
@property(assign) int displayBlankAs;	// G=0x3538a7c5; S=0x3528a67d; converted property
@property(retain) id externalData;	// G=0x3538a7e5; S=0x3530cd89; converted property
@property(retain) id floorGraphicProperties;	// G=0x3538a815; S=0x352911a5; converted property
@property(retain) id legend;	// G=0x35294cc5; S=0x352f9e95; converted property
@property(assign) CGRect logicalBounds;	// G=0x3538a825; S=0x352884e9; converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// G=0x3529927d; S=0x3538a859; converted property
@property(retain) id plotArea;	// G=0x3528e0d9; S=0x3529642d; converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// G=0x3538a7b5; S=0x3528a659; converted property
@property(retain) id sheet;	// G=0x3538a795; S=0x35287d09; converted property
@property(retain) id sideWallGraphicProperties;	// G=0x3538a805; S=0x352975e1; converted property
@property(assign) int styleId;	// G=0x353073b1; S=0x35287d19; converted property
@property(retain) id title;	// G=0x3529d91d; S=0x352964f9; converted property
@property(retain) id view3D;	// G=0x3538a7d5; S=0x35292189; converted property
+ (id)binaryEffects:(BOOL)effects;	// 0x35289ef5
- (id)init;	// 0x3528528d
- (void)addChild:(id)child;	// 0x352885d9
- (void)addChildren:(id)children;	// 0x3538a8e1
// converted property getter: - (id)backWallGraphicProperties;	// 0x3538a7f5
// converted property getter: - (id)chartAreaGraphicProperties;	// 0x3529dd99
- (id)childAtIndex:(unsigned)index;	// 0x3538a961
- (unsigned)childCount;	// 0x3538a8c1
- (id)children;	// 0x3538a849
- (void)dealloc;	// 0x352a0885
- (id)defaultContentFormat;	// 0x3538ac05
- (id)defaultDataLabelFont;	// 0x3538aae5
- (unsigned)defaultFontIndex;	// 0x352f9d0d
- (id)defaultFontWithResources:(id)resources;	// 0x3538ac45
- (int)defaultLabelPosition;	// 0x3538ac99
- (id)defaultSeriesTitleFont;	// 0x3538ab75
- (id)defaultTextFont;	// 0x3538aa6d
// converted property getter: - (id)defaultTextProperties;	// 0x3528d15d
- (id)defaultThemeFont;	// 0x3538a985
// converted property getter: - (int)direction;	// 0x35296149
// converted property getter: - (int)displayBlankAs;	// 0x3538a7c5
// converted property getter: - (id)externalData;	// 0x3538a7e5
// converted property getter: - (id)floorGraphicProperties;	// 0x3538a815
- (bool)is3D;	// 0x35307ded
// converted property getter: - (bool)isAutoTitleDeleted;	// 0x3538a7a5
- (bool)isBinary;	// 0x35287f55
// converted property getter: - (bool)isDirectionChanged;	// 0x3538a869
// converted property getter: - (bool)isMSGraph;	// 0x3529927d
// converted property getter: - (bool)isPlotVisibleCellsOnly;	// 0x3538a7b5
// converted property getter: - (id)legend;	// 0x35294cc5
// converted property getter: - (CGRect)logicalBounds;	// 0x3538a825
- (id)mainType;	// 0x3529d6a5
// converted property getter: - (id)plotArea;	// 0x3528e0d9
- (id)processors;	// 0x35293d49
- (unsigned)seriesCount;	// 0x3530c2b1
// converted property setter: - (void)setAutoTitleDeleted:(bool)deleted;	// 0x35296541
// converted property setter: - (void)setBackWallGraphicProperties:(id)properties;	// 0x35297629
// converted property setter: - (void)setChartAreaGraphicProperties:(id)properties;	// 0x3528a609
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x3538a879
// converted property setter: - (void)setDirection:(int)direction;	// 0x35299581
// converted property setter: - (void)setDirectionChanged:(bool)changed;	// 0x35312e31
// converted property setter: - (void)setDisplayBlankAs:(int)as;	// 0x3528a67d
// converted property setter: - (void)setExternalData:(id)data;	// 0x3530cd89
// converted property setter: - (void)setFloorGraphicProperties:(id)properties;	// 0x352911a5
// converted property setter: - (void)setLegend:(id)legend;	// 0x352f9e95
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x352884e9
// converted property setter: - (void)setMSGraph:(bool)graph;	// 0x3538a859
- (void)setParentTextListStyle:(id)style;	// 0x3530cea9
// converted property setter: - (void)setPlotArea:(id)area;	// 0x3529642d
// converted property setter: - (void)setPlotVisibleCellsOnly:(bool)only;	// 0x3528a659
// converted property setter: - (void)setSheet:(id)sheet;	// 0x35287d09
// converted property setter: - (void)setSideWallGraphicProperties:(id)properties;	// 0x352975e1
// converted property setter: - (void)setStyleId:(int)anId;	// 0x35287d19
// converted property setter: - (void)setTitle:(id)title;	// 0x352964f9
// converted property setter: - (void)setView3D:(id)d;	// 0x35292189
// converted property getter: - (id)sheet;	// 0x3538a795
// converted property getter: - (id)sideWallGraphicProperties;	// 0x3538a805
// converted property getter: - (int)styleId;	// 0x353073b1
- (id)styleMatrix;	// 0x35307609
// converted property getter: - (id)title;	// 0x3529d91d
// converted property getter: - (id)view3D;	// 0x3538a7d5
- (id)workbook;	// 0x35307651
@end

