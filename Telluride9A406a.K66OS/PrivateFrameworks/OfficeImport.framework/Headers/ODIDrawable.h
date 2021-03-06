/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODIDrawable : NSObject {
}
+ (void)addArrowHeadToShapeProperties:(id)shapeProperties;	// 0x32ad1aa1
+ (id)addShapeWithBounds:(CGRect)bounds rotation:(float)rotation geometry:(id)geometry state:(id)state;	// 0x32ad0fd9
+ (void)map1dArrowStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x32ad1461
+ (void)map1dArrowStyleToShape:(id)shape state:(id)state;	// 0x32ad1569
+ (void)mapShapeProperties:(id)properties shape:(id)shape state:(id)state;	// 0x32ad1a0d
+ (void)mapShapeProperties:(id)properties shapeStyle:(id)style shape:(id)shape state:(id)state;	// 0x32ad1999
+ (void)mapStyleAndTextFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x32ad1679
+ (void)mapStyleForLabelName:(id)labelName point:(id)point shape:(id)shape state:(id)state;	// 0x32ad13bd
+ (void)mapStyleForLabelName:(id)labelName shape:(id)shape state:(id)state;	// 0x32ad12fd
+ (void)mapStyleForPresentationName:(id)presentationName point:(id)point shape:(id)shape state:(id)state;	// 0x32ad1259
+ (void)mapStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x32ad1125
+ (id)presentationWithName:(id)name point:(id)point;	// 0x32ad1721
+ (id)shapeGeometryForBezierPath:(CGPathRef)bezierPath gSpace:(CGRect)space;	// 0x32ad1b45
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)controlPoint;	// 0x32ad0e8d
+ (id)shapeGeometryForEllipse;	// 0x32ad0cc9
+ (id)shapeGeometryForRectangle;	// 0x32ad0c71
+ (id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)controlPoint;	// 0x32ad0dbd
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)radius;	// 0x32ad0d21
+ (id)shapeGeometryWithShapeType:(int)shapeType adjustValues:(const int *)values;	// 0x32ad0f4d
+ (CGSize)sizeOfDiagram:(id)diagram;	// 0x32ad1ff9
+ (id)styleForLabelName:(id)labelName styleCount:(int)count styleIndex:(int)index state:(id)state;	// 0x32ad18c9
+ (id)styleForPresentation:(id)presentation point:(id)point state:(id)state;	// 0x32ad17ed
@end

