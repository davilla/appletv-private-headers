/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRProgressBarWidget, NSString;

@interface BRSyncProgressControl : BRControl {
@private
	BRProgressBarWidget *_progressBar;	// 48 = 0x30
	BRTextControl *_sourceText;	// 52 = 0x34
	BRTextControl *_currentAssetText;	// 56 = 0x38
	NSString *_currentAssetTextFormat;	// 60 = 0x3c
	unsigned _numAssets;	// 64 = 0x40
}
- (id)initWithSourceName:(id)sourceName notification:(id)notification;	// 0x34213dc9
- (void)_updateProgress:(id)progress;	// 0x34214621
- (void)dealloc;	// 0x342141b9
- (void)layoutSubcontrols;	// 0x34214391
- (void)setCurrentAssetName:(id)name num:(unsigned)num;	// 0x34214271
- (void)setPercentage:(float)percentage;	// 0x34214371
@end

