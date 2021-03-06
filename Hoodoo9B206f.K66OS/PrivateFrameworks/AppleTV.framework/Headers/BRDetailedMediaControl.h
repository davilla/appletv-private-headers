/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRActionShelfControl, BRCoverArtPreviewControl;
@protocol BRProvider;

@interface BRDetailedMediaControl : BRControl {
@private
	BRControl *_metadata;	// 48 = 0x30
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 52 = 0x34
	BRControl *_textLine;	// 56 = 0x38
	BRControl *_previewBrowser;	// 60 = 0x3c
	BRActionShelfControl *_actionShelf;	// 64 = 0x40
	BRTextControl *_expiryText;	// 68 = 0x44
	id<BRProvider> _metadataProvider;	// 72 = 0x48
	id<BRProvider> _textLineProvider;	// 76 = 0x4c
	id<BRProvider> _previewBrowserProvider;	// 80 = 0x50
	int _style;	// 84 = 0x54
	BOOL _detailsTogglingEnabled;	// 88 = 0x58
	BOOL _autoRefreshMetadata;	// 89 = 0x59
}
@property(retain) id actionProviders;	// G=0x3668a491; S=0x3668a2fd; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x36689d19; S=0x36689c6d; converted property
@property(assign) int detailControlStyle;	// G=0x36689c3d; S=0x36689b25; converted property
@property(retain) id detailedMetadataControl;	// G=0x3668a12d; S=0x3668a099; converted property
@property(retain) id metadataProvider;	// G=0x3668a089; S=0x36689f61; converted property
@property(retain) id previewBrowserProvider;	// G=0x3668a265; S=0x3668a13d; converted property
@property(retain) id textLineProvider;	// G=0x36689f51; S=0x36689d29; converted property
- (id)init;	// 0x36689655
- (void)_focusedActionChanged:(id)changed;	// 0x3668aa69
- (id)accessibilityScreenContent;	// 0x3668aa49
// converted property getter: - (id)actionProviders;	// 0x3668a491
- (BOOL)brEventAction:(id)action;	// 0x36689951
// converted property getter: - (id)coverArtPreviewControl;	// 0x36689d19
- (void)dealloc;	// 0x36689835
// converted property getter: - (int)detailControlStyle;	// 0x36689c3d
// converted property getter: - (id)detailedMetadataControl;	// 0x3668a12d
- (void)enableDetailsToggling;	// 0x36689b11
- (CGRect)focusCursorFrame;	// 0x36689a29
- (void)invokeActionSelectionHandler;	// 0x3668a4e9
- (void)layoutSubcontrols;	// 0x3668a5c1
// converted property getter: - (id)metadataProvider;	// 0x3668a089
// converted property getter: - (id)previewBrowserProvider;	// 0x3668a265
- (void)setActionFocusedIndex:(long)index;	// 0x3668a545
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x3668a2fd
- (void)setActionSelectionHandler:(id)handler;	// 0x3668a4c9
- (void)setActionStyle:(int)style;	// 0x3668a525
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x3668a2ed
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x36689c6d
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x36689b25
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x3668a099
- (void)setExpiryText:(id)text;	// 0x3668a275
- (void)setImageProxy:(id)proxy;	// 0x36689c4d
- (void)setMediaType:(id)type;	// 0x36689815
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x36689f61
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x3668a13d
- (void)setTextLine:(id)line;	// 0x36689e51
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x36689d29
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3668a591
// converted property getter: - (id)textLineProvider;	// 0x36689f51
@end

