/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class NSString, UIImageView, UILabel;

@interface MPVideoDestinationBackgroundView : UIView {
@private
	NSString *_destinationName;	// 84 = 0x54
	UILabel *_destinationSubtitleLabel;	// 88 = 0x58
	UILabel *_destinationTitleLabel;	// 92 = 0x5c
	int _style;	// 96 = 0x60
	UIImageView *_videosImageView;	// 100 = 0x64
}
@property(copy, nonatomic) NSString *destinationName;	// G=0x34852341; S=0x3485181d; @synthesize=_destinationName
@property(assign, nonatomic) int style;	// G=0x34852331; S=0x34851889; @synthesize=_style
- (id)initWithFrame:(CGRect)frame;	// 0x34851725
- (void)dealloc;	// 0x34851791
// declared property getter: - (id)destinationName;	// 0x34852341
- (void)layoutSubviews;	// 0x348518b1
// declared property setter: - (void)setDestinationName:(id)name;	// 0x3485181d
- (void)setFrame:(CGRect)frame;	// 0x348522e9
// declared property setter: - (void)setStyle:(int)style;	// 0x34851889
// declared property getter: - (int)style;	// 0x34852331
@end

