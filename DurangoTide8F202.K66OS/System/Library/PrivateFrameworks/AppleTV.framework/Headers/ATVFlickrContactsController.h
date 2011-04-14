/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRMediaMenuController.h> // Unknown library

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsController : BRMediaMenuController {
@private
	ATVInternetPhotosAccount *_account;	// 136 = 0x88
	BOOL _isScreenSaverMenu;	// 140 = 0x8c
}
+ (id)menuControllerForAccount:(id)account;	// 0x33699745
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x33699705
- (id)initWithAccount:(id)account;	// 0x336996ed
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x336998b5
- (void)_handleAccountSelection:(id)selection;	// 0x336994e1
- (void)_handleReturnToFlickrSelection:(id)flickrSelection;	// 0x33699669
- (void)_providerUpdated:(id)updated;	// 0x336997f5
- (void)dealloc;	// 0x33699785
- (BOOL)isNetworkDependent;	// 0x336994dd
@end
