/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class ATVThunderGameCourtView, ATVThunderLineScoreView;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewControl : BRControl {
	ATVThunderLineScoreView *_lineScore;	// 80 = 0x50
	ATVThunderGameCourtView *_gameCourt;	// 84 = 0x54
}
- (id)initWithDictionary:(id)dictionary;	// 0x22e5c5
- (id)accessibilityLabel;	// 0x22e85d
- (void)dealloc;	// 0x22e6c9
- (void)layoutSubcontrols;	// 0x22e72d
@end

