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
@property(readonly, assign) CGSize paperSize;	// G=0x303cbacd; 
@property(readonly, assign) CGRect printableRect;	// G=0x303cbb35; 
+ (id)_defaultPKPaperForOuptutType:(int)ouptutType;	// 0x303cb601
+ (id)_defaultPaperForOutputType:(int)outputType;	// 0x303cb951
+ (id)_defaultPaperListForOutputType:(int)outputType;	// 0x303cb785
+ (id)_paperListForPrinter:(id)printer withDuplexMode:(int)duplexMode;	// 0x303cb4d1
+ (id)_readyPaperListForPrinter:(id)printer withDuplexMode:(int)duplexMode;	// 0x303cb1ed
+ (id)_readyPaperListForPrinter:(id)printer withDuplexMode:(int)duplexMode forContentType:(int)contentType;	// 0x303cb2e5
+ (id)bestPaperForPageSize:(CGSize)pageSize withPapersFromArray:(id)array;	// 0x303ca981
- (id)_initWithPrintKitPaper:(id)printKitPaper;	// 0x303cb9ad
- (id)_localizedName;	// 0x303cbdc5
- (int)_paperOrientation;	// 0x303cbdf5
- (id)_pkPaper;	// 0x303cbd69
- (CGRect)_printableRectForDuplex:(BOOL)duplex;	// 0x303cbc45
- (void)_setPaperOrientation:(int)orientation;	// 0x303cbde5
- (void)_updatePKPaper:(id)paper;	// 0x303cba01
- (void)dealloc;	// 0x303cba45
- (id)description;	// 0x303cbd79
- (BOOL)isEqual:(id)equal;	// 0x303cba91
// declared property getter: - (CGSize)paperSize;	// 0x303cbacd
- (CGRect)printRect;	// 0x303cbe05
// declared property getter: - (CGRect)printableRect;	// 0x303cbb35
@end

