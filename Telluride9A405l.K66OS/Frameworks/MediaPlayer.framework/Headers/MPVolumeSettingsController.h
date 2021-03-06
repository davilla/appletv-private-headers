/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UITwoSidedAlertControllerDelegate.h"
#import <UITwoSidedAlertController.h> // Unknown library

@class NSString;

@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate> {
	NSString *_audioCategory;	// 20 = 0x14
}
- (id)initWithAudioCategory:(id)audioCategory;	// 0x33bf39c5
- (void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;	// 0x33bf3c35
- (id)createBackAlert;	// 0x33bf3bc1
- (id)createFrontAlert;	// 0x33bf3a79
- (void)dealloc;	// 0x33bf3a2d
- (void)twoSidedAlertControllerDidDismiss:(id)twoSidedAlertController;	// 0x33bf3bf9
@end

