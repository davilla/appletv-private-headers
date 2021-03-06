/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRBoxControl, BRMediaShelfView, BRDetailedMediaControl, BRMovieTrailerCollection, BRMovieTrailersProvider;

__attribute__((visibility("hidden")))
@interface ATVMovieTrailersDetailController : BRController {
	BRMovieTrailersProvider *_provider;	// 96 = 0x60
	BRMovieTrailerCollection *_trailer;	// 100 = 0x64
	BRDetailedMediaControl *_detailedControl;	// 104 = 0x68
	BRBoxControl *_relatedBox;	// 108 = 0x6c
	BRMediaShelfView *_relatedShelf;	// 112 = 0x70
}
@property(readonly, retain) BRMovieTrailerCollection *trailer;	// G=0xf79c9; converted property
- (id)initWithProvider:(id)provider trailer:(id)trailer;	// 0xf77dd
- (void)_setActionControl;	// 0xf7d99
- (void)_setCopyrightText;	// 0xf824d
- (void)_setImageProxy;	// 0xf7d0d
- (void)_setMetadataControl;	// 0xf8175
- (void)_setRelatedContent;	// 0xf82d9
- (void)_setupDetailControls;	// 0xf7ca9
- (id)accessibilityScreenContent;	// 0xf8b3d
- (BOOL)brEventAction:(id)action;	// 0xf7b11
- (void)dealloc;	// 0xf7929
- (BOOL)handleSelectionForActionShelf:(id)actionShelf;	// 0xf89c1
- (BOOL)handleSelectionForRelatedShelf:(id)relatedShelf;	// 0xf88a1
- (void)layoutSubcontrols;	// 0xf79d9
// converted property getter: - (id)trailer;	// 0xf79c9
@end

