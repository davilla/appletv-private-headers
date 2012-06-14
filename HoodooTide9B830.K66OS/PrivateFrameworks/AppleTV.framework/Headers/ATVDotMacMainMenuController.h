/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextFieldDelegate.h"
#import "BRMediaMenuController.h"


@interface ATVDotMacMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	BOOL _isScreenSaverMenu;	// 160 = 0xa0
}
+ (void)initialize;	// 0x328a4f5d
+ (id)menuController;	// 0x328a5075
+ (id)screenSaverMenuController;	// 0x328a50b9
- (id)init;	// 0x328a5101
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x328a5115
- (void)_accountLoaded:(id)loaded;	// 0x328a5ac9
- (void)_handleAccountSelection:(id)selection;	// 0x328a59b1
- (void)_handleAddSelection:(id)selection;	// 0x328a5819
- (void)dealloc;	// 0x328a5531
- (long)defaultIndex;	// 0x328a55c1
- (BOOL)isNetworkDependent;	// 0x328a5815
- (float)listVerticalOffset;	// 0x328a558d
- (void)textDidChange:(id)text;	// 0x328a55f9
- (void)textDidEndEditing:(id)text;	// 0x328a55fd
@end
