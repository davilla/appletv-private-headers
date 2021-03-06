/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRTransportControl, BRWaitSpinnerControl, BRDescriptionOverlayControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerWaitControl : BRControl {
	id<BRMediaAsset> _asset;	// 84 = 0x54
	BRDescriptionOverlayControl *_descriptionControl;	// 88 = 0x58
	BRTextControl *_loadingControl;	// 92 = 0x5c
	BRWaitSpinnerControl *_loadingSpinner;	// 96 = 0x60
	BRTextControl *_readyToPlayInNMinsControl;	// 100 = 0x64
	BRWaitSpinnerControl *_readyToPlayInNMinsSpinner;	// 104 = 0x68
	BRTextControl *_bandwidthHintControl;	// 108 = 0x6c
	BRTextControl *_readyToPlayControl;	// 112 = 0x70
	BRTextControl *_authorizingControl;	// 116 = 0x74
	BRWaitSpinnerControl *_authorizingSpinner;	// 120 = 0x78
	BRTransportControl *_transport;	// 124 = 0x7c
}
- (id)initWithAsset:(id)asset;	// 0x2a381d
- (void)_addFadeAnimationToControl:(id)control;	// 0x2a4955
- (void)dealloc;	// 0x2a3d0d
- (void)layoutSubcontrols;	// 0x2a4429
- (void)setAuthorizing;	// 0x2a4369
- (void)setBandwidthHintForPreview:(BOOL)preview;	// 0x2a3e25
- (void)setReadyForPlayInNMins:(int)nmins;	// 0x2a4025
- (void)setReadyToPlay;	// 0x2a42c1
@end

