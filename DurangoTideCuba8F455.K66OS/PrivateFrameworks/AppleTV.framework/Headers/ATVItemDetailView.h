/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library

@class BRCoverArtPreviewControl, BRTextControl, BRMetadataTitleControl, NSString, BRDividerControl, BRCursorControl, BRMediaShelfView, BRTableView;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVItemDetailView : BRControl {
@private
	BRCoverArtPreviewControl *_mainImageControl;	// 44 = 0x2c
	BRDividerControl *_summaryTopDivider;	// 48 = 0x30
	BRDividerControl *_summaryBottomDivider;	// 52 = 0x34
	BRTextControl *_mainImageTextControl;	// 56 = 0x38
	BRTextControl *_summaryControl;	// 60 = 0x3c
	BRCursorControl *_cursor;	// 64 = 0x40
	int _mainImageStyle;	// 68 = 0x44
	int _displayMode;	// 72 = 0x48
	BRTableView *_table;	// 76 = 0x4c
	BRMediaShelfView *_centerShelf;	// 80 = 0x50
	BRControl *_divider;	// 84 = 0x54
	BRMediaShelfView *_bottomShelf;	// 88 = 0x58
	BRMetadataTitleControl *_titleControl;	// 92 = 0x5c
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x307151d9; S=0x30715441; @synthesize=_bottomShelf
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x307151f9; S=0x307154b9; @synthesize=_centerShelf
@property(assign, nonatomic) int displayMode;	// G=0x30715219; S=0x30715229; @synthesize=_displayMode
@property(retain, nonatomic) BRControl *divider;	// G=0x307151e9; S=0x307153c9; @synthesize=_divider
@property(retain, nonatomic) id<BRImageProxy> mainImageProxy;	// G=0x30715549; S=0x30715579; @dynamic
@property(assign, nonatomic) int mainImageStyle;	// G=0x30715239; S=0x30715249; @synthesize=_mainImageStyle
@property(retain, nonatomic) NSString *mainImageText;	// G=0x30715399; S=0x30715901; @dynamic
@property(readonly, assign, nonatomic) float metadataWidth;	// G=0x30715969; @dynamic
@property(retain, nonatomic) NSString *summary;	// G=0x30715369; S=0x30715899; @dynamic
@property(readonly, assign, nonatomic) BRTableView *table;	// G=0x30715209; @synthesize=_table
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x307151c9; @synthesize=_titleControl
- (id)init;	// 0x30715695
- (id)accessibilityLabel;	// 0x307159a5
// declared property getter: - (id)bottomShelf;	// 0x307151d9
- (BOOL)brEventAction:(id)action;	// 0x30715259
// declared property getter: - (id)centerShelf;	// 0x307151f9
- (void)dealloc;	// 0x30715599
// declared property getter: - (int)displayMode;	// 0x30715219
// declared property getter: - (id)divider;	// 0x307151e9
- (void)layoutSubcontrols;	// 0x30715a05
// declared property getter: - (id)mainImageProxy;	// 0x30715549
// declared property getter: - (int)mainImageStyle;	// 0x30715239
// declared property getter: - (id)mainImageText;	// 0x30715399
// declared property getter: - (float)metadataWidth;	// 0x30715969
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x30715441
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x307154b9
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x30715229
// declared property setter: - (void)setDivider:(id)divider;	// 0x307153c9
// declared property setter: - (void)setMainImageProxy:(id)proxy;	// 0x30715579
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x30715249
// declared property setter: - (void)setMainImageText:(id)text;	// 0x30715901
// declared property setter: - (void)setSummary:(id)summary;	// 0x30715899
// declared property getter: - (id)summary;	// 0x30715369
// declared property getter: - (id)table;	// 0x30715209
// declared property getter: - (id)titleControl;	// 0x307151c9
@end

