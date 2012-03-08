/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MusicController.h"
#import "AppleTV-Structs.h"

@class NSArray, NSString, BRControl;

@interface MusicMainController : MusicController {
@private
	BRControl *_allSongsPreview;	// 124 = 0x7c
	BOOL _displayNowPlaying;	// 128 = 0x80
	NSArray *_controllerMenuItems;	// 132 = 0x84
	NSString *_textEntryClient;	// 136 = 0x88
}
@property(retain, nonatomic) NSArray *controllerMenuItems;	// G=0x33182339; S=0x33182349; @synthesize=_controllerMenuItems
@property(retain, nonatomic) NSString *textEntryClient;	// G=0x3318236d; S=0x3318237d; @synthesize=_textEntryClient
+ (void)initialize;	// 0x331813b9
- (id)_indexPathForTitleKey:(id)titleKey;	// 0x33182445
- (unsigned)_menuItemForRow:(unsigned)row;	// 0x331823a1
- (id)_menuItemTitleKeyForIndexPath:(id)indexPath;	// 0x331823d9
- (void)_networkStateChanged:(id)changed;	// 0x331826f5
- (void)_playerStateChanged:(id)changed;	// 0x331826ad
- (void)_updateNowPlaying;	// 0x33182531
- (void)controlWasActivated;	// 0x3318159d
// declared property getter: - (id)controllerMenuItems;	// 0x33182339
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x331821c9
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x33182139
- (void)dealloc;	// 0x331814f9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33181911
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x33181b11
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x33181905
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x331818ad
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x33182125
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x33182111
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x33181749
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x33181829
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x33181871
- (long)numberOfSectionsInList:(id)list;	// 0x33181825
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x33182249
// declared property setter: - (void)setControllerMenuItems:(id)items;	// 0x33182349
// declared property setter: - (void)setTextEntryClient:(id)client;	// 0x3318237d
// declared property getter: - (id)textEntryClient;	// 0x3318236d
- (void)wasPopped;	// 0x331816dd
- (void)wasPushed;	// 0x331815dd
@end
