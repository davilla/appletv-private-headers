/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIPrintPaper, UIPrintingProgress, UIPrintPanelViewController, PKPrinter, UIPrintPageRenderer, UIPrintInfo, PKPrintSettings;

__attribute__((visibility("hidden")))
@interface UIPrintInteractionControllerInternals : NSObject {
@private
	int _pageCount;	// 4 = 0x4
	NSRange _pageRange;	// 8 = 0x8
	int _currentPage;	// 16 = 0x10
	UIPrintPanelViewController *_printPanelViewController;	// 20 = 0x14
	UIPrintingProgress *_printingProgress;	// 24 = 0x18
	PKPrinter *_printer;	// 28 = 0x1c
	UIPrintPaper *_paper;	// 32 = 0x20
	PKPrintSettings *_printSettings;	// 36 = 0x24
	UIPrintInfo *_activePrintInfo;	// 40 = 0x28
	int _printInfoState;	// 44 = 0x2c
	BOOL _supressNotifyDismissed;	// 48 = 0x30
	UIPrintPageRenderer *_formatterRenderer;	// 52 = 0x34
}
- (void)dealloc;	// 0x33cd7b09
@end

