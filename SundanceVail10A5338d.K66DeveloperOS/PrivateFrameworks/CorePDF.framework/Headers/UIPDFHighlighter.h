/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface UIPDFHighlighter : NSObject {
	NSMutableArray *_highLightLayers;	// 4 = 0x4
	CGColorRef _highlightColor;	// 8 = 0x8
	CGColorRef _borderColor;	// 12 = 0xc
	CGColorRef _whiteColor;	// 16 = 0x10
	CGPDFPageRef _page;	// 20 = 0x14
	float _enlargeFactor;	// 24 = 0x18
	float _pdfToViewScale;	// 28 = 0x1c
	float inset;	// 32 = 0x20
}
@property(assign, nonatomic) float inset;	// G=0x332c2b41; S=0x332c2b51; @synthesize
- (id)init;	// 0x332c1835
- (void)addAnimation:(id)animation;	// 0x332c1f31
- (void)addHighlightFor:(id)aFor to:(id)to animated:(BOOL)animated;	// 0x332c26b9
- (void)addHighlightLayerFor:(id)aFor atIndex:(unsigned)index to:(id)to animated:(BOOL)animated;	// 0x332c2069
- (void)addRectPath:(CGPathRef)path toView:(id)view layer:(id)layer rectangle:(XXStruct_BUymIA)rectangle upright:(BOOL)upright;	// 0x332c1aad
- (void)clear;	// 0x332c2a65
- (void)dealloc;	// 0x332c1979
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x332c2869
// declared property getter: - (float)inset;	// 0x332c2b41
- (void)makeTheBorderPath:(id)path layer:(id)layer rectangle:(XXStruct_BUymIA)rectangle upright:(BOOL)upright;	// 0x332c1ea9
- (void)makeTheClipPath:(id)path layer:(id)layer rectangle:(XXStruct_BUymIA)rectangle upright:(BOOL)upright;	// 0x332c1e21
// declared property setter: - (void)setInset:(float)inset;	// 0x332c2b51
- (void)setNeedsDisplay;	// 0x332c27a9
- (void)unhide;	// 0x332c19e9
@end
