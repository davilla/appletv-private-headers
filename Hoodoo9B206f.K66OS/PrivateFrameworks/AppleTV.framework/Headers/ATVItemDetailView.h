/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRCoverArtPreviewControl, BRCursorControl, BRMediaShelfView, BRDividerControl, NSString, BRTextControl, BRTableView, BRMetadataTitleControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVItemDetailView : BRControl {
@private
	BRCoverArtPreviewControl *_mainImageControl;	// 48 = 0x30
	BRDividerControl *_summaryTopDivider;	// 52 = 0x34
	BRDividerControl *_summaryBottomDivider;	// 56 = 0x38
	BRTextControl *_mainImageTextControl;	// 60 = 0x3c
	BRTextControl *_summaryControl;	// 64 = 0x40
	BRCursorControl *_cursor;	// 68 = 0x44
	int _mainImageStyle;	// 72 = 0x48
	int _displayMode;	// 76 = 0x4c
	BRTableView *_table;	// 80 = 0x50
	BRMediaShelfView *_centerShelf;	// 84 = 0x54
	BRControl *_divider;	// 88 = 0x58
	BRMediaShelfView *_bottomShelf;	// 92 = 0x5c
	BRMetadataTitleControl *_titleControl;	// 96 = 0x60
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x3678b3d5; S=0x3678a859; @synthesize=_bottomShelf
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x3678b3b5; S=0x3678a7c1; @synthesize=_centerShelf
@property(assign, nonatomic) int displayMode;	// G=0x3678b385; S=0x3678b395; @synthesize=_displayMode
@property(retain, nonatomic) BRControl *divider;	// G=0x3678b3c5; S=0x3678a8e1; @synthesize=_divider
@property(retain, nonatomic) id<BRImageProxy> mainImageProxy;	// G=0x3678a789; S=0x3678a769; @dynamic
@property(assign, nonatomic) int mainImageStyle;	// G=0x3678b365; S=0x3678b375; @synthesize=_mainImageStyle
@property(retain, nonatomic) NSString *mainImageText;	// G=0x3678a9c5; S=0x3678a969; @dynamic
@property(readonly, assign, nonatomic) float metadataWidth;	// G=0x3678aaa1; @dynamic
@property(retain, nonatomic) NSString *summary;	// G=0x3678aa69; S=0x3678a9fd; @dynamic
@property(readonly, assign, nonatomic) BRTableView *table;	// G=0x3678b3a5; @synthesize=_table
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x3678b3e5; @synthesize=_titleControl
- (id)init;	// 0x3678a3d1
- (id)accessibilityLabel;	// 0x3678b2fd
// declared property getter: - (id)bottomShelf;	// 0x3678b3d5
- (BOOL)brEventAction:(id)action;	// 0x3678aadd
// declared property getter: - (id)centerShelf;	// 0x3678b3b5
- (void)dealloc;	// 0x3678a655
// declared property getter: - (int)displayMode;	// 0x3678b385
// declared property getter: - (id)divider;	// 0x3678b3c5
- (void)layoutSubcontrols;	// 0x3678ac09
// declared property getter: - (id)mainImageProxy;	// 0x3678a789
// declared property getter: - (int)mainImageStyle;	// 0x3678b365
// declared property getter: - (id)mainImageText;	// 0x3678a9c5
// declared property getter: - (float)metadataWidth;	// 0x3678aaa1
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x3678a859
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x3678a7c1
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x3678b395
// declared property setter: - (void)setDivider:(id)divider;	// 0x3678a8e1
// declared property setter: - (void)setMainImageProxy:(id)proxy;	// 0x3678a769
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x3678b375
// declared property setter: - (void)setMainImageText:(id)text;	// 0x3678a969
// declared property setter: - (void)setSummary:(id)summary;	// 0x3678a9fd
// declared property getter: - (id)summary;	// 0x3678aa69
// declared property getter: - (id)table;	// 0x3678b3a5
// declared property getter: - (id)titleControl;	// 0x3678b3e5
@end

