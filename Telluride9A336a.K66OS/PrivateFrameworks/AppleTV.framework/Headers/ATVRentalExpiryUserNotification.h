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
+ (void)postExpiryNotificationForAsset:(id)asset;	// 0x3398f195
- (id)init;	// 0x3398f22d
- (void)_playAsset;	// 0x3398facd
- (void)_setAsset:(id)asset;	// 0x3398f80d
- (BOOL)brEventAction:(id)action;	// 0x3398f58d
- (void)dealloc;	// 0x3398f52d
- (void)layoutSubcontrols;	// 0x3398f641
@end

