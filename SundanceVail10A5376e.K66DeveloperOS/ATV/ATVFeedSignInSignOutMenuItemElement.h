/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedMenuItemElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedSignInSignOutMenuItemElement : ATVFeedMenuItemElement {
	BOOL _signOutExitsApp;	// 4 = 0x4
	NSString *_confirmationTitle;	// 8 = 0x8
	NSString *_confirmationDescription;	// 12 = 0xc
	NSString *_signInPageURL;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x14f0a5; S=0x14f0b9; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x14f081; S=0x14f095; @synthesize=_confirmationTitle
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x14f0c9; S=0x14f0dd; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x14f061; S=0x14f071; @synthesize=_signOutExitsApp
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x14ee81
// declared property getter: - (id)confirmationDescription;	// 0x14f0a5
// declared property getter: - (id)confirmationTitle;	// 0x14f081
- (void)dealloc;	// 0x14efe9
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x14f0b9
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x14f095
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x14f0dd
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x14f071
// declared property getter: - (id)signInPageURL;	// 0x14f0c9
// declared property getter: - (BOOL)signOutExitsApp;	// 0x14f061
@end

