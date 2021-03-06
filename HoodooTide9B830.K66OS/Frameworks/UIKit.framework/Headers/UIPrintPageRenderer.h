/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

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
@property(assign, nonatomic) float footerHeight;	// G=0x30386935; S=0x303863e9; @synthesize=_footerHeight
@property(assign, nonatomic) float headerHeight;	// G=0x30386925; S=0x30386341; @synthesize=_headerHeight
@property(assign, nonatomic) CGRect paperRect;	// G=0x30386945; S=0x30386969; @synthesize=_paperRect
@property(copy, nonatomic) NSArray *printFormatters;	// G=0x303869c5; S=0x30386015; @synthesize=_printFormatters
@property(assign, nonatomic) CGRect printableRect;	// G=0x30386985; S=0x303869a9; @synthesize=_printableRect
- (void)_drawPage:(int)page;	// 0x303867e5
- (void)_endPrintContext:(id)context success:(BOOL)success;	// 0x303868c9
- (int)_maxFormatterPage;	// 0x3038624d
- (void)_removePrintFormatter:(id)formatter;	// 0x3038620d
- (BOOL)_startPrintContext:(id)context printSettings:(id)settings;	// 0x3038671d
- (void)addPrintFormatter:(id)formatter startingAtPageAtIndex:(int)index;	// 0x30386059
- (void)dealloc;	// 0x30385fb1
- (void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x30386715
- (void)drawFooterForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x30386719
- (void)drawHeaderForPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x30386711
- (void)drawPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x30386491
- (void)drawPrintFormatter:(id)formatter forPageAtIndex:(int)index;	// 0x303866b5
// declared property getter: - (float)footerHeight;	// 0x30386935
// declared property getter: - (float)headerHeight;	// 0x30386925
- (int)numberOfPages;	// 0x3038632d
// declared property getter: - (CGRect)paperRect;	// 0x30386945
- (void)prepareForDrawingPages:(NSRange)drawingPages;	// 0x3038633d
// declared property getter: - (id)printFormatters;	// 0x303869c5
- (id)printFormattersForPageAtIndex:(int)index;	// 0x303860f1
// declared property getter: - (CGRect)printableRect;	// 0x30386985
// declared property setter: - (void)setFooterHeight:(float)height;	// 0x303863e9
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x30386341
// declared property setter: - (void)setPaperRect:(CGRect)rect;	// 0x30386969
// declared property setter: - (void)setPrintFormatters:(id)formatters;	// 0x30386015
// declared property setter: - (void)setPrintableRect:(CGRect)rect;	// 0x303869a9
@end

