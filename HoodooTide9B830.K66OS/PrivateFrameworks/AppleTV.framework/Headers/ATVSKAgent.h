/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMercantile.h"
#import "BRSingleton.h"

@class BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVSKAgent : BRSingleton <BRMercantile> {
@private
	BRMerchant *_merchant;	// 4 = 0x4
	BOOL _usingSandbox;	// 8 = 0x8
	BOOL needsTransaction;	// 9 = 0x9
}
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x32b38601; S=0x32b38001; @synthesize=_merchant
@property(assign) BOOL needsTransaction;	// G=0x32b38621; S=0x32b38631; @synthesize
@property(assign, nonatomic, setter=useSandbox:) BOOL usingSandbox;	// G=0x32b38611; S=0x32b380cd; @synthesize=_usingSandbox
+ (id)secureToken;	// 0x32b38251
+ (void)setSecureToken:(id)token;	// 0x32b38319
+ (void)setSingleton:(id)singleton;	// 0x32b37d99
+ (id)singleton;	// 0x32b37da9
+ (id)userDSID;	// 0x32b3813d
- (id)init;	// 0x32b37db9
- (void)_refreshSandboxMode;	// 0x32b3845d
- (BOOL)_sandboxModeFromVendorBag;	// 0x32b383ed
- (id)account;	// 0x32b380d1
- (void)dealloc;	// 0x32b37f91
// declared property getter: - (id)merchant;	// 0x32b38601
// declared property getter: - (BOOL)needsTransaction;	// 0x32b38621
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x32b38001
// declared property setter: - (void)setNeedsTransaction:(BOOL)transaction;	// 0x32b38631
// declared property setter: - (void)useSandbox:(BOOL)sandbox;	// 0x32b380cd
// declared property getter: - (BOOL)usingSandbox;	// 0x32b38611
@end
