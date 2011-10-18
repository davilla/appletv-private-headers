/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UILabel;

@interface MPClosedCaptionDisplay : UIView {
	UILabel *_label;	// 48 = 0x30
	UIView *_backgroundView;	// 52 = 0x34
	BOOL _hidden;	// 56 = 0x38
	BOOL _rotating;	// 57 = 0x39
}
- (id)initWithFrame:(CGRect)frame;	// 0x30184211
- (void)_hidePanel;	// 0x301844cd
- (void)_updatePositioning:(BOOL)positioning;	// 0x3018472d
- (void)endLayoutChange;	// 0x30184699
- (void)setNeedsLayout;	// 0x301846d9
- (void)setText:(id)text;	// 0x30184a59
- (void)startLayoutChange:(BOOL)change;	// 0x3018454d
@end

