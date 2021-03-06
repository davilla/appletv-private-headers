/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MPAbstractAlternateTracksViewController.h"

@class UITableView;

@interface MPPadAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	UITableView *_tableView;	// 212 = 0xd4
}
- (id)init;	// 0x30165e01
- (id)initWithPlayer:(id)player;	// 0x30165d2d
- (void)dealloc;	// 0x30165e7d
- (void)loadView;	// 0x30165ef5
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x30166055
- (void)reloadData;	// 0x30166419
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x301660cd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x301662ad
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x301660a1
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x3016621d
- (void)viewDidUnload;	// 0x30165fd5
@end

