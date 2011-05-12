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
- (id)_dataNetworkImageForStyle:(int)style;	// 0x31fa7eb5
- (id)_stringForRSSI;	// 0x3220a8dd
- (id)contentsImageForStyle:(int)style;	// 0x31fa7df9
- (float)extraLeftPadding;	// 0x31f8d06d
- (float)maximumOverlap;	// 0x3220a9cd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3220a915
- (BOOL)updateForNewData:(XXStruct_LyCp7D *)newData actions:(int)actions;	// 0x31f8bc05
@end

