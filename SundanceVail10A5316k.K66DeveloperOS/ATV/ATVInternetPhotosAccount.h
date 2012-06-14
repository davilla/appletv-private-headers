/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString, NSArray, ATVInternetPhotosCollection;

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
@property(retain) NSString *accountID;	// G=0x18fc0d; S=0x18fce9; converted property
@property(retain) NSString *accountIconPath;	// G=0x1908a1; S=0x19097d; converted property
@property(retain) NSString *accountName;	// G=0x18fa49; S=0x18fb25; converted property
@property(retain) NSString *displayName;	// G=0x18fdd1; S=0x18fead; converted property
@property(retain) NSDate *lastCheckedDate;	// G=0x1906dd; S=0x1907b9; converted property
@property(retain) ATVInternetPhotosCollection *lastModifiedCollection;	// G=0x18ffcd; S=0x1900a9; converted property
@property(retain) NSArray *mediaCollections;	// G=0x190355; S=0x190431; converted property
@property(retain) NSDate *modDate;	// G=0x190519; S=0x1905f5; converted property
@property(retain) NSArray *subAccounts;	// G=0x190191; S=0x19026d; converted property
+ (id)account;	// 0x18f901
// converted property getter: - (id)accountID;	// 0x18fc0d
// converted property getter: - (id)accountIconPath;	// 0x1908a1
// converted property getter: - (id)accountName;	// 0x18fa49
- (void)dealloc;	// 0x18f945
// converted property getter: - (id)displayName;	// 0x18fdd1
// converted property getter: - (id)lastCheckedDate;	// 0x1906dd
// converted property getter: - (id)lastModifiedCollection;	// 0x18ffcd
// converted property getter: - (id)mediaCollections;	// 0x190355
// converted property getter: - (id)modDate;	// 0x190519
// converted property setter: - (void)setAccountID:(id)anId;	// 0x18fce9
// converted property setter: - (void)setAccountIconPath:(id)path;	// 0x19097d
// converted property setter: - (void)setAccountName:(id)name;	// 0x18fb25
// converted property setter: - (void)setDisplayName:(id)name;	// 0x18fead
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x1907b9
// converted property setter: - (void)setLastModifiedCollection:(id)collection;	// 0x1900a9
// converted property setter: - (void)setMediaCollections:(id)collections;	// 0x190431
// converted property setter: - (void)setModDate:(id)date;	// 0x1905f5
// converted property setter: - (void)setSubAccounts:(id)accounts;	// 0x19026d
// converted property getter: - (id)subAccounts;	// 0x190191
@end
