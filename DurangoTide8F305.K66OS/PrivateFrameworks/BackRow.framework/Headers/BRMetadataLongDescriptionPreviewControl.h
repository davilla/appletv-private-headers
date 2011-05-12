/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRCoverArtImageLayer, BRReflectionControl, NSTimer, BRMetadataLongDescriptionControl;
@protocol BRMetadataProvider;

@interface BRMetadataLongDescriptionPreviewControl : BRControl {
@private
	id _asset;	// 44 = 0x2c
	id<BRMetadataProvider> _metadataProvider;	// 48 = 0x30
	BRControl *_coverArtWrapper;	// 52 = 0x34
	BRCoverArtImageLayer *_coverArtLayer;	// 56 = 0x38
	BRReflectionControl *_reflectionLayer;	// 60 = 0x3c
	BRMetadataLongDescriptionControl *_metadataLayer;	// 64 = 0x40
	NSTimer *_timer;	// 68 = 0x44
	BOOL _showsMetadataImmediately;	// 72 = 0x48
	BOOL _showingMetadata;	// 73 = 0x49
}
@property(retain) id asset;	// G=0x32a11f8d; S=0x32a1299d; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x32a122a1; S=0x32a122c5; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x32a12259; S=0x32a1227d; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x32a11f9d; S=0x32a122e9; converted property
- (id)init;	// 0x32a12491
- (void)_coverArtChanged:(id)changed;	// 0x32a120a5
- (void)_downloadStateChanged:(id)changed;	// 0x32a12049
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x32a12cb1
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x32a11fbd
- (void)_metadataTimerFired:(id)fired;	// 0x32a12081
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x32a11fd5
- (void)_showMetadataAfterDelay;	// 0x32a120f9
- (void)_updateMetadataLayer;	// 0x32a12b69
- (id)accessibilityLabel;	// 0x32a12181
- (id)accessibilityScreenContent;	// 0x32a12029
// converted property getter: - (id)asset;	// 0x32a11f8d
- (void)controlWasActivated;	// 0x32a1221d
- (void)controlWasDeactivated;	// 0x32a121cd
- (void)dealloc;	// 0x32a123c5
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x32a122a1
- (void)layoutSubcontrols;	// 0x32a12725
- (id)metadataControl;	// 0x32a11fad
// converted property setter: - (void)setAsset:(id)asset;	// 0x32a1299d
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x32a122c5
- (void)setImageProxy:(id)proxy;	// 0x32a12371
- (void)setMetadataProvider:(id)provider;	// 0x32a12311
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x32a1227d
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x32a122e9
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x32a12259
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x32a11f9d
@end

