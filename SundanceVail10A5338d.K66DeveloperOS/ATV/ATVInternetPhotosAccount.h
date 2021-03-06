/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString, ATVInternetPhotosCollection, NSArray;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosAccount : XXUnknownSuperclass {
	NSString *_accountName;	// 4 = 0x4
	NSString *_accountID;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSArray *_mediaAssets;	// 16 = 0x10
	NSArray *_subAccounts;	// 20 = 0x14
	NSArray *_mediaCollections;	// 24 = 0x18
	ATVInternetPhotosCollection *_lastModifiedCollection;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDate *_lastCheckedDate;	// 36 = 0x24
	NSString *_accountIconPath;	// 40 = 0x28
}
@property(retain) NSString *accountID;	// G=0x195965; S=0x195a41; converted property
@property(retain) NSString *accountIconPath;	// G=0x1965f9; S=0x1966d5; converted property
@property(retain) NSString *accountName;	// G=0x1957a1; S=0x19587d; converted property
@property(retain) NSString *displayName;	// G=0x195b29; S=0x195c05; converted property
@property(retain) NSDate *lastCheckedDate;	// G=0x196435; S=0x196511; converted property
@property(retain) ATVInternetPhotosCollection *lastModifiedCollection;	// G=0x195d25; S=0x195e01; converted property
@property(retain) NSArray *mediaCollections;	// G=0x1960ad; S=0x196189; converted property
@property(retain) NSDate *modDate;	// G=0x196271; S=0x19634d; converted property
@property(retain) NSArray *subAccounts;	// G=0x195ee9; S=0x195fc5; converted property
+ (id)account;	// 0x195659
// converted property getter: - (id)accountID;	// 0x195965
// converted property getter: - (id)accountIconPath;	// 0x1965f9
// converted property getter: - (id)accountName;	// 0x1957a1
- (void)dealloc;	// 0x19569d
// converted property getter: - (id)displayName;	// 0x195b29
// converted property getter: - (id)lastCheckedDate;	// 0x196435
// converted property getter: - (id)lastModifiedCollection;	// 0x195d25
// converted property getter: - (id)mediaCollections;	// 0x1960ad
// converted property getter: - (id)modDate;	// 0x196271
// converted property setter: - (void)setAccountID:(id)anId;	// 0x195a41
// converted property setter: - (void)setAccountIconPath:(id)path;	// 0x1966d5
// converted property setter: - (void)setAccountName:(id)name;	// 0x19587d
// converted property setter: - (void)setDisplayName:(id)name;	// 0x195c05
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x196511
// converted property setter: - (void)setLastModifiedCollection:(id)collection;	// 0x195e01
// converted property setter: - (void)setMediaCollections:(id)collections;	// 0x196189
// converted property setter: - (void)setModDate:(id)date;	// 0x19634d
// converted property setter: - (void)setSubAccounts:(id)accounts;	// 0x195fc5
// converted property getter: - (id)subAccounts;	// 0x195ee9
@end

