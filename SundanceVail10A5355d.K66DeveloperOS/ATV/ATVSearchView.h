/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuView.h"

@class BRImageControl, BRTextEntryControl;
@protocol ATVSearchViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVSearchView : BRMediaMenuView {
	BRImageControl *_verticalDividerImage;	// 124 = 0x7c
	BOOL _previewEnabled;	// 128 = 0x80
	BRTextEntryControl *_editor;	// 132 = 0x84
	id<ATVSearchViewDelegate> _delegate;	// 136 = 0x88
}
@property(assign, nonatomic) id<ATVSearchViewDelegate> delegate;	// G=0x105585; S=0x104e09; @synthesize=_delegate
@property(readonly, assign) BRTextEntryControl *editor;	// G=0x105571; @synthesize=_editor
@property(assign) int focusedSearchViewControl;	// G=0x104e19; S=0x104e4d; @dynamic
@property(assign) BOOL previewEnabled;	// G=0x105541; S=0x105559; @synthesize=_previewEnabled
- (id)init;	// 0x104ba1
- (id)initWithPreviewEnabled:(BOOL)previewEnabled;	// 0x104bb5
- (void)_displayEditor;	// 0x105615
- (void)_focusDidChangeToControl:(int)_focus;	// 0x1056a9
- (void)_hideEditor;	// 0x105595
- (BOOL)brEventAction:(id)action;	// 0x105231
- (void)dealloc;	// 0x104da5
// declared property getter: - (id)delegate;	// 0x105585
// declared property getter: - (id)editor;	// 0x105571
// declared property getter: - (int)focusedSearchViewControl;	// 0x104e19
- (void)layoutSubcontrols;	// 0x104f11
// declared property getter: - (BOOL)previewEnabled;	// 0x105541
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x104e09
// declared property setter: - (void)setFocusedSearchViewControl:(int)control;	// 0x104e4d
- (void)setListHeader:(id)header;	// 0x105495
- (void)setPreview:(id)preview;	// 0x105441
// declared property setter: - (void)setPreviewEnabled:(BOOL)enabled;	// 0x105559
@end
