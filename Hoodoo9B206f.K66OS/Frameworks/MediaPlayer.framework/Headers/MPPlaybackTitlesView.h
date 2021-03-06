/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIControl.h> // Unknown library

@class NSArray, UIView;

@interface MPPlaybackTitlesView : UIControl {
	UIView *_contentView;	// 72 = 0x48
	NSArray *_labels;	// 76 = 0x4c
	NSArray *_titles;	// 80 = 0x50
	BOOL _showingLoadingUI;	// 84 = 0x54
	unsigned _marqueeScrollableIndex;	// 88 = 0x58
	BOOL _marqueeScrollingActive;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x303b79d1; 
@property(assign, nonatomic) unsigned marqueeScrollableIndex;	// G=0x303b8a45; S=0x303b7a2d; @synthesize=_marqueeScrollableIndex
@property(assign, nonatomic) BOOL marqueeScrollingActive;	// G=0x303b8a55; S=0x303b79e1; @synthesize=_marqueeScrollingActive
@property(assign, nonatomic) BOOL showingLoadingUI;	// G=0x303b8a35; S=0x303b7b4d; @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray *titles;	// G=0x303b8a25; S=0x303b7ae5; @synthesize=_titles
- (id)init;	// 0x303b7421
- (id)initWithFrame:(CGRect)frame;	// 0x303b75a5
- (id)_addLabel:(unsigned)label;	// 0x303b7d1d
- (id)_addLoadingLabel;	// 0x303b7b9d
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x303b7b7d
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x303b7b8d
- (void)_layoutLabels;	// 0x303b82e5
- (void)_layoutLoadingUI;	// 0x303b7f75
- (void)_tearDownLabels;	// 0x303b8989
- (void)_updateLabelMarqueeScrolling;	// 0x303b8861
// declared property getter: - (id)contentView;	// 0x303b79d1
- (void)dealloc;	// 0x303b7769
- (void)layoutSubviews;	// 0x303b7849
// declared property getter: - (unsigned)marqueeScrollableIndex;	// 0x303b8a45
// declared property getter: - (BOOL)marqueeScrollingActive;	// 0x303b8a55
// declared property setter: - (void)setMarqueeScrollableIndex:(unsigned)index;	// 0x303b7a2d
// declared property setter: - (void)setMarqueeScrollingActive:(BOOL)active;	// 0x303b79e1
// declared property setter: - (void)setShowingLoadingUI:(BOOL)ui;	// 0x303b7b4d
// declared property setter: - (void)setTitles:(id)titles;	// 0x303b7ae5
// declared property getter: - (BOOL)showingLoadingUI;	// 0x303b8a35
// declared property getter: - (id)titles;	// 0x303b8a25
@end

