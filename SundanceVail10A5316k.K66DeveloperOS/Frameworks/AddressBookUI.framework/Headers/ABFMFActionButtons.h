/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library
#import "ABFMFActionButtonsDelegate.h"

@class ABPersonViewController, UIButton;

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate> {
@private
	ABPersonViewController *_pvc;	// 4 = 0x4
	UIButton *_messageButton;	// 8 = 0x8
	UIButton *_facetimeButton;	// 12 = 0xc
	UIButton *_callButton;	// 16 = 0x10
}
@property(assign, nonatomic) void *displayedPerson;	// G=0x34cd89b1; S=0x34cd8991; 
@property(readonly, assign, nonatomic) BOOL hasTelephonyCapability;	// G=0x34cd89d1; 
- (id)init;	// 0x34cd865d
- (id)initWithMessageButton:(id)messageButton facetimeButton:(id)button callButton:(id)button3;	// 0x34cd86d9
- (void)dealloc;	// 0x34cd88fd
// declared property getter: - (void *)displayedPerson;	// 0x34cd89b1
// declared property getter: - (BOOL)hasTelephonyCapability;	// 0x34cd89d1
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x34cd8991
- (void)showFMFCallButton:(BOOL)button withAction:(id)action;	// 0x34cd8a8d
- (void)showFMFFacetimeButton:(BOOL)button withAction:(id)action;	// 0x34cd8a49
- (void)showFMFMessageButton:(BOOL)button withAction:(id)action;	// 0x34cd8a05
@end
