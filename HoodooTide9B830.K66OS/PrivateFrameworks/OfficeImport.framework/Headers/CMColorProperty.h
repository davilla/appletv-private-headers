/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"
#import "OfficeImport-Structs.h"

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface CMColorProperty : CMProperty {
@private
	NSColorStub *wdValue;	// 8 = 0x8
}
+ (CGColorRef)createCGColorFromOADColor:(id)oadcolor state:(id)state;	// 0x313d5c91
+ (CGColorRef)createCGColorFromOADFill:(id)oadfill state:(id)state;	// 0x3125bd0d
+ (id)cssStringFromNSColorStub:(id)nscolorStub;	// 0x310eb615
+ (id)cssStringFromOADColor:(id)oadcolor;	// 0x31229339
+ (id)cssStringFromOADGradientFill:(id)oadgradientFill state:(id)state;	// 0x311b21b5
+ (id)cssStringFromRed:(float)red green:(float)green blue:(float)blue;	// 0x310eb6a9
+ (id)nsColorFromOADColor:(id)oadcolor state:(id)state;	// 0x310ea94d
+ (id)nsColorFromOADFill:(id)oadfill state:(id)state;	// 0x310ea60d
+ (id)nsColorFromShading:(id)shading;	// 0x31226d09
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x31227369
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x312271e9
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x3122716d
+ (float)transformedAlphaFromOADColor:(id)oadcolor;	// 0x311b35cd
- (id)initWithColor:(id)color;	// 0x31227391
- (id)cssString;	// 0x31227401
- (id)cssStringForName:(id)name;	// 0x312273d1
- (BOOL)isEqualTo:(id)to;	// 0x313d5d0d
- (id)value;	// 0x313d5c81
@end

