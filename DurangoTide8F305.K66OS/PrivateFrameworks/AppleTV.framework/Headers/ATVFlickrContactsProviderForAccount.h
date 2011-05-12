/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFlickrProvider.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsProviderForAccount : ATVFlickrProvider {
@private
	ATVInternetPhotosAccount *_account;	// 24 = 0x18
}
+ (id)providerForAccount:(id)account;	// 0x307382e1
- (id)initWithAccount:(id)account;	// 0x3073a409
- (id)_data;	// 0x307381bd
- (BOOL)_handlesObject:(id)object;	// 0x3073807d
- (void)dealloc;	// 0x30738235
- (id)hashForDataAtIndex:(long)index;	// 0x307381dd
@end

