/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRSpecialKeyRow : BRControl {
@private
	BRControl *_layoutReferenceKeyRow;	// 44 = 0x2c
}
- (void)dealloc;	// 0x329a4869
- (void)layoutSubcontrols;	// 0x329a4b51
- (void)setLayoutReferenceKeyRow:(id)row;	// 0x329a4831
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x329a4e6d
@end
