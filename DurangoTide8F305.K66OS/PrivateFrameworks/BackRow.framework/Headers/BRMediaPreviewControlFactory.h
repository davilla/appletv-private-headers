/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"

@class BRMediaType;

@interface BRMediaPreviewControlFactory : NSObject <BRControlFactory> {
@private
	BRMediaType *_missingType;	// 4 = 0x4
	BOOL _deletterboxArtwork;	// 8 = 0x8
	BOOL _shouldShowMetadata;	// 9 = 0x9
	BOOL _showMetadataImmediately;	// 10 = 0xa
}
@property(retain) BRMediaType *missingType;	// G=0x3295daf5; S=0x3295dd7d; converted property
@property(assign) BOOL previewShouldShowMetadata;	// G=0x3295db15; S=0x3295db05; converted property
@property(assign) BOOL previewShouldShowMetadataImmediately;	// G=0x3295db35; S=0x3295db25; converted property
@property(assign) BOOL shouldDeletterboxArtwork;	// G=0x3295db55; S=0x3295db45; converted property
+ (id)factory;	// 0x3295df2d
- (id)init;	// 0x3295dec5
- (id)_coverArtControllerForAssets:(id)assets;	// 0x3295dc7d
- (id)_filterProxies:(id)proxies;	// 0x3295df6d
- (id)_metadataControllerForAsset:(id)asset;	// 0x3295dbf1
- (id)_paradeControllerForAssets:(id)assets;	// 0x3295db65
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3295e549
- (void)dealloc;	// 0x3295de7d
// converted property getter: - (id)missingType;	// 0x3295daf5
- (id)previewControlForAsset:(id)asset;	// 0x3295de41
- (id)previewControlForAssets:(id)assets;	// 0x3295e155
- (id)previewControlForImageProxies:(id)imageProxies;	// 0x3295e3fd
- (id)previewControlForImageProxy:(id)imageProxy;	// 0x3295ddb5
// converted property getter: - (BOOL)previewShouldShowMetadata;	// 0x3295db15
// converted property getter: - (BOOL)previewShouldShowMetadataImmediately;	// 0x3295db35
// converted property setter: - (void)setMissingType:(id)type;	// 0x3295dd7d
// converted property setter: - (void)setPreviewShouldShowMetadata:(BOOL)showMetadata;	// 0x3295db05
// converted property setter: - (void)setPreviewShouldShowMetadataImmediately:(BOOL)showMetadataImmediately;	// 0x3295db25
// converted property setter: - (void)setShouldDeletterboxArtwork:(BOOL)deletterboxArtwork;	// 0x3295db45
// converted property getter: - (BOOL)shouldDeletterboxArtwork;	// 0x3295db55
@end

