/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRUserPasswordAccount.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVITunesSandboxAccount : BRUserPasswordAccount {
@private
	NSString *_dsid;	// 40 = 0x28
}
@property(readonly, assign) NSString *dsid;	// G=0x367f3395; @synthesize=_dsid
// declared property getter: - (id)dsid;	// 0x367f3395
- (BOOL)isAuthenticated;	// 0x367f3345
@end

