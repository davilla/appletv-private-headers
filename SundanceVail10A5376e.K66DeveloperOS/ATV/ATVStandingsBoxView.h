/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRTextControl, BRReflectionControl, BRImage, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVStandingsBoxView : BRControl {
	BRImage *_backgroundImage;	// 84 = 0x54
	BRTextControl *_titleControl;	// 88 = 0x58
	BRImage *_overlayImage;	// 92 = 0x5c
	BRReflectionControl *_reflectionControl;	// 96 = 0x60
	BRTableView *_tableView;	// 100 = 0x64
	float _headerHeight;	// 104 = 0x68
}
@property(retain, nonatomic) BRImage *backgroundImage;	// G=0x10b051; S=0x10b061; 
@property(assign, nonatomic) float headerHeight;	// G=0x10b499; S=0x10b4a9; @synthesize=_headerHeight
@property(readonly, assign, nonatomic) BRTableView *tableView;	// G=0x10b4b9; @synthesize=_tableView
@property(copy, nonatomic) NSString *title;	// G=0x10affd; S=0x10afb1; 
- (id)init;	// 0x10adbd
- (id)accessibilityLabel;	// 0x10b451
// declared property getter: - (id)backgroundImage;	// 0x10b051
- (void)dealloc;	// 0x10af11
- (void)drawRect:(CGRect)rect;	// 0x10b0fd
// declared property getter: - (float)headerHeight;	// 0x10b499
- (BOOL)isAccessibilityElement;	// 0x10b44d
- (void)layoutSubcontrols;	// 0x10b1f5
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x10b061
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x10b4a9
// declared property setter: - (void)setTitle:(id)title;	// 0x10afb1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x10b035
// declared property getter: - (id)tableView;	// 0x10b4b9
// declared property getter: - (id)title;	// 0x10affd
@end

