/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRCursorControl, NSString, BRMediaShelfView, BRDividerControl, BRTextControl, BRMetadataTitleControl, BRTableView, BRCoverArtPreviewControl;
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
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x3038bca1; S=0x3038b125; @synthesize=_bottomShelf
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x3038bc81; S=0x3038b08d; @synthesize=_centerShelf
@property(assign, nonatomic) int displayMode;	// G=0x3038bc51; S=0x3038bc61; @synthesize=_displayMode
@property(retain, nonatomic) BRControl *divider;	// G=0x3038bc91; S=0x3038b1ad; @synthesize=_divider
@property(retain, nonatomic) id<BRImageProxy> mainImageProxy;	// G=0x3038b055; S=0x3038b035; @dynamic
@property(assign, nonatomic) int mainImageStyle;	// G=0x3038bc31; S=0x3038bc41; @synthesize=_mainImageStyle
@property(retain, nonatomic) NSString *mainImageText;	// G=0x3038b291; S=0x3038b235; @dynamic
@property(readonly, assign, nonatomic) float metadataWidth;	// G=0x3038b36d; @dynamic
@property(retain, nonatomic) NSString *summary;	// G=0x3038b335; S=0x3038b2c9; @dynamic
@property(readonly, assign, nonatomic) BRTableView *table;	// G=0x3038bc71; @synthesize=_table
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x3038bcb1; @synthesize=_titleControl
- (id)init;	// 0x3038ac9d
- (id)accessibilityLabel;	// 0x3038bbc9
// declared property getter: - (id)bottomShelf;	// 0x3038bca1
- (BOOL)brEventAction:(id)action;	// 0x3038b3a9
// declared property getter: - (id)centerShelf;	// 0x3038bc81
- (void)dealloc;	// 0x3038af21
// declared property getter: - (int)displayMode;	// 0x3038bc51
// declared property getter: - (id)divider;	// 0x3038bc91
- (void)layoutSubcontrols;	// 0x3038b4d5
// declared property getter: - (id)mainImageProxy;	// 0x3038b055
// declared property getter: - (int)mainImageStyle;	// 0x3038bc31
// declared property getter: - (id)mainImageText;	// 0x3038b291
// declared property getter: - (float)metadataWidth;	// 0x3038b36d
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x3038b125
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x3038b08d
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x3038bc61
// declared property setter: - (void)setDivider:(id)divider;	// 0x3038b1ad
// declared property setter: - (void)setMainImageProxy:(id)proxy;	// 0x3038b035
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x3038bc41
// declared property setter: - (void)setMainImageText:(id)text;	// 0x3038b235
// declared property setter: - (void)setSummary:(id)summary;	// 0x3038b2c9
// declared property getter: - (id)summary;	// 0x3038b335
// declared property getter: - (id)table;	// 0x3038bc71
// declared property getter: - (id)titleControl;	// 0x3038bcb1
@end

