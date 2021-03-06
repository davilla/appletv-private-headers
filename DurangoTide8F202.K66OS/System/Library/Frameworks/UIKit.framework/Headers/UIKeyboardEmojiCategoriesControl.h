/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSMutableArray, UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoriesControl : UIControl {
@private
	int _selected;	// 68 = 0x44
	int _total;	// 72 = 0x48
	UIImage *_darkDivider;	// 76 = 0x4c
	UIImage *_plainDivider;	// 80 = 0x50
	UIImage *_selectedDivider;	// 84 = 0x54
	NSMutableArray *_segmentViews;	// 88 = 0x58
	NSMutableArray *_dividerViews;	// 92 = 0x5c
}
@property(readonly, assign) int numSegments;	// G=0x307aea89; @dynamic
@property(assign) int selectedIndex;	// G=0x307aea79; S=0x307aedc9; @dynamic
+ (id)categoryControl;	// 0x307aee41
- (id)initWithFrame:(CGRect)frame;	// 0x307aef19
- (void)dealloc;	// 0x307aee05
// declared property getter: - (int)numSegments;	// 0x307aea89
// declared property getter: - (int)selectedIndex;	// 0x307aea79
- (void)setFrame:(CGRect)frame;	// 0x307af2b9
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x307aedc9
@end

