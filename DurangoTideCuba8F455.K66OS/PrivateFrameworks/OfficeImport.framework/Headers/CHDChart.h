/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableContainer.h"
#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class EDSheet, CHDPlotArea, NSMutableArray, CHDTitle, EDWorkbook, CHDDefaultTextProperties, CHDLegend, OADGraphicProperties, CHDView3D;

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
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// G=0x32d0c6c9; S=0x32c37959; converted property
@property(retain) id backWallGraphicProperties;	// G=0x32d0c719; S=0x32c334a5; converted property
@property(retain) id chartAreaGraphicProperties;	// G=0x32c3d36d; S=0x32c2d3f9; converted property
@property(retain) id defaultTextProperties;	// G=0x32c2f7a5; S=0x32d0cb41; converted property
@property(assign) int direction;	// G=0x32c37585; S=0x32c39291; converted property
@property(assign, getter=isDirectionChanged) bool directionChanged;	// G=0x32d0c785; S=0x32c94761; converted property
@property(assign) int displayBlankAs;	// G=0x32d0c6e9; S=0x32c2d461; converted property
@property(retain) id externalData;	// G=0x32d0c709; S=0x32ca67c1; converted property
@property(retain) id floorGraphicProperties;	// G=0x32d0c739; S=0x32c33d29; converted property
@property(retain) id legend;	// G=0x32c36a11; S=0x32c89611; converted property
@property(assign) CGRect logicalBounds;	// G=0x32d0c749; S=0x32c2bb4d; converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// G=0x32c38b0d; S=0x32d0c775; converted property
@property(retain) id plotArea;	// G=0x32c30611; S=0x32c37865; converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// G=0x32d0c6d9; S=0x32c2d441; converted property
@property(retain) id sheet;	// G=0x32d0c6b9; S=0x32c2b4ad; converted property
@property(retain) id sideWallGraphicProperties;	// G=0x32d0c729; S=0x32c33469; converted property
@property(assign) int styleId;	// G=0x32ca2089; S=0x32c2b4bd; converted property
@property(retain) id title;	// G=0x32c3cf2d; S=0x32c3791d; converted property
@property(retain) id view3D;	// G=0x32d0c6f9; S=0x32c34809; converted property
+ (id)binaryEffects:(BOOL)effects;	// 0x32c2c961
- (id)init;	// 0x32c292fd
- (void)addChild:(id)child;	// 0x32c47839
- (void)addChildren:(id)children;	// 0x32d0caad
// converted property getter: - (id)backWallGraphicProperties;	// 0x32d0c719
// converted property getter: - (id)chartAreaGraphicProperties;	// 0x32c3d36d
- (id)childAtIndex:(unsigned)index;	// 0x32d0ca8d
- (unsigned)childCount;	// 0x32d0cb21
- (id)children;	// 0x32d0c765
- (void)dealloc;	// 0x32c48b4d
- (id)defaultContentFormat;	// 0x32d0c811
- (id)defaultDataLabelFont;	// 0x32d0c8c9
- (unsigned)defaultFontIndex;	// 0x32c96f6d
- (id)defaultFontWithResources:(id)resources;	// 0x32d0c7c9
- (int)defaultLabelPosition;	// 0x32d0c795
- (id)defaultSeriesTitleFont;	// 0x32d0c845
- (id)defaultTextFont;	// 0x32d0c94d
// converted property getter: - (id)defaultTextProperties;	// 0x32c2f7a5
- (id)defaultThemeFont;	// 0x32d0c9bd
// converted property getter: - (int)direction;	// 0x32c37585
// converted property getter: - (int)displayBlankAs;	// 0x32d0c6e9
// converted property getter: - (id)externalData;	// 0x32d0c709
// converted property getter: - (id)floorGraphicProperties;	// 0x32d0c739
- (bool)is3D;	// 0x32ca2a91
// converted property getter: - (bool)isAutoTitleDeleted;	// 0x32d0c6c9
- (bool)isBinary;	// 0x32c2b6b9
// converted property getter: - (bool)isDirectionChanged;	// 0x32d0c785
// converted property getter: - (bool)isMSGraph;	// 0x32c38b0d
// converted property getter: - (bool)isPlotVisibleCellsOnly;	// 0x32d0c6d9
// converted property getter: - (id)legend;	// 0x32c36a11
// converted property getter: - (CGRect)logicalBounds;	// 0x32d0c749
- (id)mainType;	// 0x32c3cce1
// converted property getter: - (id)plotArea;	// 0x32c30611
- (id)processors;	// 0x32c35e49
- (unsigned)seriesCount;	// 0x32ca41a5
// converted property setter: - (void)setAutoTitleDeleted:(bool)deleted;	// 0x32c37959
// converted property setter: - (void)setBackWallGraphicProperties:(id)properties;	// 0x32c334a5
// converted property setter: - (void)setChartAreaGraphicProperties:(id)properties;	// 0x32c2d3f9
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x32d0cb41
// converted property setter: - (void)setDirection:(int)direction;	// 0x32c39291
// converted property setter: - (void)setDirectionChanged:(bool)changed;	// 0x32c94761
// converted property setter: - (void)setDisplayBlankAs:(int)as;	// 0x32c2d461
// converted property setter: - (void)setExternalData:(id)data;	// 0x32ca67c1
// converted property setter: - (void)setFloorGraphicProperties:(id)properties;	// 0x32c33d29
// converted property setter: - (void)setLegend:(id)legend;	// 0x32c89611
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x32c2bb4d
// converted property setter: - (void)setMSGraph:(bool)graph;	// 0x32d0c775
- (void)setParentTextListStyle:(id)style;	// 0x32ca68c5
// converted property setter: - (void)setPlotArea:(id)area;	// 0x32c37865
// converted property setter: - (void)setPlotVisibleCellsOnly:(bool)only;	// 0x32c2d441
// converted property setter: - (void)setSheet:(id)sheet;	// 0x32c2b4ad
// converted property setter: - (void)setSideWallGraphicProperties:(id)properties;	// 0x32c33469
// converted property setter: - (void)setStyleId:(int)anId;	// 0x32c2b4bd
// converted property setter: - (void)setTitle:(id)title;	// 0x32c3791d
// converted property setter: - (void)setView3D:(id)d;	// 0x32c34809
// converted property getter: - (id)sheet;	// 0x32d0c6b9
// converted property getter: - (id)sideWallGraphicProperties;	// 0x32d0c729
// converted property getter: - (int)styleId;	// 0x32ca2089
- (id)styleMatrix;	// 0x32ca2299
// converted property getter: - (id)title;	// 0x32c3cf2d
// converted property getter: - (id)view3D;	// 0x32d0c6f9
- (id)workbook;	// 0x32ca22d9
@end

