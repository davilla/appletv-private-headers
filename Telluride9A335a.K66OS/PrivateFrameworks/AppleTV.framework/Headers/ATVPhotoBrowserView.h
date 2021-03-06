/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRPhotoBrowserHeaderControl, BRPhotoBrowserCorkBoardControl, BRScrollControl, BRGridView, BRCursorControl, BRPhotoBrowserBannerButton, BRPanelControl;

@interface ATVPhotoBrowserView : BRControl {
@private
	int _style;	// 48 = 0x30
	BRPhotoBrowserHeaderControl *headerView;	// 52 = 0x34
	BRPhotoBrowserBannerButton *slideshowButton;	// 56 = 0x38
	BRPhotoBrowserBannerButton *settingsButton;	// 60 = 0x3c
	BRGridView *gridView;	// 64 = 0x40
	BRPanelControl *_bannerPanelControl;	// 68 = 0x44
	BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// 72 = 0x48
	BRScrollControl *_scrollControl;	// 76 = 0x4c
	BRCursorControl *_cursorControl;	// 80 = 0x50
}
@property(retain, nonatomic) BRPanelControl *_bannerPanelControl;	// G=0x342e3de1; S=0x342e3df1; @synthesize
@property(retain, nonatomic) BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// G=0x342e3e15; S=0x342e3e25; @synthesize
@property(retain, nonatomic) BRCursorControl *_cursorControl;	// G=0x342e3e7d; S=0x342e3e8d; @synthesize
@property(retain, nonatomic) BRScrollControl *_scrollControl;	// G=0x342e3e49; S=0x342e3e59; @synthesize
@property(readonly, assign, nonatomic) BRGridView *gridView;	// G=0x342e3dd1; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserHeaderControl *headerView;	// G=0x342e3da1; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *settingsButton;	// G=0x342e3dc1; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *slideshowButton;	// G=0x342e3db1; @synthesize
+ (id)photoBrowserViewWithStyle:(int)style;	// 0x342e3971
- (id)initWithStyle:(int)style;	// 0x342e39b9
// declared property getter: - (id)_bannerPanelControl;	// 0x342e3de1
// declared property getter: - (id)_corkBoardControl;	// 0x342e3e15
// declared property getter: - (id)_cursorControl;	// 0x342e3e7d
- (id)_iconWithName:(id)name;	// 0x342e46b1
// declared property getter: - (id)_scrollControl;	// 0x342e3e49
- (void)_setupControls;	// 0x342e3eb1
- (void)dealloc;	// 0x342e3a0d
- (void)focusControlAtIndex:(long)index;	// 0x342e3cbd
// declared property getter: - (id)gridView;	// 0x342e3dd1
// declared property getter: - (id)headerView;	// 0x342e3da1
- (void)layoutSubcontrols;	// 0x342e3ac1
// declared property setter: - (void)set_bannerPanelControl:(id)control;	// 0x342e3df1
// declared property setter: - (void)set_corkBoardControl:(id)control;	// 0x342e3e25
// declared property setter: - (void)set_cursorControl:(id)control;	// 0x342e3e8d
// declared property setter: - (void)set_scrollControl:(id)control;	// 0x342e3e59
// declared property getter: - (id)settingsButton;	// 0x342e3dc1
// declared property getter: - (id)slideshowButton;	// 0x342e3db1
@end

