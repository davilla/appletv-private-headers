/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTVAPPBinary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRWaitSpinnerControl, BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface SettingsBluetoothMediaMenuViewPreviewControl : XXUnknownSuperclass {
	BRImageControl *_logo;	// 48 = 0x30
	BRTextControl *_searchingText;	// 52 = 0x34
	BRWaitSpinnerControl *_spinner;	// 56 = 0x38
	BOOL _displayScanningMessage;	// 60 = 0x3c
}
- (id)init;	// 0xd5a4d
- (void).cxx_destruct;	// 0xd603d
- (void)layoutSubcontrols;	// 0xd5db9
- (void)setDisplayScanningMessage:(BOOL)message;	// 0xd600d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xd5cd9
@end

