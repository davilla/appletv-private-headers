/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


__attribute__((visibility("hidden")))
@interface CHDCategoryAxis : CHDAxis {
@private
	bool mAutomatic;	// 128 = 0x80
	bool mNoMultipleLevelLabel;	// 129 = 0x81
	int mLabelAlignment;	// 132 = 0x84
	int mLabelFrequency;	// 136 = 0x88
}
@property(assign, getter=isAutomatic) bool automatic;	// G=0x345c2669; S=0x34564cbd; converted property
@property(assign) int labelAlignment;	// G=0x345c2699; S=0x34564d45; converted property
@property(assign) int labelFrequency;	// G=0x345c26a9; S=0x344e8f25; converted property
- (id)initWithResources:(id)resources;	// 0x344e8c99
- (void)adjustAxisPositionForHorizontalChart;	// 0x3453ce95
// converted property getter: - (bool)isAutomatic;	// 0x345c2669
- (bool)isNoMultipleLabellevel;	// 0x345c2679
// converted property getter: - (int)labelAlignment;	// 0x345c2699
// converted property getter: - (int)labelFrequency;	// 0x345c26a9
// converted property setter: - (void)setAutomatic:(bool)automatic;	// 0x34564cbd
// converted property setter: - (void)setLabelAlignment:(int)alignment;	// 0x34564d45
// converted property setter: - (void)setLabelFrequency:(int)frequency;	// 0x344e8f25
- (void)setNoMultipleLevelLabel:(bool)label;	// 0x345c2689
@end

