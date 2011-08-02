/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIURLResolver.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIITunesStoreURLResolver : UIURLResolver {
@private
	NSArray *_appleStoreHostPatterns;	// 4 = 0x4
	NSArray *_appleStorePathPatterns;	// 8 = 0x8
	NSArray *_appStoreHostPatterns;	// 12 = 0xc
	NSArray *_appStorePathPatterns;	// 16 = 0x10
	NSArray *_bookStoreHostPatterns;	// 20 = 0x14
	NSArray *_bookStorePathPatterns;	// 24 = 0x18
	NSArray *_hostWhiteList;	// 28 = 0x1c
	NSArray *_musicStoreHostPatterns;	// 32 = 0x20
	NSArray *_musicStorePathPatterns;	// 36 = 0x24
}
+ (id)urlCacheChangedNotificationName;	// 0x3207d479
+ (id)urlCacheName;	// 0x3207d22d
- (id)initWithDictionary:(id)dictionary;	// 0x3207d239
- (void)dealloc;	// 0x321387b5
- (BOOL)isAppleStoreURL:(id)url;	// 0x3213773d
- (int)storeURLTypeForURL:(id)url;	// 0x3207d591
@end
