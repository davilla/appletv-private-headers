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
+ (id)menuControllerForAccount:(id)account;	// 0x30732749
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x30732709
- (id)initWithAccount:(id)account;	// 0x307326f1
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x307328b9
- (void)_handleAccountSelection:(id)selection;	// 0x307324e5
- (void)_handleReturnToFlickrSelection:(id)flickrSelection;	// 0x3073266d
- (void)_providerUpdated:(id)updated;	// 0x307327f9
- (void)dealloc;	// 0x30732789
- (BOOL)isNetworkDependent;	// 0x307324e1
@end

