/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRMainMenuShelfErrorControl, BRMainMenuImageControl, BRMediaShelfView;

@interface BRTopShelfView : BRControl {
@private
	int _state;	// 44 = 0x2c
	BRMediaShelfView *_shelf;	// 48 = 0x30
	BRMainMenuShelfErrorControl *_error;	// 52 = 0x34
	BRMainMenuImageControl *_productImage;	// 56 = 0x38
}
@property(readonly, assign) BRMainMenuShelfErrorControl *error;	// G=0x3301bad1; @synthesize=_error
@property(readonly, assign) BRMediaShelfView *shelf;	// G=0x3301bae1; @synthesize=_shelf
@property(assign) int state;	// G=0x3301bac1; S=0x3301bf01; 
- (id)init;	// 0x3301bcf9
- (BOOL)accessibilityElementIsHidden;	// 0x3301c075
- (void)dealloc;	// 0x3301bc8d
// declared property getter: - (id)error;	// 0x3301bad1
- (void)layoutSubcontrols;	// 0x3301be55
- (id)preferredActionForKey:(id)key;	// 0x3301baf1
- (void)setAcceptsFocus:(BOOL)focus;	// 0x3301bc15
// declared property setter: - (void)setState:(int)state;	// 0x3301bf01
// declared property getter: - (id)shelf;	// 0x3301bae1
// declared property getter: - (int)state;	// 0x3301bac1
@end

