/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, UIPrintPageRenderer, UIPrintInfo, UIPrintPaper, UIPrintFormatter, PKPrinter;
@protocol UIPrintInteractionControllerDelegate;

@interface UIPrintInteractionController : NSObject {
@private
	UIPrintInfo *_printInfo;	// 4 = 0x4
	id<UIPrintInteractionControllerDelegate> _delegate;	// 8 = 0x8
	BOOL _showsPageRange;	// 12 = 0xc
	UIPrintPageRenderer *_printPageRenderer;	// 16 = 0x10
	UIPrintFormatter *_printFormatter;	// 20 = 0x14
	id _printingItem;	// 24 = 0x18
	NSArray *_printingItems;	// 28 = 0x1c
	UIPrintPaper *_printPaper;	// 32 = 0x20
	id _completionHandler;	// 36 = 0x24
	unsigned _backgroundTaskIdentifier;	// 40 = 0x28
	id _printState;	// 44 = 0x2c
}
@property(assign, nonatomic) id<UIPrintInteractionControllerDelegate> delegate;	// G=0x35415691; S=0x354156a1; @synthesize=_delegate
@property(readonly, assign, nonatomic) int pageCount;	// G=0x354126e1; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x35412705; S=0x35412769; 
@property(retain, nonatomic) UIPrintPaper *paper;	// G=0x35412839; S=0x35412a4d; 
@property(retain, nonatomic) UIPrintFormatter *printFormatter;	// G=0x35415715; S=0x35415725; @synthesize=_printFormatter
@property(retain, nonatomic) UIPrintInfo *printInfo;	// G=0x3541565d; S=0x3541566d; @synthesize=_printInfo
@property(retain, nonatomic) UIPrintPageRenderer *printPageRenderer;	// G=0x354156e1; S=0x354156f1; @synthesize=_printPageRenderer
@property(readonly, assign, nonatomic) UIPrintPaper *printPaper;	// G=0x354156d1; @synthesize=_printPaper
@property(retain, nonatomic) PKPrinter *printer;	// G=0x3541278d; S=0x354127b1; 
@property(copy, nonatomic) id printingItem;	// G=0x35415749; S=0x35412031; @synthesize=_printingItem
@property(copy, nonatomic) NSArray *printingItems;	// G=0x35415759; S=0x35415769; @synthesize=_printingItems
@property(assign, nonatomic) BOOL showsPageRange;	// G=0x354156b1; S=0x354156c1; @synthesize=_showsPageRange
+ (BOOL)canPrintData:(id)data;	// 0x35411e61
+ (BOOL)canPrintURL:(id)url;	// 0x35411c91
+ (BOOL)isPrintingAvailable;	// 0x35411bcd
+ (id)printableUTIs;	// 0x35411c01
+ (id)sharedPrintController;	// 0x35411e79
- (id)init;	// 0x35411efd
- (BOOL)_canShowDuplex;	// 0x354125f1
- (BOOL)_canShowPageRange;	// 0x35412635
- (BOOL)_canShowPaperList;	// 0x354126a1
- (void)_cleanPrintState;	// 0x354124dd
- (id)_currentPrintInfo;	// 0x354125cd
- (void)_endPrintJob:(BOOL)job error:(id)error;	// 0x35415495
- (id)_init;	// 0x35411f4d
- (id)_paperForContentType:(int)contentType;	// 0x35413931
- (id)_paperForPDFItem:(id)pdfitem withDuplexMode:(int)duplexMode;	// 0x35413735
- (void)_preparePrintInfo;	// 0x354135f9
- (id)_printItem:(id)item;	// 0x35414745
- (void)_printPage;	// 0x3541455d
- (id)_printPageRenderer:(id)renderer;	// 0x35415335
- (void)_printPanelDidDismiss;	// 0x354134b1
- (void)_printPanelDidPresent;	// 0x35413255
- (void)_printPanelWillDismiss:(BOOL)_printPanel;	// 0x3541329d
- (void)_setPrintInfoState:(int)state;	// 0x35413339
- (BOOL)_setupPrintPanel:(id)panel;	// 0x35412fe1
- (void)_startPrinting;	// 0x35414069
- (void)_updatePageCount;	// 0x35412ab1
- (void)_updatePrintPaper;	// 0x35413a6d
- (void)dealloc;	// 0x35411f99
// declared property getter: - (id)delegate;	// 0x35415691
- (void)dismissAnimated:(BOOL)animated;	// 0x35412485
// declared property getter: - (int)pageCount;	// 0x354126e1
// declared property getter: - (NSRange)pageRange;	// 0x35412705
// declared property getter: - (id)paper;	// 0x35412839
- (BOOL)presentAnimated:(BOOL)animated completionHandler:(id)handler;	// 0x354120ad
- (BOOL)presentFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated completionHandler:(id)handler;	// 0x35412365
- (BOOL)presentFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated completionHandler:(id)handler;	// 0x35412229
// declared property getter: - (id)printFormatter;	// 0x35415715
// declared property getter: - (id)printInfo;	// 0x3541565d
// declared property getter: - (id)printPageRenderer;	// 0x354156e1
// declared property getter: - (id)printPaper;	// 0x354156d1
// declared property getter: - (id)printer;	// 0x3541278d
// declared property getter: - (id)printingItem;	// 0x35415749
// declared property getter: - (id)printingItems;	// 0x35415759
- (oneway void)release;	// 0x35411ec1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x354156a1
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x35412769
// declared property setter: - (void)setPaper:(id)paper;	// 0x35412a4d
// declared property setter: - (void)setPrintFormatter:(id)formatter;	// 0x35415725
// declared property setter: - (void)setPrintInfo:(id)info;	// 0x3541566d
// declared property setter: - (void)setPrintPageRenderer:(id)renderer;	// 0x354156f1
// declared property setter: - (void)setPrinter:(id)printer;	// 0x354127b1
// declared property setter: - (void)setPrintingItem:(id)item;	// 0x35412031
// declared property setter: - (void)setPrintingItems:(id)items;	// 0x35415769
// declared property setter: - (void)setShowsPageRange:(BOOL)range;	// 0x354156c1
// declared property getter: - (BOOL)showsPageRange;	// 0x354156b1
@end

