/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIColor;

@interface UISnapshotView : UIView {
@private
	CGSize _contentSize;	// 48 = 0x30
	UIEdgeInsets _contentBeyondBounds;	// 56 = 0x38
	UIEdgeInsets _edgePadding;	// 72 = 0x48
	UIEdgeInsets _edgeInsets;	// 88 = 0x58
	CGPoint _contentOffset;	// 104 = 0x68
	UIColor *_edgePaddingColor;	// 112 = 0x70
	UIView *_imageView;	// 116 = 0x74
	NSMutableArray *_edgePaddingViews;	// 120 = 0x78
	CGRect _snapshotRect;	// 124 = 0x7c
	unsigned _disableEdgeAntialiasing : 1;	// 140 = 0x8c
	unsigned _disableVerticalStretch : 1;	// 140 = 0x8c
}
@property(assign, nonatomic, getter=_contentOffset, setter=_setContentOffset:) CGPoint contentOffset;	// G=0x32fa3e55; S=0x32fa3a9d; @synthesize=_contentOffset
@property(readonly, assign, nonatomic, getter=_contentSize) CGSize contentSize;	// G=0x32fa3e39; @synthesize=_contentSize
@property(assign, nonatomic, getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;	// G=0x32fa3a85; S=0x32df6859; 
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x32fa3e05; S=0x32df68a5; @synthesize=_edgeInsets
@property(assign, nonatomic) UIEdgeInsets edgePadding;	// G=0x32fa3de1; S=0x32fa39f9; @synthesize=_edgePadding
@property(retain, nonatomic) UIColor *edgePaddingColor;	// G=0x32fa3e71; S=0x32fa3e81; @synthesize=_edgePaddingColor
@property(assign, nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) CGRect snapshotRect;	// G=0x32fa3b5d; S=0x32fa3b81; 
@property(readonly, assign, nonatomic, getter=_snapshotView) UIView *snapshotView;	// G=0x32fa3e29; @synthesize=_imageView
@property(assign, nonatomic, getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;	// G=0x32fa3af1; S=0x32fa3b09; 
- (id)initWithFrame:(CGRect)frame;	// 0x32df66d5
- (void)_addEdgePaddingViewInRect:(CGRect)rect;	// 0x32fa3d21
// declared property getter: - (CGPoint)_contentOffset;	// 0x32fa3e55
// declared property getter: - (CGSize)_contentSize;	// 0x32fa3e39
- (CGRect)_contentsCenterForEdgePadding:(UIEdgeInsets)edgePadding withContentSize:(CGSize)contentSize;	// 0x32df7655
- (void)_drawEdges:(UIEdgeInsets)edges withContentSize:(CGSize)contentSize;	// 0x32df8bdd
- (UIEdgeInsets)_edgePadding;	// 0x32df72bd
- (void)_positionImageView;	// 0x32fa3cf1
// declared property setter: - (void)_setContentOffset:(CGPoint)offset;	// 0x32fa3a9d
// declared property setter: - (void)_setSnapshotRect:(CGRect)rect;	// 0x32fa3b81
// declared property getter: - (CGRect)_snapshotRect;	// 0x32fa3b5d
// declared property getter: - (id)_snapshotView;	// 0x32fa3e29
- (void)_updateContentsRect;	// 0x32df78cd
- (void)captureSnapshotOfView:(id)view withSnapshotType:(int)snapshotType;	// 0x32df6931
- (void)captureSnapshotRect:(CGRect)rect fromView:(id)view withSnapshotType:(int)snapshotType;	// 0x32df698d
- (void)dealloc;	// 0x32df9459
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x32fa3e05
// declared property getter: - (UIEdgeInsets)edgePadding;	// 0x32fa3de1
// declared property getter: - (id)edgePaddingColor;	// 0x32fa3e71
// declared property getter: - (BOOL)isEdgeAntialiasingEnabled;	// 0x32fa3a85
// declared property getter: - (BOOL)isVerticalStretchEnabled;	// 0x32fa3af1
- (void)layoutSubviews;	// 0x32df76a5
- (void)setBounds:(CGRect)bounds;	// 0x32fa3bbd
- (void)setContentStretch:(CGRect)stretch;	// 0x32fa3c85
// declared property setter: - (void)setEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x32df6859
// declared property setter: - (void)setEdgeInsets:(UIEdgeInsets)insets;	// 0x32df68a5
// declared property setter: - (void)setEdgePadding:(UIEdgeInsets)padding;	// 0x32fa39f9
// declared property setter: - (void)setEdgePaddingColor:(id)color;	// 0x32fa3e81
- (void)setFrame:(CGRect)frame;	// 0x32df6791
// declared property setter: - (void)setVerticalStretchEnabled:(BOOL)enabled;	// 0x32fa3b09
@end
