/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSHeaderFooterView.h"
#import <UIView.h> // Unknown library

@class UILabel;

@interface RegionFormatSampleView : UIView <PSHeaderFooterView> {
	UILabel *_labels[4];	// 84 = 0x54
	float _sized;	// 100 = 0x64
}
- (id)initWithSpecifier:(id)specifier;	// 0x31d8e701
- (id)_accessibilityLabels;	// 0x31d8ecb5
- (void)dealloc;	// 0x31d8eab5
- (id)generateRegionSampleLabel;	// 0x31d8e4d1
- (void)layoutSubviews;	// 0x31d8eb1d
- (float)preferredHeightForWidth:(float)width;	// 0x31d8e8e1
- (void)setTextForRegionExample:(id)regionExample;	// 0x31d8e641
@end

