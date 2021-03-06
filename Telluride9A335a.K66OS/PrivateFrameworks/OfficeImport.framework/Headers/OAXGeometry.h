/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXGeometry : NSObject {
}
+ (void)addFormulasFromFile:(id)file toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x352dfee9
+ (int)adjustValueWithGuideXmlNode:(xmlNode *)guideXmlNode;	// 0x352f1fdd
+ (id)formulaKeywordEnumMap;	// 0x352e0639
+ (id)formulaTypeEnumMap;	// 0x352e05e1
+ (id)pathFillModeEnumMap;	// 0x35316ed9
+ (OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode *)xmlNode name:(const char *)name formulaNameToIndexMap:(id)indexMap;	// 0x352e0811
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap;	// 0x352dfdfd
+ (id)readCustomGeometryFromXmlNode:(xmlNode *)xmlNode hasImplicitFormulas:(BOOL)formulas;	// 0x352dfc89
+ (void)readFormulasFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap formulaNameToIndexMap:(id)indexMap4;	// 0x352e005d
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x352bb991
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x353cfdc9
+ (void)readPathsFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x352e0875
+ (id)readPresetGeometryFromXmlNode:(xmlNode *)xmlNode;	// 0x352bba01
+ (void)readTextRectFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x352e06d5
+ (id)shapeTypeEnumMap;	// 0x352bbb4d
+ (int)shapeTypeForString:(id)string;	// 0x352bbb21
+ (id)stringForShapeType:(int)shapeType;	// 0x352f6dd5
@end

