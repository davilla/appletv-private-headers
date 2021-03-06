/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <UIScrollView.h> // Unknown library

@protocol QLDelayedScrollViewDelegate;

@interface QLDelayedScrollView : UIScrollView {
	id<QLDelayedScrollViewDelegate> _delayedScrollViewDelegate;	// 464 = 0x1d0
	CGRect _newFrame;	// 468 = 0x1d4
	CGRect _newBounds;	// 484 = 0x1e4
	BOOL _isRotating;	// 500 = 0x1f4
	CGRect _oldScrollerBounds;	// 504 = 0x1f8
	CGRect _rotationRect;	// 520 = 0x208
	unsigned _rotationEdgePin;	// 536 = 0x218
	float _oldWidth;	// 540 = 0x21c
}
- (void)_centerRotationRectWithWebViewToScale:(id)scale;	// 0x32c5feb5
- (void)_redrawWebView:(id)view withOldWidth:(float)oldWidth andNewSize:(CGSize)size enablingTileDrawing:(BOOL)drawing;	// 0x32c60189
- (void)_setIsRotating:(BOOL)rotating;	// 0x32c6043d
- (void)didRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x32c60239
- (void)layoutSubviews;	// 0x32c60345
- (void)setDelayedScrollViewDelegate:(id)delegate;	// 0x32c6042d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32c60065
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32c5fd79
@end

