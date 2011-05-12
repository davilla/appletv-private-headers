/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EXOfficeArtState, CHDChart, CHDSeries, OADParagraphProperties, CHDChartType, EDResources, OCPPackagePart;
@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHXState : NSObject {
@private
	EXOfficeArtState *mDrawingState;	// 4 = 0x4
	CHDChart *mChart;	// 8 = 0x8
	EDResources *mResources;	// 12 = 0xc
	OCPPackagePart *mChartPart;	// 16 = 0x10
	CHDChartType *mCurrentChartType;	// 20 = 0x14
	CHDSeries *mCurrentSeries;	// 24 = 0x18
	OADParagraphProperties *mDefaultTextProperties;	// 28 = 0x1c
	BOOL mDefaultTextPropertiesHaveExplicitFontSize;	// 32 = 0x20
	id<CHAutoStyling> mAutoStyling;	// 36 = 0x24
}
@property(retain) id chart;	// G=0x34558919; S=0x34556ed9; converted property
@property(retain) id chartPart;	// G=0x34556ec9; S=0x34556c75; converted property
@property(retain) id currentChartType;	// G=0x34559c85; S=0x34559271; converted property
@property(retain) id currentSeries;	// G=0x345c6755; S=0x34559ce9; converted property
@property(retain) id defaultTextProperties;	// G=0x345578d1; S=0x34557319; converted property
@property(retain) id resources;	// G=0x345572f9; S=0x34556cc1; converted property
- (id)initWithDrawingState:(id)drawingState;	// 0x34556c25
- (id)autoStyling;	// 0x34557ef5
// converted property getter: - (id)chart;	// 0x34558919
// converted property getter: - (id)chartPart;	// 0x34556ec9
// converted property getter: - (id)currentChartType;	// 0x34559c85
// converted property getter: - (id)currentSeries;	// 0x345c6755
- (void)dealloc;	// 0x3455c7fd
// converted property getter: - (id)defaultTextProperties;	// 0x345578d1
- (id)drawingState;	// 0x34556f4d
- (id)exState;	// 0x3455a505
- (void)popTitleTextProperties;	// 0x3456b955
- (void)pushTitleTextProperties:(BOOL)properties;	// 0x3456b521
// converted property getter: - (id)resources;	// 0x345572f9
// converted property setter: - (void)setChart:(id)chart;	// 0x34556ed9
// converted property setter: - (void)setChartPart:(id)part;	// 0x34556c75
// converted property setter: - (void)setCurrentChartType:(id)type;	// 0x34559271
// converted property setter: - (void)setCurrentSeries:(id)series;	// 0x34559ce9
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x34557319
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)size;	// 0x34557309
// converted property setter: - (void)setResources:(id)resources;	// 0x34556cc1
@end

