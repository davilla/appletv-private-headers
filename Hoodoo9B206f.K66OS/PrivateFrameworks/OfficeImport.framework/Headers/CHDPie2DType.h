/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartType.h"


__attribute__((visibility("hidden")))
@interface CHDPie2DType : CHDChartType {
@private
	int mFirstSliceAngle;	// 24 = 0x18
	bool mDoughnutType;	// 28 = 0x1c
	bool mPieOfPieType;	// 29 = 0x1d
	bool mBarOfPieType;	// 30 = 0x1e
}
@property(assign, getter=isBarOfPieType) bool barOfPieType;	// G=0x345d9ed9; S=0x345d9ee9; converted property
@property(assign, getter=isDoughnutType) bool doughnutType;	// G=0x3456fdc1; S=0x34572699; converted property
@property(assign) int firstSliceAngle;	// G=0x345d9ea9; S=0x3455e925; converted property
@property(assign, getter=isPieOfPieType) bool pieOfPieType;	// G=0x345d9eb9; S=0x345d9ec9; converted property
- (id)initWithChart:(id)chart;	// 0x3455e82d
- (id)contentFormat;	// 0x345d9ef9
- (int)defaultLabelPosition;	// 0x345d9fe1
// converted property getter: - (int)firstSliceAngle;	// 0x345d9ea9
// converted property getter: - (bool)isBarOfPieType;	// 0x345d9ed9
// converted property getter: - (bool)isDoughnutType;	// 0x3456fdc1
// converted property getter: - (bool)isPieOfPieType;	// 0x345d9eb9
// converted property setter: - (void)setBarOfPieType:(bool)pieType;	// 0x345d9ee9
// converted property setter: - (void)setDoughnutType:(bool)type;	// 0x34572699
// converted property setter: - (void)setFirstSliceAngle:(int)angle;	// 0x3455e925
// converted property setter: - (void)setPieOfPieType:(bool)pieType;	// 0x345d9ec9
@end
