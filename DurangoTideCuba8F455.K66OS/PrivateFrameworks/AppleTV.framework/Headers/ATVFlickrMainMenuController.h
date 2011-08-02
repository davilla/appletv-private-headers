/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import <BRMediaMenuController.h> // Unknown library

@class ATVFlickrProvider, NSString, ATVFlickrSearchAgent;

@interface ATVFlickrMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	BOOL _isScreenSaverMenu;	// 136 = 0x88
	ATVFlickrSearchAgent *_searchAgent;	// 140 = 0x8c
	BOOL _searching;	// 144 = 0x90
	NSString *_activeSearchTerm;	// 148 = 0x94
	ATVFlickrProvider *_persistentAccountProvider;	// 152 = 0x98
}
+ (void)initialize;	// 0x3065e7d9
+ (id)menuController;	// 0x3065e8a9
+ (id)screenSaverMenuController;	// 0x3065e86d
- (id)init;	// 0x3065e7c1
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x3065f54d
- (void)_accountLoaded:(id)loaded;	// 0x3065e9c1
- (void)_handleAccountSelection:(id)selection;	// 0x3065e685
- (void)_handleAddSelection:(id)selection;	// 0x3065ec31
- (void)_handleSavedSearchCollectionSelection:(id)selection;	// 0x3065e4a1
- (void)_handleSearchSelection:(id)selection;	// 0x3065f079
- (void)_searchComplete:(id)complete;	// 0x3065eda9
- (id)accessibilityLabel;	// 0x3065ed95
- (void)dealloc;	// 0x3065e92d
- (long)defaultIndex;	// 0x3065e78d
- (BOOL)isNetworkDependent;	// 0x3065e441
- (float)listVerticalOffset;	// 0x3065f9ed
- (void)textDidChange:(id)text;	// 0x3065e43d
- (void)textDidEndEditing:(id)text;	// 0x3065f205
@end
