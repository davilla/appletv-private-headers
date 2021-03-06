/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRReflectedImageControl, BRTextControl;
@protocol BRMediaAsset;

@interface ATVRentalExpiryUserNotification : BRControl {
@private
	BRControl *_dialogBox;	// 48 = 0x30
	BRReflectedImageControl *_imageControl;	// 52 = 0x34
	BRTextControl *_titleControl;	// 56 = 0x38
	id<BRMediaAsset> _asset;	// 60 = 0x3c
}
+ (void)postExpiryNotificationForAsset:(id)asset;	// 0x340eb195
- (id)init;	// 0x340eb22d
- (void)_playAsset;	// 0x340ebacd
- (void)_setAsset:(id)asset;	// 0x340eb80d
- (BOOL)brEventAction:(id)action;	// 0x340eb58d
- (void)dealloc;	// 0x340eb52d
- (void)layoutSubcontrols;	// 0x340eb641
@end

