/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacProvider.h"

@class NSArray, ATVInternetPhotosAccount, NSSet;

__attribute__((visibility("hidden")))
@interface ATVDotMacProviderForAccount : ATVDotMacProvider {
@private
	ATVInternetPhotosAccount *_account;	// 28 = 0x1c
	NSSet *_ignoredMediaCollectionTypes;	// 32 = 0x20
	NSArray *_dataWithTypeDividers;	// 36 = 0x24
	BOOL _disableTypeDividers;	// 40 = 0x28
}
@property(readonly, retain) ATVInternetPhotosAccount *account;	// G=0x328acb25; converted property
@property(retain) NSSet *ignoredMediaCollectionTypes;	// G=0x328acfcd; S=0x328acfdd; converted property
+ (id)providerForAccount:(id)account;	// 0x328ac8cd
- (id)initWithAccount:(id)account;	// 0x328ac915
- (id)_data;	// 0x328ace19
- (id)_dataWithTypeDividers;	// 0x328acc81
- (BOOL)_handlesObject:(id)object;	// 0x328ace91
- (void)_updateDataCount;	// 0x328acfa1
// converted property getter: - (id)account;	// 0x328acb25
- (id)dataAtIndex:(long)index;	// 0x328acb6d
- (long)dataCount;	// 0x328acb45
- (void)dealloc;	// 0x328aca3d
- (id)hashForDataAtIndex:(long)index;	// 0x328acbd9
// converted property getter: - (id)ignoredMediaCollectionTypes;	// 0x328acfcd
- (void)setDisableTypeDividers:(BOOL)dividers;	// 0x328acb35
// converted property setter: - (void)setIgnoredMediaCollectionTypes:(id)types;	// 0x328acfdd
@end
