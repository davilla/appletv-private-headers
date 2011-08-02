/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSecureResource.h"
#import <BRController.h> // Unknown library

@class NSString, ATVSedonaAccount;

@interface ATVSedonaController : BRController <BRSecureResource> {
@private
	ATVSedonaAccount *_account;	// 60 = 0x3c
	NSString *_preferredURL;	// 64 = 0x40
	BOOL _autoPlay;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL autoPlay;	// G=0x306bd2a1; S=0x306bd2b1; @synthesize=_autoPlay
+ (id)controller;	// 0x306bd611
+ (id)controllerWithPreferredURL:(id)preferredURL;	// 0x306bd5dd
- (id)init;	// 0x306bd519
- (id)initWithPreferredURL:(id)preferredURL;	// 0x306bd4e1
// declared property getter: - (BOOL)autoPlay;	// 0x306bd2a1
- (void)controlWasActivated;	// 0x306bd2f5
- (void)dealloc;	// 0x306bd45d
- (BOOL)isNetworkDependent;	// 0x306bd29d
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x306bd2c1
// declared property setter: - (void)setAutoPlay:(BOOL)play;	// 0x306bd2b1
- (void)wasPushed;	// 0x306bd40d
@end

