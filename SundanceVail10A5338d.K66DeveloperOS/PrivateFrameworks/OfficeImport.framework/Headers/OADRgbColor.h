/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


@interface OADRgbColor : OADColor {
	float mRed;	// 8 = 0x8
	float mGreen;	// 12 = 0xc
	float mBlue;	// 16 = 0x10
}
+ (id)black;	// 0x33958905
+ (id)rgbColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x33b9d969
+ (id)rgbColorWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x33b9d9c5
+ (id)rgbColorWithTSUColor:(id)tsucolor;	// 0x33b9dcc5
+ (id)rgbColorWithWhite:(float)white;	// 0x33b9da91
+ (id)rgbColorWithWhiteByte:(float)whiteByte;	// 0x33b9db51
+ (id)white;	// 0x339d7895
- (id)initWithRed:(float)red green:(float)green blue:(float)blue;	// 0x33958959
- (id)initWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x339729c5
- (id)initWithWhite:(float)white;	// 0x33b9da21
- (id)initWithWhiteByte:(float)whiteByte;	// 0x33b9dad9
- (float)blue;	// 0x339cc651
- (unsigned char)blueByte;	// 0x339c3f69
- (id)copyWithZone:(NSZone *)zone;	// 0x33aaee75
- (float)green;	// 0x339cc641
- (unsigned char)greenByte;	// 0x339c3f0d
- (unsigned)hash;	// 0x339c3e3d
- (BOOL)isEqual:(id)equal;	// 0x339c0b21
- (float)red;	// 0x339cc631
- (unsigned char)redByte;	// 0x339c3eb1
- (id)rgbColorWithFraction:(float)fraction ofRgbColor:(id)rgbColor;	// 0x33b9db99
@end
