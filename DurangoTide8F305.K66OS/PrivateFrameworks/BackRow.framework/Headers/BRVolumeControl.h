/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRPercentageIndicatorLayer, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRVolumeControl : BRControl {
@private
	BRImageControl *_speakerOnLayer;	// 44 = 0x2c
	BRImageControl *_speakerOffLayer;	// 48 = 0x30
	BRPercentageIndicatorLayer *_percentageIndicatorLayer;	// 52 = 0x34
}
@property(assign) float volume;	// G=0x3299fe4d; S=0x3299fe81; converted property
- (id)init;	// 0x3299fff9
- (void)dealloc;	// 0x3299ff8d
- (void)layoutSubcontrols;	// 0x329a0261
// converted property setter: - (void)setVolume:(float)volume;	// 0x3299fe81
// converted property getter: - (float)volume;	// 0x3299fe4d
@end

