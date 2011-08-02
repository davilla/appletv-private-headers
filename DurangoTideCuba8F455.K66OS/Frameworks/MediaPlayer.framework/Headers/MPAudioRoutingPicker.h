/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIAlertView.h> // Unknown library

@class MPAudioDeviceController, NSArray;

@interface MPAudioRoutingPicker : UIAlertView {
	MPAudioDeviceController *_audioDeviceController;	// 148 = 0x94
	BOOL _ignoringInteractionEvents;	// 152 = 0x98
	NSArray *_routes;	// 156 = 0x9c
}
- (id)initWithAVController:(id)avcontroller;	// 0x33622ca1
- (BOOL)_pickRouteAtIndex:(unsigned)index withPassword:(id)password;	// 0x336227cd
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x33622bd5
- (void)dealloc;	// 0x33622c25
- (BOOL)requiresPortraitOrientation;	// 0x336227c9
- (void)setAVController:(id)controller;	// 0x33622c81
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33622a85
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33623211
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33622b59
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x33622a45
- (void)willMoveToSuperview:(id)superview;	// 0x33622991
@end

