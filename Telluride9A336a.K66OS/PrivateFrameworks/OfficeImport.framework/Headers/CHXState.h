/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, EXOfficeArtState, CHDChart, CHDSeries, OADParagraphProperties, CHDChartType, OCPPackagePart;
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
@property(retain) id chart;	// G=0x34d5fb79; S=0x34d5df25; converted property
@property(retain) id chartPart;	// G=0x34d5df15; S=0x34d5dc89; converted property
@property(retain) id currentChartType;	// G=0x34d6107d; S=0x34d60649; converted property
@property(retain) id currentSeries;	// G=0x34d81df5; S=0x34d61565; converted property
@property(retain) id defaultTextProperties;	// G=0x34d5ea89; S=0x34d5e455; converted property
@property(retain) id resources;	// G=0x34d5e3ed; S=0x34d5dce1; converted property
- (id)initWithDrawingState:(id)drawingState;	// 0x34d5dc31
- (id)autoStyling;	// 0x34d5f1f5
// converted property getter: - (id)chart;	// 0x34d5fb79
// converted property getter: - (id)chartPart;	// 0x34d5df15
// converted property getter: - (id)currentChartType;	// 0x34d6107d
// converted property getter: - (id)currentSeries;	// 0x34d81df5
- (void)dealloc;	// 0x34d64dd1
// converted property getter: - (id)defaultTextProperties;	// 0x34d5ea89
- (id)drawingState;	// 0x34d5dfa9
- (id)exState;	// 0x34d618a1
- (void)popTitleTextProperties;	// 0x34d7fb75
- (void)pushTitleTextProperties:(BOOL)properties;	// 0x34d7f681
// converted property getter: - (id)resources;	// 0x34d5e3ed
// converted property setter: - (void)setChart:(id)chart;	// 0x34d5df25
// converted property setter: - (void)setChartPart:(id)part;	// 0x34d5dc89
// converted property setter: - (void)setCurrentChartType:(id)type;	// 0x34d60649
// converted property setter: - (void)setCurrentSeries:(id)series;	// 0x34d61565
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x34d5e455
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)size;	// 0x34d5e3fd
// converted property setter: - (void)setResources:(id)resources;	// 0x34d5dce1
@end

