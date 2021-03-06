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
+ (float)applyAlphaTransform:(id)transform toAlpha:(float)alpha;	// 0x32a2ed99
+ (id)applyExpTransformWithValue:(float)value toRgbColor:(id)rgbColor;	// 0x32a2f1b1
+ (id)applyHSLTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x32a2efbd
+ (id)applyRGBTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x32a2ee31
+ (id)applyTransforms:(id)transforms toRgbColor:(id)rgbColor;	// 0x32a2f2a1
+ (unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(int)oadmapColorIndex;	// 0x32a2ece5
+ (int)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)eshSchemeColorIndex;	// 0x327b065d
+ (EshColor)propertyColor:(int)color colorPropertiesManager:(id)manager;	// 0x3280148d
+ (id)readColor:(const EshColor *)color colorPropertiesManager:(id)manager colorPalette:(id)palette;	// 0x327b02c5
+ (int)readColorAdjustmentType:(int)type;	// 0x3280155d
+ (int)readSystemColorID:(int)anId;	// 0x32a2ed15
@end

