/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPGraphicObject.h"
#import "CPDisposable.h"


@interface CPShape : CPGraphicObject <CPDisposable> {
	unsigned pdfObjectID;	// 92 = 0x5c
	CGPathRef path;	// 96 = 0x60
	BOOL isUprightRectangle;	// 100 = 0x64
	int windingRule;	// 104 = 0x68
	float lineWidth;	// 108 = 0x6c
	float miterLimit;	// 112 = 0x70
	int lineCap;	// 116 = 0x74
	int lineJoin;	// 120 = 0x78
	CGColorRef fillColor;	// 124 = 0x7c
	CGColorRef strokeColor;	// 128 = 0x80
	CGPDFObject *fillObject;	// 132 = 0x84
	CGPDFObject *strokeObject;	// 136 = 0x88
	CGAffineTransform paintTransform;	// 140 = 0x8c
	BOOL boundsComputed;	// 164 = 0xa4
	BOOL renderedBoundsComputed;	// 165 = 0xa5
}
@property(assign) CGColorRef fillColor;	// G=0x332cab01; S=0x332cab11; converted property
@property(assign) CGPDFObject *fillObject;	// G=0x332cab41; S=0x332cab51; converted property
@property(readonly, assign) BOOL isUprightRectangle;	// G=0x332caa6d; converted property
@property(assign) int lineCap;	// G=0x332cacb9; S=0x332cacc9; converted property
@property(assign) int lineJoin;	// G=0x332cacd9; S=0x332cace9; converted property
@property(assign) float lineWidth;	// G=0x332cac1d; S=0x332cac2d; converted property
@property(assign) float miterLimit;	// G=0x332cac99; S=0x332caca9; converted property
@property(assign) CGAffineTransform paintTransform;	// G=0x332cacf9; S=0x332cad2d; converted property
@property(assign) CGPathRef path;	// G=0x332ca56d; S=0x332ca57d; converted property
@property(assign) unsigned pdfObjectID;	// G=0x332ca54d; S=0x332ca55d; converted property
@property(assign) CGColorRef strokeColor;	// G=0x332cab91; S=0x332caba1; converted property
@property(assign) CGPDFObject *strokeObject;	// G=0x332cabcd; S=0x332cabdd; converted property
@property(assign) int windingRule;	// G=0x332caae1; S=0x332caaf1; converted property
- (id)init;	// 0x332ca26d
- (id)initWithPDFShape:(CPPDFShape *)pdfshape;	// 0x332cb66d
- (void)accept:(id)accept;	// 0x332caab9
- (void)addShape:(id)shape;	// 0x332cb0ad
- (id)attributes;	// 0x332caaa9
- (CGRect)bounds;	// 0x332ca46d
- (BOOL)canCombineWith:(id)with;	// 0x332caf0d
- (id)copyWithZone:(NSZone *)zone;	// 0x332ca3f1
- (void)dealloc;	// 0x332ca3b1
- (void)dispose;	// 0x332ca325
// converted property getter: - (CGColorRef)fillColor;	// 0x332cab01
// converted property getter: - (CGPDFObject *)fillObject;	// 0x332cab41
- (void)finalize;	// 0x332ca371
- (BOOL)hasFill;	// 0x332cab61
- (BOOL)hasSamePathAs:(id)as;	// 0x332cad61
- (BOOL)hasStroke;	// 0x332cabed
- (CGRect)innerBounds;	// 0x332ca9cd
- (BOOL)isStrokeFor:(id)aFor;	// 0x332cae2d
// converted property getter: - (BOOL)isUprightRectangle;	// 0x332caa6d
- (BOOL)isVisible;	// 0x332cae8d
// converted property getter: - (int)lineCap;	// 0x332cacb9
// converted property getter: - (int)lineJoin;	// 0x332cacd9
// converted property getter: - (float)lineWidth;	// 0x332cac1d
- (void)makeLineFromVertex:(CGPoint)vertex toVertex:(CGPoint)vertex2;	// 0x332cb5f9
// converted property getter: - (float)miterLimit;	// 0x332cac99
// converted property getter: - (CGAffineTransform)paintTransform;	// 0x332cacf9
// converted property getter: - (CGPathRef)path;	// 0x332ca56d
- (unsigned)pathElementCount;	// 0x332cb659
// converted property getter: - (unsigned)pdfObjectID;	// 0x332ca54d
- (void)recomputeBounds;	// 0x332ca4e9
- (void)recomputeRenderedBounds;	// 0x332ca701
- (CGRect)renderedBounds;	// 0x332ca61d
// converted property setter: - (void)setFillColor:(CGColorRef)color;	// 0x332cab11
// converted property setter: - (void)setFillObject:(CGPDFObject *)object;	// 0x332cab51
// converted property setter: - (void)setLineCap:(int)cap;	// 0x332cacc9
// converted property setter: - (void)setLineJoin:(int)join;	// 0x332cace9
// converted property setter: - (void)setLineWidth:(float)width;	// 0x332cac2d
// converted property setter: - (void)setMiterLimit:(float)limit;	// 0x332caca9
// converted property setter: - (void)setPaintTransform:(CGAffineTransform)transform;	// 0x332cad2d
// converted property setter: - (void)setPath:(CGPathRef)path;	// 0x332ca57d
// converted property setter: - (void)setPdfObjectID:(unsigned)anId;	// 0x332ca55d
// converted property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x332caba1
// converted property setter: - (void)setStrokeObject:(CGPDFObject *)object;	// 0x332cabdd
// converted property setter: - (void)setWindingRule:(int)rule;	// 0x332caaf1
- (id)string;	// 0x332cb5c9
// converted property getter: - (CGColorRef)strokeColor;	// 0x332cab91
// converted property getter: - (CGPDFObject *)strokeObject;	// 0x332cabcd
// converted property getter: - (int)windingRule;	// 0x332caae1
- (long)zOrder;	// 0x332caad1
@end
