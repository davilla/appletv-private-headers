/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRController.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRTextControl, BRHeaderControl, BRAirportNetwork, BRWaitSpinnerControl;
@protocol ATVAPTestResultDelegate;

@interface ATVAPTestController : BRController {
@private
	BRWaitSpinnerControl *_spinner;	// 60 = 0x3c
	BRAirportNetwork *_network;	// 64 = 0x40
	BOOL _testFailed;	// 68 = 0x44
	id<ATVAPTestResultDelegate> _delegate;	// 72 = 0x48
	BRHeaderControl *_header;	// 76 = 0x4c
	BRTextControl *_prompt;	// 80 = 0x50
}
- (id)initForNetwork:(id)network notifying:(id)notifying;	// 0x30760ef5
- (void)_testFinished:(id)finished;	// 0x30761319
- (void)_testInternetConnection;	// 0x307612e9
- (void)dealloc;	// 0x30760e3d
- (void)setFrame:(CGRect)frame;	// 0x30761101
- (void)wasExhumed;	// 0x30760dc5
- (void)wasPushed;	// 0x30760e01
@end

