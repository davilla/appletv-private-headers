/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIView, UIWindow, UISnapshotView;

__attribute__((visibility("hidden")))
@interface UIClientRotationContext : NSObject {
@private
	UIView *_headerView;	// 4 = 0x4
	UIView *_footerView;	// 8 = 0x8
	UIView *_contentView;	// 12 = 0xc
	UIView *_rotatingSnapshotView;	// 16 = 0x10
	UIView *_footerStartSnapshotView;	// 20 = 0x14
	UIView *_footerEndSnapshotView;	// 24 = 0x18
	BOOL _headerWasHidden;	// 28 = 0x1c
	BOOL _footerWasHidden;	// 29 = 0x1d
	BOOL _contentWasHidden;	// 30 = 0x1e
	BOOL _orderKeyboardInAfterRotating;	// 31 = 0x1f
	BOOL _skipFooterRotation;	// 32 = 0x20
	BOOL _skipHeaderRotation;	// 33 = 0x21
	int _fromOrientation;	// 36 = 0x24
	int _toOrientation;	// 40 = 0x28
	float _duration;	// 44 = 0x2c
	UISnapshotView *_headerSnapshotViewStart;	// 48 = 0x30
	UISnapshotView *_footerSnapshotViewStart;	// 52 = 0x34
	UISnapshotView *_contentSnapshotViewStart;	// 56 = 0x38
	float _contentTopAdjustmentStart;	// 60 = 0x3c
	id _rotatingClient;	// 64 = 0x40
	XXStruct_OrggeC _rotationSettings;	// 68 = 0x44
	UIWindow *_window;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x3012423d; @synthesize=_contentView
@property(readonly, assign, nonatomic) float duration;	// G=0x303153c9; @synthesize=_duration
@property(readonly, assign, nonatomic) int fromOrientation;	// G=0x30126f9d; @synthesize=_fromOrientation
@property(readonly, assign, nonatomic) id rotatingClient;	// G=0x3012424d; @synthesize=_rotatingClient
@property(readonly, assign, nonatomic) int toOrientation;	// G=0x303153b9; @synthesize=_toOrientation
- (id)initWithClient:(id)client toOrientation:(int)orientation duration:(float)duration andWindow:(id)window;	// 0x30123ed5
- (BOOL)_isFooterTranslucent;	// 0x303153d9
- (BOOL)_isHeaderTranslucent;	// 0x30315445
- (void)_positionHeaderView:(id)view andFooterView:(id)view2 outsideContentViewForInterfaceOrientation:(int)interfaceOrientation;	// 0x30315a81
- (void)_slideFooterWithStartSnapshot:(id)startSnapshot endSnapshot:(id)snapshot duration:(double)duration;	// 0x303170b9
- (void)_slideHeaderView:(id)view andFooterView:(id)view2 offScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;	// 0x30315545
// declared property getter: - (id)contentView;	// 0x3012423d
- (void)dealloc;	// 0x301272bd
// declared property getter: - (float)duration;	// 0x303153c9
- (void)finishFirstHalfRotation;	// 0x303156d5
- (void)finishFullRotateUsingOnePartAnimation:(BOOL)animation;	// 0x30126e99
// declared property getter: - (int)fromOrientation;	// 0x30126f9d
- (void)rotateSnapshots;	// 0x3031627d
// declared property getter: - (id)rotatingClient;	// 0x3012424d
- (void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)afterRotation;	// 0x30316689
- (void)slideHeaderViewAndFooterViewOffScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;	// 0x30315505
// declared property getter: - (int)toOrientation;	// 0x303153b9
@end

