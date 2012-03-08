/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRCoverArtPreviewControl, BRTextControl, BRActionShelfControl;
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
@property(retain) id actionProviders;	// G=0x3028b6ad; S=0x3028b519; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x3028af35; S=0x3028ae89; converted property
@property(assign) int detailControlStyle;	// G=0x3028ae59; S=0x3028ad41; converted property
@property(retain) id detailedMetadataControl;	// G=0x3028b349; S=0x3028b2b5; converted property
@property(retain) id metadataProvider;	// G=0x3028b2a5; S=0x3028b17d; converted property
@property(retain) id previewBrowserProvider;	// G=0x3028b481; S=0x3028b359; converted property
@property(retain) id textLineProvider;	// G=0x3028b16d; S=0x3028af45; converted property
- (id)init;	// 0x3028a871
- (void)_focusedActionChanged:(id)changed;	// 0x3028bc85
- (id)accessibilityScreenContent;	// 0x3028bc65
// converted property getter: - (id)actionProviders;	// 0x3028b6ad
- (BOOL)brEventAction:(id)action;	// 0x3028ab6d
// converted property getter: - (id)coverArtPreviewControl;	// 0x3028af35
- (void)dealloc;	// 0x3028aa51
// converted property getter: - (int)detailControlStyle;	// 0x3028ae59
// converted property getter: - (id)detailedMetadataControl;	// 0x3028b349
- (void)enableDetailsToggling;	// 0x3028ad2d
- (CGRect)focusCursorFrame;	// 0x3028ac45
- (void)invokeActionSelectionHandler;	// 0x3028b705
- (void)layoutSubcontrols;	// 0x3028b7dd
// converted property getter: - (id)metadataProvider;	// 0x3028b2a5
// converted property getter: - (id)previewBrowserProvider;	// 0x3028b481
- (void)setActionFocusedIndex:(long)index;	// 0x3028b761
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x3028b519
- (void)setActionSelectionHandler:(id)handler;	// 0x3028b6e5
- (void)setActionStyle:(int)style;	// 0x3028b741
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x3028b509
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x3028ae89
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x3028ad41
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x3028b2b5
- (void)setExpiryText:(id)text;	// 0x3028b491
- (void)setImageProxy:(id)proxy;	// 0x3028ae69
- (void)setMediaType:(id)type;	// 0x3028aa31
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x3028b17d
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x3028b359
- (void)setTextLine:(id)line;	// 0x3028b06d
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x3028af45
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3028b7ad
// converted property getter: - (id)textLineProvider;	// 0x3028b16d
@end
