/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UINavigationBar.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPCenteringNavigationBar : UINavigationBar {
	BOOL _backgroundHidden;	// 93 = 0x5d
}
@property(assign, nonatomic) BOOL backgroundHidden;	// G=0x31d95259; S=0x31d95269; @synthesize=_backgroundHidden
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views;	// 0x31d976cd
- (void)addSubview:(id)subview;	// 0x31d966b9
// declared property getter: - (BOOL)backgroundHidden;	// 0x31d95259
- (void)drawBackgroundInRect:(CGRect)rect withStyle:(int)style;	// 0x31d96709
// declared property setter: - (void)setBackgroundHidden:(BOOL)hidden;	// 0x31d95269
@end
