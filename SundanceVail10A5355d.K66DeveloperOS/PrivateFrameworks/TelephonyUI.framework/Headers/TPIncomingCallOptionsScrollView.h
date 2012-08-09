/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIScrollView.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "TelephonyUI-Structs.h"

@class TPIncomingCallOptionsView, UIView;

@interface TPIncomingCallOptionsScrollView : UIScrollView <UIScrollViewDelegate> {
	TPIncomingCallOptionsView *_optionsView;	// 464 = 0x1d0
	UIView *_offIntoInfinityView;	// 468 = 0x1d4
	BOOL _isDecelerating;	// 472 = 0x1d8
}
@property(retain) TPIncomingCallOptionsView *optionsView;	// G=0x358af6ed; S=0x358af655; 
- (void)dealloc;	// 0x358af5f1
- (void)disableAndScrollToDefaultOffsetSuppressBarChanges:(BOOL)defaultOffsetSuppressBarChanges completion:(id)completion;	// 0x358afad1
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x358aff81
// declared property getter: - (id)optionsView;	// 0x358af6ed
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x358b0045
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x358afef9
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x358afe6d
- (void)scrollViewDidScroll:(id)scrollView;	// 0x358afd59
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x358afe4d
// declared property setter: - (void)setOptionsView:(id)view;	// 0x358af655
- (void)setupAndAddToView:(id)view;	// 0x358af6fd
@end
