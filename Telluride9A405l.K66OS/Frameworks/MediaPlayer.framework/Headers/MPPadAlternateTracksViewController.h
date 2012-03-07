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
- (id)init;	// 0x33c25cf5
- (id)initWithPlayer:(id)player;	// 0x33c25c21
- (void)dealloc;	// 0x33c25d71
- (void)loadView;	// 0x33c25de9
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x33c25f49
- (void)reloadData;	// 0x33c2630d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33c25fc1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33c261a1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33c25f95
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x33c26111
- (void)viewDidUnload;	// 0x33c25ec9
@end
