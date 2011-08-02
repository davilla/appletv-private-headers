/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRMetadataControl, NSTimer, BRCoverArtImageLayer;
@protocol BRMetadataProvider;

@interface BRMetadataPreviewControl : BRControl {
@private
	id _asset;	// 44 = 0x2c
	id<BRMetadataProvider> _metadataProvider;	// 48 = 0x30
	BRControl *_coverArtWrapper;	// 52 = 0x34
	BRCoverArtImageLayer *_coverArtLayer;	// 56 = 0x38
	BRReflectionControl *_reflectionLayer;	// 60 = 0x3c
	BRMetadataControl *_metadataLayer;	// 64 = 0x40
	NSTimer *_timer;	// 68 = 0x44
	BOOL _showsMetadataImmediately;	// 72 = 0x48
	BOOL _showingMetadata;	// 73 = 0x49
}
@property(retain) id asset;	// G=0x32f95855; S=0x32f39d6d; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x32f959a5; S=0x32f959c9; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x32f9595d; S=0x32f95981; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x32f3a28d; S=0x32f3d41d; converted property
- (id)init;	// 0x32f39aa1
- (void)_coverArtChanged:(id)changed;	// 0x32f3d529
- (void)_downloadStateChanged:(id)changed;	// 0x32f958c9
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x32f963b9
- (CGRect)_frameForArt:(id)art withMetadataFrame:(CGRect)metadataFrame inBounds:(CGSize)bounds;	// 0x32f960c5
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x32f95a41
- (void)_metadataTimerFired:(id)fired;	// 0x32f3a8f5
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x32f95875
- (void)_showMetadataAfterDelay;	// 0x32f3a205
- (void)_updateMetadataLayer;	// 0x32f3a919
- (id)accessibilityLabel;	// 0x32f95901
// converted property getter: - (id)asset;	// 0x32f95855
- (void)controlWasActivated;	// 0x32f95921
- (void)controlWasDeactivated;	// 0x32f3a491
- (void)dealloc;	// 0x32f3a4e1
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x32f959a5
- (void)layoutSubcontrols;	// 0x32f95add
- (id)metadataControl;	// 0x32f95865
// converted property setter: - (void)setAsset:(id)asset;	// 0x32f39d6d
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x32f959c9
- (void)setImageProxy:(id)proxy;	// 0x32f959ed
- (void)setMetadataProvider:(id)provider;	// 0x32f3d3bd
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x32f95981
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x32f3d41d
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x32f9595d
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x32f3a28d
@end

