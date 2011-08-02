/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray;

@interface UIPrintPageRenderer : NSObject {
@private
	int _pageCount;	// 4 = 0x4
	float _headerHeight;	// 8 = 0x8
	float _footerHeight;	// 12 = 0xc
	CGRect _paperRect;	// 16 = 0x10
	CGRect _printableRect;	// 32 = 0x20
	NSMutableArray *_printFormatters;	// 48 = 0x30
	CGContextRef _printContext;	// 52 = 0x34
}
@property(assign, nonatomic) float footerHeight;	// G=0x303562f1; S=0x30356461; @synthesize=_footerHeight
@property(assign, nonatomic) float headerHeight;	// G=0x30356301; S=0x30356521; @synthesize=_headerHeight
@property(assign, nonatomic) CGRect paperRect;	// G=0x303562a9; S=0x303562c5; @synthesize=_paperRect
@property(copy, nonatomic) NSArray *printFormatters;	// G=0x30356251; S=0x30356425; @synthesize=_printFormatters
@property(assign, nonatomic) CGRect printableRect;	// G=0x30356261; S=0x3035627d; @synthesize=_printableRect
- (void)_drawPage:(int)page;	// 0x30356add
- (void)_endPrintContext:(id)context success:(BOOL)success;	// 0x3019a7d5
- (int)_maxFormatterPage;	// 0x303565e1
- (void)_removePrintFormatter:(id)formatter;	// 0x3035635d
- (BOOL)_startPrintContext:(id)context printSettings:(id)settings;	// 0x30356a4d
- (void)addPrintFormatter:(id)formatter startingAtPageAtIndex:(int)index;	// 0x30356395
- (void)dealloc;	// 0x3019ab69
- (void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x30356241
- (void)drawFooterForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x30356249
- (void)drawHeaderForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x30356239
- (void)drawPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x303567f9
- (void)drawPrintFormatter:(id)formatter forPageAtIndex:(int)index;	// 0x303569fd
// declared property getter: - (float)footerHeight;	// 0x303562f1
// declared property getter: - (float)headerHeight;	// 0x30356301
- (int)numberOfPages;	// 0x30356349
// declared property getter: - (CGRect)paperRect;	// 0x303562a9
- (void)prepareForDrawingPages:(NSRange)drawingPages;	// 0x30356235
// declared property getter: - (id)printFormatters;	// 0x30356251
- (id)printFormattersForPageAtIndex:(int)index;	// 0x303566cd
// declared property getter: - (CGRect)printableRect;	// 0x30356261
// declared property setter: - (void)setFooterHeight:(float)height;	// 0x30356461
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x30356521
// declared property setter: - (void)setPaperRect:(CGRect)rect;	// 0x303562c5
// declared property setter: - (void)setPrintFormatters:(id)formatters;	// 0x30356425
// declared property setter: - (void)setPrintableRect:(CGRect)rect;	// 0x3035627d
@end

