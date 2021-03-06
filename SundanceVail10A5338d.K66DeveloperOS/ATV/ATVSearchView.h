/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuView.h"

@class BRTextEntryControl, BRImageControl;
@protocol ATVSearchViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVSearchView : BRMediaMenuView {
	BRImageControl *_verticalDividerImage;	// 124 = 0x7c
	BOOL _previewEnabled;	// 128 = 0x80
	BRTextEntryControl *_editor;	// 132 = 0x84
	id<ATVSearchViewDelegate> _delegate;	// 136 = 0x88
}
@property(assign, nonatomic) id<ATVSearchViewDelegate> delegate;	// G=0x100c65; S=0x1004e9; @synthesize=_delegate
@property(readonly, assign) BRTextEntryControl *editor;	// G=0x100c51; @synthesize=_editor
@property(assign) int focusedSearchViewControl;	// G=0x1004f9; S=0x10052d; @dynamic
@property(assign) BOOL previewEnabled;	// G=0x100c21; S=0x100c39; @synthesize=_previewEnabled
- (id)init;	// 0x100281
- (id)initWithPreviewEnabled:(BOOL)previewEnabled;	// 0x100295
- (void)_displayEditor;	// 0x100cf5
- (void)_focusDidChangeToControl:(int)_focus;	// 0x100d89
- (void)_hideEditor;	// 0x100c75
- (BOOL)brEventAction:(id)action;	// 0x100911
- (void)dealloc;	// 0x100485
// declared property getter: - (id)delegate;	// 0x100c65
// declared property getter: - (id)editor;	// 0x100c51
// declared property getter: - (int)focusedSearchViewControl;	// 0x1004f9
- (void)layoutSubcontrols;	// 0x1005f1
// declared property getter: - (BOOL)previewEnabled;	// 0x100c21
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1004e9
// declared property setter: - (void)setFocusedSearchViewControl:(int)control;	// 0x10052d
- (void)setListHeader:(id)header;	// 0x100b75
- (void)setPreview:(id)preview;	// 0x100b21
// declared property setter: - (void)setPreviewEnabled:(BOOL)enabled;	// 0x100c39
@end

