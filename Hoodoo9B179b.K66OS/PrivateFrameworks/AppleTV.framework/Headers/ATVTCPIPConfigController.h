/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDottedQuadEntryDelegate.h"
#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class NSString, ATVDottedQuadEntryController;
@protocol ATVTCPIPConfigDelegate;

@interface ATVTCPIPConfigController : BRMenuController <BRMenuListItemProvider, ATVDottedQuadEntryDelegate> {
@private
	id<ATVTCPIPConfigDelegate> _delegate;	// 128 = 0x80
	NSString *_address;	// 132 = 0x84
	NSString *_subnetMask;	// 136 = 0x88
	NSString *_router;	// 140 = 0x8c
	NSString *_dns;	// 144 = 0x90
	ATVDottedQuadEntryController *_ipController;	// 148 = 0x94
	ATVDottedQuadEntryController *_maskController;	// 152 = 0x98
	ATVDottedQuadEntryController *_routerController;	// 156 = 0x9c
	ATVDottedQuadEntryController *_dnsController;	// 160 = 0xa0
	unsigned _forWireless : 1;	// 164 = 0xa4
	unsigned _useDHCP : 1;	// 164 = 0xa4
}
- (id)initWithWireless:(BOOL)wireless notifying:(id)notifying;	// 0x301a7649
- (void)_readCurrentConfiguration;	// 0x301a7f79
- (void)_saveConfiguration;	// 0x301a80d9
- (void)dealloc;	// 0x301a77bd
- (void)entryComplete:(id)complete;	// 0x301a7b79
- (float)heightForRow:(long)row;	// 0x301a7b71
- (long)itemCount;	// 0x301a7b21
- (id)itemForRow:(long)row;	// 0x301a7a89
- (void)itemSelected:(long)selected;	// 0x301a78a9
- (BOOL)rowSelectable:(long)selectable;	// 0x301a7b75
- (id)titleForRow:(long)row;	// 0x301a7b25
@end

