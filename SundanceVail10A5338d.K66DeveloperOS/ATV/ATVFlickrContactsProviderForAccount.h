/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFlickrProvider.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsProviderForAccount : ATVFlickrProvider {
	ATVInternetPhotosAccount *_account;	// 24 = 0x18
}
+ (id)providerForAccount:(id)account;	// 0x194ec9
- (id)initWithAccount:(id)account;	// 0x194f11
- (id)_data;	// 0x195159
- (BOOL)_handlesObject:(id)object;	// 0x195179
- (void)dealloc;	// 0x195035
- (id)hashForDataAtIndex:(long)index;	// 0x1950f5
@end

