/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSString, BRImage;

__attribute__((visibility("hidden")))
@interface BRPairingPinControl : BRControl {
@private
	BRImage *_boxImage;	// 44 = 0x2c
	NSString *_pin;	// 48 = 0x30
}
@property(retain) id PIN;	// G=0x32f79225; S=0x32f79289; converted property
- (id)init;	// 0x32f79449
// converted property getter: - (id)PIN;	// 0x32f79225
- (id)_layerForPINDigit:(id)pindigit;	// 0x32f794f5
- (id)accessibilityLabel;	// 0x32f79235
- (void)dealloc;	// 0x32f793ed
- (void)layoutSubcontrols;	// 0x32f795b5
// converted property setter: - (void)setPIN:(id)pin;	// 0x32f79289
@end

