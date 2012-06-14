/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMediaShelfView, BRListView, BRCursorControl;

__attribute__((visibility("hidden")))
@interface ATVShelfListView : BRControl {
@private
	BRCursorControl *_cursor;	// 48 = 0x30
	BRControl *_headerControl;	// 52 = 0x34
	BRMediaShelfView *_centerShelf;	// 56 = 0x38
	BRListView *_bottomList;	// 60 = 0x3c
}
@property(retain, nonatomic) BRListView *bottomList;	// G=0x32b141b9; S=0x32b13cd5; @synthesize=_bottomList
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x32b141a9; S=0x32b13c1d; @synthesize=_centerShelf
@property(retain, nonatomic) BRCursorControl *cursor;	// G=0x32b14165; S=0x32b14175; @synthesize=_cursor
@property(retain, nonatomic) BRControl *headerControl;	// G=0x32b14199; S=0x32b13ba1; @synthesize=_headerControl
- (id)init;	// 0x32b139fd
- (void)_focusChanged:(id)changed;	// 0x32b14105
// declared property getter: - (id)bottomList;	// 0x32b141b9
// declared property getter: - (id)centerShelf;	// 0x32b141a9
// declared property getter: - (id)cursor;	// 0x32b14165
- (void)dealloc;	// 0x32b13ae9
// declared property getter: - (id)headerControl;	// 0x32b14199
- (void)layoutSubcontrols;	// 0x32b13db9
// declared property setter: - (void)setBottomList:(id)list;	// 0x32b13cd5
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x32b13c1d
// declared property setter: - (void)setCursor:(id)cursor;	// 0x32b14175
// declared property setter: - (void)setHeaderControl:(id)control;	// 0x32b13ba1
@end
