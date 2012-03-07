/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuItem.h"

@class ATVMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVSignInSignOutMenuItem : BRMenuItem {
@private
	ATVMerchant *_merchant;	// 144 = 0x90
	BOOL _signOutExitsApp;	// 148 = 0x94
	NSString *_confirmationTitle;	// 152 = 0x98
	NSString *_confirmationDescription;	// 156 = 0x9c
	NSString *_signInPageURL;	// 160 = 0xa0
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x35d8263d; S=0x35d8264d; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x35d82609; S=0x35d82619; @synthesize=_confirmationTitle
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x35d825b5; S=0x35d825c5; @synthesize=_merchant
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x35d82671; S=0x35d82681; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x35d825e9; S=0x35d825f9; @synthesize=_signOutExitsApp
- (void)_update;	// 0x35d82099
- (BOOL)brEventAction:(id)action;	// 0x35d821c5
// declared property getter: - (id)confirmationDescription;	// 0x35d8263d
// declared property getter: - (id)confirmationTitle;	// 0x35d82609
- (void)controlWasActivated;	// 0x35d82185
- (void)dealloc;	// 0x35d82011
// declared property getter: - (id)merchant;	// 0x35d825b5
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x35d8264d
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x35d82619
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x35d825c5
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x35d82681
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x35d825f9
// declared property getter: - (id)signInPageURL;	// 0x35d82671
// declared property getter: - (BOOL)signOutExitsApp;	// 0x35d825e9
@end
