/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPGraphicObject.h"


@interface CPImage : CPGraphicObject {
	CPPDFImage *imageData;	// 100 = 0x64
}
@property(readonly, assign) CPPDFImage *imageData;	// G=0x302944cd; converted property
- (id)initWithBounds:(CGRect)bounds;	// 0x30294525
- (id)initWithPDFImage:(CPPDFImage *)pdfimage;	// 0x3029474d
- (void)accept:(id)accept;	// 0x30294595
- (CGRect)bounds;	// 0x302944dd
// converted property getter: - (CPPDFImage *)imageData;	// 0x302944cd
- (BOOL)isVisible;	// 0x302944fd
- (void)recomputeRenderedBounds;	// 0x30294641
- (CGRect)renderedBounds;	// 0x302945b1
- (long)zOrder;	// 0x30294581
@end

