/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPVisitor.h"
#import <NSObject.h> // Unknown library


@interface CPGenericVisitor : NSObject <CPVisitor> {
}
- (void)visitBody:(id)body;	// 0x3029393d
- (void)visitChunk:(id)chunk;	// 0x302939dd
- (void)visitColumn:(id)column;	// 0x30293901
- (void)visitCompoundGraphic:(id)graphic;	// 0x302939b5
- (void)visitImage:(id)image;	// 0x302938c1
- (void)visitImageRegion:(id)region;	// 0x302938d9
- (void)visitLayoutArea:(id)area;	// 0x30293915
- (void)visitPage:(id)page;	// 0x302939a1
- (void)visitParagraph:(id)paragraph;	// 0x30293929
- (void)visitRegion:(id)region;	// 0x3029398d
- (void)visitRotation:(id)rotation;	// 0x30293951
- (void)visitShape:(id)shape;	// 0x302939c9
- (void)visitShapeRegion:(id)region;	// 0x302938c5
- (void)visitTextBox:(id)box;	// 0x302938ed
- (void)visitTextLine:(id)line;	// 0x30293979
- (void)visitZone:(id)zone;	// 0x30293965
@end
