/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView {
@private
	UIImageView *_leftImageView;	// 44 = 0x2c
	UIImageView *_middleImageView;	// 48 = 0x30
	UIImageView *_rightImageView;	// 52 = 0x34
	NSArray *_activeImages;	// 56 = 0x38
	NSArray *_inactiveImages;	// 60 = 0x3c
	unsigned _isActive : 1;	// 64 = 0x40
	unsigned _centerHandleEnabled : 1;	// 64 = 0x40
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x307bab39; S=0x307bab4d; 
- (id)initWithFrame:(CGRect)frame;	// 0x307bb365
- (float)_bounceValueForFraction:(float)fraction;	// 0x307bb0f5
- (void)bounce;	// 0x307bad55
- (void)dealloc;	// 0x307bac81
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x307bb6b9
// declared property getter: - (BOOL)isEditing;	// 0x307bab39
- (CGRect)leftHandleBounds;	// 0x307bb20d
- (CGRect)leftHandleFrame;	// 0x307bb199
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x307bb8f9
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x307bb30d
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x307bacdd
- (CGRect)rightHandleBounds;	// 0x307bb2c5
- (CGRect)rightHandleFrame;	// 0x307bb229
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x307bab19
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x307bab4d
@end
