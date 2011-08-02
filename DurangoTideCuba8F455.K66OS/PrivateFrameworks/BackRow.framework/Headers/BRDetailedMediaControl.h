/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRActionShelfControl, BRCoverArtPreviewControl, BRTextControl;
@protocol BRProvider;

@interface BRDetailedMediaControl : BRControl {
@private
	BRControl *_metadata;	// 44 = 0x2c
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 48 = 0x30
	BRControl *_textLine;	// 52 = 0x34
	BRControl *_previewBrowser;	// 56 = 0x38
	BRActionShelfControl *_actionShelf;	// 60 = 0x3c
	BRTextControl *_expiryText;	// 64 = 0x40
	id<BRProvider> _metadataProvider;	// 68 = 0x44
	id<BRProvider> _textLineProvider;	// 72 = 0x48
	id<BRProvider> _previewBrowserProvider;	// 76 = 0x4c
	int _style;	// 80 = 0x50
	BOOL _detailsTogglingEnabled;	// 84 = 0x54
	BOOL _autoRefreshMetadata;	// 85 = 0x55
}
@property(retain) id actionProviders;	// G=0x32f68f55; S=0x32f68f85; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x32f68d85; S=0x32f693fd; converted property
@property(assign) int detailControlStyle;	// G=0x32f68d75; S=0x32f28761; converted property
@property(retain) id detailedMetadataControl;	// G=0x32f68db5; S=0x32f69279; converted property
@property(retain) id metadataProvider;	// G=0x32f68da5; S=0x32f28c85; converted property
@property(retain) id previewBrowserProvider;	// G=0x32f68dc5; S=0x32f69165; converted property
@property(retain) id textLineProvider;	// G=0x32f68d95; S=0x32f29d55; converted property
- (id)init;	// 0x32f284bd
- (void)_focusedActionChanged:(id)changed;	// 0x32f68de5
- (id)accessibilityScreenContent;	// 0x32f68e81
// converted property getter: - (id)actionProviders;	// 0x32f68f55
- (BOOL)brEventAction:(id)action;	// 0x32f2abc5
// converted property getter: - (id)coverArtPreviewControl;	// 0x32f68d85
- (void)dealloc;	// 0x32f2c839
// converted property getter: - (int)detailControlStyle;	// 0x32f68d75
// converted property getter: - (id)detailedMetadataControl;	// 0x32f68db5
- (void)enableDetailsToggling;	// 0x32f29e69
- (CGRect)focusCursorFrame;	// 0x32f69965
- (void)invokeActionSelectionHandler;	// 0x32f68f01
- (void)layoutSubcontrols;	// 0x32f69545
// converted property getter: - (id)metadataProvider;	// 0x32f68da5
// converted property getter: - (id)previewBrowserProvider;	// 0x32f68dc5
- (void)setActionFocusedIndex:(long)index;	// 0x32f68ea1
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x32f68f85
- (void)setActionSelectionHandler:(id)handler;	// 0x32f68f35
- (void)setActionStyle:(int)style;	// 0x32f68ee1
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x32f68dd5
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x32f693fd
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x32f28761
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x32f69279
- (void)setExpiryText:(id)text;	// 0x32f690ed
- (void)setImageProxy:(id)proxy;	// 0x32f6949d
- (void)setMediaType:(id)type;	// 0x32f694bd
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x32f28c85
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x32f69165
- (void)setTextLine:(id)line;	// 0x32f69301
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x32f29d55
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f694fd
// converted property getter: - (id)textLineProvider;	// 0x32f68d95
@end

