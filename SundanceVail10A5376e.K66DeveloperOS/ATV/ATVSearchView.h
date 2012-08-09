/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuView.h"

@class BRImageControl, BRTextEntryControl, BRControl;
@protocol ATVSearchViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVSearchView : BRMediaMenuView {
	BRImageControl *_verticalDividerImage;	// 128 = 0x80
	BOOL _previewEnabled;	// 132 = 0x84
	BRTextEntryControl *_editor;	// 136 = 0x88
	id<ATVSearchViewDelegate> _delegate;	// 140 = 0x8c
	BRControl *_searchDescriptionPreview;	// 144 = 0x90
}
@property(assign, nonatomic) id<ATVSearchViewDelegate> delegate;	// G=0x10d0dd; S=0x10c8cd; @synthesize=_delegate
@property(readonly, assign) BRTextEntryControl *editor;	// G=0x10d0c9; @synthesize=_editor
@property(assign) int focusedSearchViewControl;	// G=0x10c8dd; S=0x10c911; @dynamic
@property(assign) BOOL previewEnabled;	// G=0x10d099; S=0x10d0b1; @synthesize=_previewEnabled
@property(retain, nonatomic) BRControl *searchDescriptionPreview;	// G=0x10d0ed; S=0x10c9d5; @synthesize=_searchDescriptionPreview
- (id)init;	// 0x10c651
- (id)initWithPreviewEnabled:(BOOL)previewEnabled;	// 0x10c665
- (void)_displayEditor;	// 0x10d17d
- (void)_focusDidChangeToControl:(int)_focus;	// 0x10d211
- (void)_hideEditor;	// 0x10d0fd
- (BOOL)brEventAction:(id)action;	// 0x10cd89
- (void)dealloc;	// 0x10c855
// declared property getter: - (id)delegate;	// 0x10d0dd
// declared property getter: - (id)editor;	// 0x10d0c9
// declared property getter: - (int)focusedSearchViewControl;	// 0x10c8dd
- (void)layoutSubcontrols;	// 0x10ca41
// declared property getter: - (BOOL)previewEnabled;	// 0x10d099
// declared property getter: - (id)searchDescriptionPreview;	// 0x10d0ed
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x10c8cd
// declared property setter: - (void)setFocusedSearchViewControl:(int)control;	// 0x10c911
- (void)setListHeader:(id)header;	// 0x10cfed
- (void)setPreview:(id)preview;	// 0x10cf99
// declared property setter: - (void)setPreviewEnabled:(BOOL)enabled;	// 0x10d0b1
// declared property setter: - (void)setSearchDescriptionPreview:(id)preview;	// 0x10c9d5
@end
