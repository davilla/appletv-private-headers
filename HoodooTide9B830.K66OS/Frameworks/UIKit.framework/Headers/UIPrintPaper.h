/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


@interface UIPrintPaper : NSObject {
@private
	int _paperOrientation;	// 4 = 0x4
	id _internal;	// 8 = 0x8
}
@property(readonly, assign) CGSize paperSize;	// G=0x30373ffd; 
@property(readonly, assign) CGRect printableRect;	// G=0x3037406d; 
+ (id)_defaultPKPaperForOuptutType:(int)ouptutType;	// 0x30373b69
+ (id)_defaultPaperForOutputType:(int)outputType;	// 0x30373e81
+ (id)_defaultPaperListForOutputType:(int)outputType;	// 0x30373ced
+ (id)_paperListForPrinter:(id)printer withDuplexMode:(int)duplexMode;	// 0x30373a39
+ (id)_readyPaperListForPrinter:(id)printer withDuplexMode:(int)duplexMode;	// 0x30373771
+ (id)_readyPaperListForPrinter:(id)printer withDuplexMode:(int)duplexMode forContentType:(int)contentType;	// 0x30373869
+ (id)bestPaperForPageSize:(CGSize)pageSize withPapersFromArray:(id)array;	// 0x30372f01
- (id)_initWithPrintKitPaper:(id)printKitPaper;	// 0x30373edd
- (id)_localizedName;	// 0x30374311
- (int)_paperOrientation;	// 0x30374341
- (id)_pkPaper;	// 0x303742b5
- (CGRect)_printableRectForDuplex:(BOOL)duplex;	// 0x30374191
- (void)_setPaperOrientation:(int)orientation;	// 0x30374331
- (void)_updatePKPaper:(id)paper;	// 0x30373f31
- (void)dealloc;	// 0x30373f75
- (id)description;	// 0x303742c5
- (BOOL)isEqual:(id)equal;	// 0x30373fc1
// declared property getter: - (CGSize)paperSize;	// 0x30373ffd
- (CGRect)printRect;	// 0x30374351
// declared property getter: - (CGRect)printableRect;	// 0x3037406d
@end

