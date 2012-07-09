/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsController : BRMediaMenuController {
	ATVInternetPhotosAccount *_account;	// 172 = 0xac
	BOOL _isScreenSaverMenu;	// 176 = 0xb0
}
+ (id)menuControllerForAccount:(id)account;	// 0x18bb69
+ (id)screenSaverMenuControllerForAccount:(id)account;	// 0x18bbb1
- (id)initWithAccount:(id)account;	// 0x18bbfd
- (id)initWithAccount:(id)account forScreenSaver:(BOOL)screenSaver;	// 0x18bc11
- (void)_handleAccountSelection:(id)selection;	// 0x18c009
- (void)_handleReturnToFlickrSelection:(id)flickrSelection;	// 0x18bf69
- (void)_providerUpdated:(id)updated;	// 0x18c1b1
- (void)dealloc;	// 0x18bee9
- (BOOL)isNetworkDependent;	// 0x18bf65
@end
