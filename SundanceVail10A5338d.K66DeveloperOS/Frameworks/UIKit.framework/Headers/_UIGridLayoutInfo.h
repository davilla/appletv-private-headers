/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGridLayoutInfo : NSObject {
	NSMutableArray *_sections;	// 4 = 0x4
	BOOL _useFloatingHeaderFooter;	// 8 = 0x8
	BOOL _horizontal;	// 9 = 0x9
	BOOL _leftToRight;	// 10 = 0xa
	CGRect _visibleBounds;	// 12 = 0xc
	CGSize _layoutSize;	// 28 = 0x1c
	float _dimension;	// 36 = 0x24
	BOOL _isValid;	// 40 = 0x28
	NSDictionary *_rowAlignmentOptions;	// 44 = 0x2c
	BOOL _usesFloatingHeaderFooter;	// 48 = 0x30
	CGSize _contentSize;	// 52 = 0x34
}
@property(assign, nonatomic) CGSize contentSize;	// G=0x31033db5; S=0x31033dcd; @synthesize=_contentSize
@property(assign, nonatomic) float dimension;	// G=0x31033d55; S=0x31033d65; @synthesize=_dimension
@property(assign, nonatomic) BOOL horizontal;	// G=0x31033d75; S=0x31033d85; @synthesize=_horizontal
@property(assign, nonatomic) BOOL leftToRight;	// G=0x31033d95; S=0x31033da5; @synthesize=_leftToRight
@property(retain, nonatomic) NSDictionary *rowAlignmentOptions;	// G=0x31033de1; S=0x31033df1; @synthesize=_rowAlignmentOptions
@property(readonly, assign, nonatomic) NSMutableArray *sections;	// G=0x31033d25; @synthesize=_sections
@property(assign, nonatomic) BOOL usesFloatingHeaderFooter;	// G=0x31033d35; S=0x31033d45; @synthesize=_usesFloatingHeaderFooter
- (id)init;	// 0x310336e5
- (id)addSection;	// 0x310337ad
// declared property getter: - (CGSize)contentSize;	// 0x31033db5
- (id)copy;	// 0x31033b11
- (void)dealloc;	// 0x31033831
// declared property getter: - (float)dimension;	// 0x31033d55
- (CGRect)frameForItemAtIndexPath:(id)indexPath;	// 0x31033899
// declared property getter: - (BOOL)horizontal;	// 0x31033d75
- (void)invalidate:(BOOL)invalidate;	// 0x31033775
// declared property getter: - (BOOL)leftToRight;	// 0x31033d95
// declared property getter: - (id)rowAlignmentOptions;	// 0x31033de1
// declared property getter: - (id)sections;	// 0x31033d25
// declared property setter: - (void)setContentSize:(CGSize)size;	// 0x31033dcd
// declared property setter: - (void)setDimension:(float)dimension;	// 0x31033d65
// declared property setter: - (void)setHorizontal:(BOOL)horizontal;	// 0x31033d85
// declared property setter: - (void)setLeftToRight:(BOOL)right;	// 0x31033da5
// declared property setter: - (void)setRowAlignmentOptions:(id)options;	// 0x31033df1
// declared property setter: - (void)setUsesFloatingHeaderFooter:(BOOL)footer;	// 0x31033d45
- (id)snapshot;	// 0x310339a9
// declared property getter: - (BOOL)usesFloatingHeaderFooter;	// 0x31033d35
@end
