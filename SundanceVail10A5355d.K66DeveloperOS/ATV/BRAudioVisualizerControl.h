/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRAudioVisualizerControl : BRControl {
	BRMediaPlayer *_player;	// 80 = 0x50
}
@property(assign, nonatomic) BRMediaPlayer *player;	// G=0x358281; S=0x358269; @synthesize=_player
- (BOOL)displayTrackPopup;	// 0x358279
// declared property getter: - (id)player;	// 0x358281
// declared property setter: - (void)setPlayer:(id)player;	// 0x358269
- (BOOL)shouldUseMusicContextMenu;	// 0x35827d
@end

