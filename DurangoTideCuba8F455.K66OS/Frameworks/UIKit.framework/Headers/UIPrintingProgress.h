/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIAlertView, NSString, UIPrintingProgressViewController;

__attribute__((visibility("hidden")))
@interface UIPrintingProgress : NSObject {
@private
	NSString *_printerName;	// 4 = 0x4
	id _cancelHandler;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _displayTime;	// 20 = 0x14
	int _printInfoState;	// 28 = 0x1c
	UIAlertView *_alert;	// 32 = 0x20
	UIPrintingProgressViewController *_viewController;	// 36 = 0x24
	BOOL _donePrinting;	// 40 = 0x28
}
- (id)initWithPrinterName:(id)printerName cancelHandler:(id)handler;	// 0x30354bf1
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x30354955
- (void)alertViewCancel:(id)cancel;	// 0x3035496d
- (void)dealloc;	// 0x30354b35
- (void)didEnterBackground;	// 0x3035491d
- (void)didPresentAlertView:(id)view;	// 0x30354981
- (void)endProgress;	// 0x3035561d
- (void)hideProgressAnimated:(BOOL)animated;	// 0x303549b5
- (double)nextPrintDelay;	// 0x3035547d
- (void)progressCancel;	// 0x30355aa5
- (BOOL)progressVisible;	// 0x30354a9d
- (void)setPage:(int)page ofPage:(int)page2;	// 0x30355281
- (void)setPrintInfoState:(int)state;	// 0x303553f5
- (void)showProgress:(id)progress immediately:(BOOL)immediately;	// 0x30355729
@end

