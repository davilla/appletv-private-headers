/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties, EDString, CHDTrendlineLabel;

__attribute__((visibility("hidden")))
@interface CHDTrendline : NSObject {
@private
	bool mDisplayEquation;	// 4 = 0x4
	bool mDisplayRSquaredValue;	// 5 = 0x5
	double mBackward;	// 8 = 0x8
	double mForward;	// 16 = 0x10
	double mInterceptYAxis;	// 24 = 0x18
	int mPolynomialOrder;	// 32 = 0x20
	int mMovingAveragePeriod;	// 36 = 0x24
	int mType;	// 40 = 0x28
	OADGraphicProperties *mGraphicProperties;	// 44 = 0x2c
	CHDTrendlineLabel *mLabel;	// 48 = 0x30
	EDString *mName;	// 52 = 0x34
}
@property(assign) double backward;	// G=0x311f851d; S=0x311b0a2d; converted property
@property(assign, getter=isDisplayEquation) bool displayEquation;	// G=0x311f84f5; S=0x311b0a0d; converted property
@property(assign, getter=isDisplayRSquaredValue) bool displayRSquaredValue;	// G=0x311f8509; S=0x311b0a1d; converted property
@property(assign) double forward;	// G=0x311f8535; S=0x311b0a41; converted property
@property(retain) id graphicProperties;	// G=0x311c9ee1; S=0x311b0b15; converted property
@property(assign) double interceptYAxis;	// G=0x311f854d; S=0x311b0a55; converted property
@property(retain) id label;	// G=0x311f85a5; S=0x311b09c9; converted property
@property(assign) int movingAveragePeriod;	// G=0x311f8575; S=0x311f8585; converted property
@property(retain) id name;	// G=0x311f85b5; S=0x311f85c5; converted property
@property(assign) int polynomialOrder;	// G=0x311f8565; S=0x311ca819; converted property
@property(assign) int type;	// G=0x311f8595; S=0x311b0701; converted property
+ (id)trendline;	// 0x311c9939
- (id)init;	// 0x311b0625
// converted property getter: - (double)backward;	// 0x311f851d
- (void)dealloc;	// 0x311b1b0d
- (id)defaultNameWithSeriesName:(id)seriesName;	// 0x311f8609
// converted property getter: - (double)forward;	// 0x311f8535
// converted property getter: - (id)graphicProperties;	// 0x311c9ee1
// converted property getter: - (double)interceptYAxis;	// 0x311f854d
// converted property getter: - (bool)isDisplayEquation;	// 0x311f84f5
// converted property getter: - (bool)isDisplayRSquaredValue;	// 0x311f8509
// converted property getter: - (id)label;	// 0x311f85a5
// converted property getter: - (int)movingAveragePeriod;	// 0x311f8575
// converted property getter: - (id)name;	// 0x311f85b5
// converted property getter: - (int)polynomialOrder;	// 0x311f8565
// converted property setter: - (void)setBackward:(double)backward;	// 0x311b0a2d
// converted property setter: - (void)setDisplayEquation:(bool)equation;	// 0x311b0a0d
// converted property setter: - (void)setDisplayRSquaredValue:(bool)value;	// 0x311b0a1d
// converted property setter: - (void)setForward:(double)forward;	// 0x311b0a41
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x311b0b15
// converted property setter: - (void)setInterceptYAxis:(double)axis;	// 0x311b0a55
// converted property setter: - (void)setLabel:(id)label;	// 0x311b09c9
// converted property setter: - (void)setMovingAveragePeriod:(int)period;	// 0x311f8585
// converted property setter: - (void)setName:(id)name;	// 0x311f85c5
// converted property setter: - (void)setPolynomialOrder:(int)order;	// 0x311ca819
// converted property setter: - (void)setType:(int)type;	// 0x311b0701
// converted property getter: - (int)type;	// 0x311f8595
@end

