/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABColor : NSObject {
}
+ (float)applyAlphaTransform:(id)transform toAlpha:(float)alpha;	// 0x34e78d99
+ (id)applyExpTransformWithValue:(float)value toRgbColor:(id)rgbColor;	// 0x34e791b1
+ (id)applyHSLTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x34e78fbd
+ (id)applyRGBTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x34e78e31
+ (id)applyTransforms:(id)transforms toRgbColor:(id)rgbColor;	// 0x34e792a1
+ (unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(int)oadmapColorIndex;	// 0x34e78ce5
+ (int)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)eshSchemeColorIndex;	// 0x34bfa65d
+ (EshColor)propertyColor:(int)color colorPropertiesManager:(id)manager;	// 0x34c4b48d
+ (id)readColor:(const EshColor *)color colorPropertiesManager:(id)manager colorPalette:(id)palette;	// 0x34bfa2c5
+ (int)readColorAdjustmentType:(int)type;	// 0x34c4b55d
+ (int)readSystemColorID:(int)anId;	// 0x34e78d15
@end

