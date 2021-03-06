/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import <BRMediaMenuController.h> // Unknown library

@class NSString, ATVFlickrProvider, ATVFlickrSearchAgent;

@interface ATVFlickrMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	BOOL _isScreenSaverMenu;	// 136 = 0x88
	ATVFlickrSearchAgent *_searchAgent;	// 140 = 0x8c
	BOOL _searching;	// 144 = 0x90
	NSString *_activeSearchTerm;	// 148 = 0x94
	ATVFlickrProvider *_persistentAccountProvider;	// 152 = 0x98
}
+ (void)initialize;	// 0x30733a95
+ (id)menuController;	// 0x30733b65
+ (id)screenSaverMenuController;	// 0x30733b29
- (id)init;	// 0x30733a7d
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x30734809
- (void)_accountLoaded:(id)loaded;	// 0x30733c7d
- (void)_handleAccountSelection:(id)selection;	// 0x30733941
- (void)_handleAddSelection:(id)selection;	// 0x30733eed
- (void)_handleSavedSearchCollectionSelection:(id)selection;	// 0x3073375d
- (void)_handleSearchSelection:(id)selection;	// 0x30734335
- (void)_searchComplete:(id)complete;	// 0x30734065
- (id)accessibilityLabel;	// 0x30734051
- (void)dealloc;	// 0x30733be9
- (long)defaultIndex;	// 0x30733a49
- (BOOL)isNetworkDependent;	// 0x307336fd
- (float)listVerticalOffset;	// 0x30734ca9
- (void)textDidChange:(id)text;	// 0x307336f9
- (void)textDidEndEditing:(id)text;	// 0x307344c1
@end

