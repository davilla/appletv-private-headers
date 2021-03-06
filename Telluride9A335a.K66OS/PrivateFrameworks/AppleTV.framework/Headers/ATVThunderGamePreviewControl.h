/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class ATVThunderLineScoreView, ATVThunderGameCourtView;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewControl : BRControl {
@private
	ATVThunderLineScoreView *_lineScore;	// 48 = 0x30
	ATVThunderGameCourtView *_gameCourt;	// 52 = 0x34
}
- (id)initWithDictionary:(id)dictionary;	// 0x34147195
- (id)accessibilityLabel;	// 0x34147469
- (void)dealloc;	// 0x3414729d
- (void)layoutSubcontrols;	// 0x341472fd
@end

