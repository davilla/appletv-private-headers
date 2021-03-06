/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"


__attribute__((visibility("hidden")))
@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
@private
	int _dataNetworkType;	// 72 = 0x48
	int _wifiStrengthRaw;	// 76 = 0x4c
	int _wifiStrengthBars;	// 80 = 0x50
	BOOL _enableRSSI;	// 84 = 0x54
	BOOL _showRSSI;	// 85 = 0x55
}
- (id)_dataNetworkImageForStyle:(int)style;	// 0x300aaeb5
- (id)_stringForRSSI;	// 0x3030d8dd
- (id)contentsImageForStyle:(int)style;	// 0x300aadf9
- (float)extraLeftPadding;	// 0x3009006d
- (float)maximumOverlap;	// 0x3030d9cd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3030d915
- (BOOL)updateForNewData:(XXStruct_LyCp7D *)newData actions:(int)actions;	// 0x3008ec05
@end

