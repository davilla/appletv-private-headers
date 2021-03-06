/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import "BRMediaMenuController.h"

@class ATVFlickrProvider, ATVFlickrSearchAgent, NSString;

@interface ATVFlickrMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	BOOL _isScreenSaverMenu;	// 156 = 0x9c
	ATVFlickrSearchAgent *_searchAgent;	// 160 = 0xa0
	BOOL _searching;	// 164 = 0xa4
	NSString *_activeSearchTerm;	// 168 = 0xa8
	ATVFlickrProvider *_persistentAccountProvider;	// 172 = 0xac
}
+ (void)initialize;	// 0x32f4cb85
+ (id)menuController;	// 0x32f4caf9
+ (id)screenSaverMenuController;	// 0x32f4cb3d
- (id)init;	// 0x32f4cc29
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x32f4cc3d
- (void)_accountLoaded:(id)loaded;	// 0x32f4dd3d
- (void)_handleAccountSelection:(id)selection;	// 0x32f4da0d
- (void)_handleAddSelection:(id)selection;	// 0x32f4d6e1
- (void)_handleSavedSearchCollectionSelection:(id)selection;	// 0x32f4db25
- (void)_handleSearchSelection:(id)selection;	// 0x32f4d865
- (void)_searchComplete:(id)complete;	// 0x32f4dfdd
- (id)accessibilityLabel;	// 0x32f4d6d1
- (void)dealloc;	// 0x32f4d211
- (long)defaultIndex;	// 0x32f4d2e9
- (BOOL)isNetworkDependent;	// 0x32f4d6cd
- (float)listVerticalOffset;	// 0x32f4d2b5
- (void)textDidChange:(id)text;	// 0x32f4d321
- (void)textDidEndEditing:(id)text;	// 0x32f4d325
@end

