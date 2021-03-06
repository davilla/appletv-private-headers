/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFill.h"

@class NSMutableDictionary;

@interface EDGradientFill : EDFill {
	int mType;	// 8 = 0x8
	NSMutableDictionary *mStops;	// 12 = 0xc
	double mDegree;	// 16 = 0x10
	CGRect mFocusRect;	// 24 = 0x18
}
@property(assign) double degree;	// G=0x33b7e69d; S=0x33b7ca5d; converted property
@property(assign) CGRect focusRect;	// G=0x33b7e6c5; S=0x33b7ca75; converted property
@property(retain) id stops;	// G=0x33b7e6b5; S=0x33b7ca95; converted property
@property(assign) int type;	// G=0x33b7e68d; S=0x33b7ca49; converted property
+ (id)gradientWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;	// 0x33b7e8dd
+ (id)gradientWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;	// 0x33b7e7f1
- (id)initWithResources:(id)resources;	// 0x33b7e439
- (id)initWithType:(int)type degree:(double)degree focusRect:(CGRect)rect stops:(id)stops resources:(id)resources;	// 0x33b7e865
- (id)initWithType:(int)type degree:(double)degree top:(double)top bottom:(double)bottom right:(double)right left:(double)left stops:(id)stops resources:(id)resources;	// 0x33b7e70d
- (id).cxx_construct;	// 0x33b7e709
- (id)colorForStopAtPosition:(id)position;	// 0x33b7e6e9
- (id)copyWithZone:(NSZone *)zone;	// 0x33b7e501
- (void)dealloc;	// 0x33b7e4b5
// converted property getter: - (double)degree;	// 0x33b7e69d
// converted property getter: - (CGRect)focusRect;	// 0x33b7e6c5
- (unsigned)hash;	// 0x33b7e65d
- (bool)isEmpty;	// 0x33b7e689
- (BOOL)isEqual:(id)equal;	// 0x33b7e601
- (BOOL)isEqualToGradientFill:(id)gradientFill;	// 0x33b7e555
// converted property setter: - (void)setDegree:(double)degree;	// 0x33b7ca5d
// converted property setter: - (void)setFocusRect:(CGRect)rect;	// 0x33b7ca75
- (void)setStopColor:(id)color atPosition:(id)position;	// 0x33b7cad9
// converted property setter: - (void)setStops:(id)stops;	// 0x33b7ca95
// converted property setter: - (void)setType:(int)type;	// 0x33b7ca49
// converted property getter: - (id)stops;	// 0x33b7e6b5
// converted property getter: - (int)type;	// 0x33b7e68d
@end

