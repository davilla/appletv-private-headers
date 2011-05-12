/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIRoundedCornerView;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding> {
@private
	id _delegate;	// 44 = 0x2c
	BOOL _usesRoundedCorners;	// 48 = 0x30
	float _cornerRadius;	// 52 = 0x34
	BOOL _fastMode;	// 56 = 0x38
	UIRoundedCornerView *_roundedCornerView;	// 60 = 0x3c
	BOOL _usesInnerShadow;	// 64 = 0x40
	BOOL _shadowViewsInstalled;	// 65 = 0x41
	UIView *_shadowView;	// 68 = 0x44
}
@property(assign, nonatomic) id delegate;	// G=0x31fb8b69; S=0x31fab299; 
@property(assign, nonatomic) BOOL useFastMode;	// G=0x3216ed6d; S=0x3216ee0d; @synthesize=_fastMode
@property(assign, nonatomic) BOOL usesInnerShadow;	// G=0x3216ed5d; S=0x3216ee41; @synthesize=_usesInnerShadow
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x3216ed7d; S=0x3216ee91; @synthesize=_usesRoundedCorners
- (id)initWithCoder:(id)coder;	// 0x3216efe5
- (void)_beginFastMode;	// 0x3216f03d
- (void)_endFastMode;	// 0x3216ed8d
- (void)_installShadowViews;	// 0x3216f1f1
- (void)_tearDownShadowViews;	// 0x31ff46e5
- (void)addSubview:(id)subview;	// 0x31fad6e1
- (void)dealloc;	// 0x31ff468d
// declared property getter: - (id)delegate;	// 0x31fb8b69
- (void)encodeWithCoder:(id)coder;	// 0x3216ef91
- (void)layoutSubviews;	// 0x31fb8a99
- (void)setBounds:(CGRect)bounds;	// 0x32021a19
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31fab299
- (void)setFrame:(CGRect)frame;	// 0x31fab1f9
// declared property setter: - (void)setUseFastMode:(BOOL)mode;	// 0x3216ee0d
// declared property setter: - (void)setUsesInnerShadow:(BOOL)shadow;	// 0x3216ee41
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x3216ee91
// declared property getter: - (BOOL)useFastMode;	// 0x3216ed6d
// declared property getter: - (BOOL)usesInnerShadow;	// 0x3216ed5d
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x3216ed7d
@end

