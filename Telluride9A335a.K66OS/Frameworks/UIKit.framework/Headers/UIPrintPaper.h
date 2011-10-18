/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIPrintPaper : NSObject {
@private
	int _paperOrientation;	// 4 = 0x4
	id _internal;	// 8 = 0x8
}
@property(readonly, assign) CGSize paperSize;	// G=0x33ccfdb9; 
@property(readonly, assign) CGRect printableRect;	// G=0x33ccfe29; 
+ (id)_defaultPKPaperForOuptutType:(int)ouptutType;	// 0x33ccf925
+ (id)_defaultPaperForOutputType:(int)outputType;	// 0x33ccfc3d
+ (id)_defaultPaperListForOutputType:(int)outputType;	// 0x33ccfaa9
+ (id)_paperListForPrinter:(id)printer withDuplexMode:(int)duplexMode;	// 0x33ccf7f5
+ (id)_readyPaperListForPrinter:(id)printer withDuplexMode:(int)duplexMode;	// 0x33ccf52d
+ (id)_readyPaperListForPrinter:(id)printer withDuplexMode:(int)duplexMode forContentType:(int)contentType;	// 0x33ccf625
+ (id)bestPaperForPageSize:(CGSize)pageSize withPapersFromArray:(id)array;	// 0x33ccecbd
- (id)_initWithPrintKitPaper:(id)printKitPaper;	// 0x33ccfc99
- (id)_localizedName;	// 0x33cd00cd
- (int)_paperOrientation;	// 0x33cd00fd
- (id)_pkPaper;	// 0x33cd0071
- (CGRect)_printableRectForDuplex:(BOOL)duplex;	// 0x33ccff4d
- (void)_setPaperOrientation:(int)orientation;	// 0x33cd00ed
- (void)_updatePKPaper:(id)paper;	// 0x33ccfced
- (void)dealloc;	// 0x33ccfd31
- (id)description;	// 0x33cd0081
- (BOOL)isEqual:(id)equal;	// 0x33ccfd7d
// declared property getter: - (CGSize)paperSize;	// 0x33ccfdb9
- (CGRect)printRect;	// 0x33cd010d
// declared property getter: - (CGRect)printableRect;	// 0x33ccfe29
@end

