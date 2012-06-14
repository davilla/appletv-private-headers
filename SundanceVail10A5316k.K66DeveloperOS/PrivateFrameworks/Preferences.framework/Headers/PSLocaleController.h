/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"

@class PSSpecifier;

@interface PSLocaleController : PSListController {
	PSSpecifier *_checkedSpecifier;	// 272 = 0x110
	BOOL _firstAppearance;	// 276 = 0x114
}
- (id)init;	// 0x372b56fd
- (void)addLanguage:(id)language toSupportedLanguages:(id)supportedLanguages;	// 0x372b5ac5
- (void)dealloc;	// 0x372b5799
- (id)locale:(id)locale;	// 0x372b690d
- (void)localeChangedAction;	// 0x372b569d
- (void)setLocale:(id)locale specifier:(id)specifier;	// 0x372b6929
- (id)specifiers;	// 0x372b5bc1
- (void)subcategorySelected:(id)selected specifier:(id)specifier;	// 0x372b58f9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x372b6989
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x372b592d
- (void)updateChecked:(id)checked;	// 0x372b5801
- (void)viewWillAppear:(BOOL)view;	// 0x372b5a15
@end
