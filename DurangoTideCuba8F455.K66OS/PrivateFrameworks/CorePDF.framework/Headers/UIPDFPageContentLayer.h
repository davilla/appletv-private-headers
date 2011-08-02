/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <CATiledLayer.h> // Unknown library

@class UIPDFPageView, CALayer, UIPDFPage;

@interface UIPDFPageContentLayer : CATiledLayer {
	UIPDFPageView *_view;	// 48 = 0x30
	UIPDFPage *_page;	// 52 = 0x34
	CGRect mediaBox;	// 56 = 0x38
	CGRect cropBox;	// 72 = 0x48
	CGAffineTransform transformToFit;	// 88 = 0x58
	CALayer *selectionLayer;	// 112 = 0x70
	CGColorRef _highLightColor;	// 116 = 0x74
}
- (id)init;	// 0x30bd8025
- (id)initWithPDFPageView:(id)pdfpageView;	// 0x30bd7ff9
- (void)dealloc;	// 0x30bd812d
- (void)drawInContext:(CGContextRef)context;	// 0x30bd83c9
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x30bd848d
- (void)drawLayerPossible:(id)possible inContext:(CGContextRef)context;	// 0x30bd8599
- (void)layoutSublayers;	// 0x30bd8209
- (void)setNeedsDisplay;	// 0x30bd7fb9
- (void)setPage:(id)page;	// 0x30bd8169
@end

