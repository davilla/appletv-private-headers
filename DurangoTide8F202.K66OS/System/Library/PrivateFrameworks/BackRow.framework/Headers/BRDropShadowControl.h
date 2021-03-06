/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


@interface BRDropShadowControl : BRControl {
@private
	BRControl *_content;	// 44 = 0x2c
	int _shadowStyle;	// 48 = 0x30
	float _sizeFactor;	// 52 = 0x34
}
@property(retain) BRControl *content;	// G=0x328f8b0d; S=0x328a5b81; converted property
@property(assign) float shadowSizeFactor;	// G=0x328f8afd; S=0x328f8b1d; converted property
@property(assign) int shadowStyle;	// G=0x328f8aed; S=0x328a5711; converted property
- (id)init;	// 0x328a56bd
- (void)_updateImages;	// 0x328a5739
// converted property getter: - (id)content;	// 0x328f8b0d
- (void)dealloc;	// 0x328b7781
- (void)layoutSubcontrols;	// 0x328f8b51
// converted property setter: - (void)setContent:(id)content;	// 0x328a5b81
// converted property setter: - (void)setShadowSizeFactor:(float)factor;	// 0x328f8b1d
// converted property setter: - (void)setShadowStyle:(int)style;	// 0x328a5711
// converted property getter: - (float)shadowSizeFactor;	// 0x328f8afd
// converted property getter: - (int)shadowStyle;	// 0x328f8aed
@end

