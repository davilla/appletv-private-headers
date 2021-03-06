/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRReflectionControl, BRMetadataControl, BRCoverArtImageLayer, NSTimer;
@protocol BRMetadataProvider;

__attribute__((visibility("hidden")))
@interface BRMetadataPreviewControl : BRControl {
	id _asset;	// 80 = 0x50
	id<BRMetadataProvider> _metadataProvider;	// 84 = 0x54
	BRControl *_coverArtWrapper;	// 88 = 0x58
	BRCoverArtImageLayer *_coverArtLayer;	// 92 = 0x5c
	BRReflectionControl *_reflectionLayer;	// 96 = 0x60
	BRMetadataControl *_metadataLayer;	// 100 = 0x64
	NSTimer *_timer;	// 104 = 0x68
	BOOL _showsMetadataImmediately;	// 108 = 0x6c
	BOOL _showingMetadata;	// 109 = 0x6d
}
@property(retain) id asset;	// G=0x30ed2d; S=0x30eb6d; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x30ed99; S=0x30ed79; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x30eddd; S=0x30edbd; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x30ed69; S=0x30ed3d; converted property
- (id)init;	// 0x30dfc1
- (void)_coverArtChanged:(id)changed;	// 0x30f2d5
- (void)_downloadStateChanged:(id)changed;	// 0x30f351
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x30f395
- (CGRect)_frameForArt:(id)art withMetadataFrame:(CGRect)metadataFrame inBounds:(CGSize)bounds;	// 0x30f4b9
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x30f7d5
- (void)_metadataTimerFired:(id)fired;	// 0x30f331
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x30f885
- (void)_showMetadataAfterDelay;	// 0x30eec5
- (void)_updateMetadataLayer;	// 0x30ef61
- (id)accessibilityLabel;	// 0x30eea5
// converted property getter: - (id)asset;	// 0x30ed2d
- (void)controlWasActivated;	// 0x30ee11
- (void)controlWasDeactivated;	// 0x30ee51
- (void)dealloc;	// 0x30e1e9
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x30ed99
- (void)layoutSubcontrols;	// 0x30e2c9
- (id)metadataControl;	// 0x30ee01
// converted property setter: - (void)setAsset:(id)asset;	// 0x30eb6d
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x30ed79
- (void)setImageProxy:(id)proxy;	// 0x30eaa1
- (void)setMetadataProvider:(id)provider;	// 0x30eb01
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x30edbd
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x30ed3d
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x30eddd
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x30ed69
@end

