/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacProvider.h"

@class NSArray, NSSet, ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVDotMacProviderForAccount : ATVDotMacProvider {
	ATVInternetPhotosAccount *_account;	// 28 = 0x1c
	NSSet *_ignoredMediaCollectionTypes;	// 32 = 0x20
	NSArray *_dataWithTypeDividers;	// 36 = 0x24
	BOOL _disableTypeDividers;	// 40 = 0x28
}
@property(readonly, retain) ATVInternetPhotosAccount *account;	// G=0x18ea39; converted property
@property(retain) NSSet *ignoredMediaCollectionTypes;	// G=0x18eedd; S=0x18eeed; converted property
+ (id)providerForAccount:(id)account;	// 0x18e7e1
- (id)initWithAccount:(id)account;	// 0x18e829
- (id)_data;	// 0x18ed29
- (id)_dataWithTypeDividers;	// 0x18eb95
- (BOOL)_handlesObject:(id)object;	// 0x18eda1
- (void)_updateDataCount;	// 0x18eeb1
// converted property getter: - (id)account;	// 0x18ea39
- (id)dataAtIndex:(long)index;	// 0x18ea81
- (long)dataCount;	// 0x18ea59
- (void)dealloc;	// 0x18e951
- (id)hashForDataAtIndex:(long)index;	// 0x18eaed
// converted property getter: - (id)ignoredMediaCollectionTypes;	// 0x18eedd
- (void)setDisableTypeDividers:(BOOL)dividers;	// 0x18ea49
// converted property setter: - (void)setIgnoredMediaCollectionTypes:(id)types;	// 0x18eeed
@end

