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
@interface RUIRetailControl : BRControl {
	BRMediaPlayer *_player;	// 80 = 0x50
	BOOL _playbackStarted;	// 84 = 0x54
}
- (id)initWithMediaURL:(id)mediaURL;	// 0x37cfd1
- (void).cxx_destruct;	// 0x37d4bd
- (void)_movieCued:(id)cued;	// 0x37d559
- (void)_playerVisualsChanged:(id)changed;	// 0x37d549
- (void)_updateVisuals;	// 0x37d4d1
- (void)controlWasActivated;	// 0x37d1f5
- (void)controlWasDeactivated;	// 0x37d341
- (void)dealloc;	// 0x37d189
- (void)layoutSubcontrols;	// 0x37d3b9
@end
