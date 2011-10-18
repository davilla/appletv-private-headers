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
+ (CGColorRef)createCGColorFromOADColor:(id)oadcolor state:(id)state;	// 0x35417c91
+ (CGColorRef)createCGColorFromOADFill:(id)oadfill state:(id)state;	// 0x3529dd0d
+ (id)cssStringFromNSColorStub:(id)nscolorStub;	// 0x3512d615
+ (id)cssStringFromOADColor:(id)oadcolor;	// 0x3526b339
+ (id)cssStringFromOADGradientFill:(id)oadgradientFill state:(id)state;	// 0x351f41b5
+ (id)cssStringFromRed:(float)red green:(float)green blue:(float)blue;	// 0x3512d6a9
+ (id)nsColorFromOADColor:(id)oadcolor state:(id)state;	// 0x3512c94d
+ (id)nsColorFromOADFill:(id)oadfill state:(id)state;	// 0x3512c60d
+ (id)nsColorFromShading:(id)shading;	// 0x35268d09
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x35269369
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x352691e9
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x3526916d
+ (float)transformedAlphaFromOADColor:(id)oadcolor;	// 0x351f55cd
- (id)initWithColor:(id)color;	// 0x35269391
- (id)cssString;	// 0x35269401
- (id)cssStringForName:(id)name;	// 0x352693d1
- (BOOL)isEqualTo:(id)to;	// 0x35417d0d
- (id)value;	// 0x35417c81
@end

