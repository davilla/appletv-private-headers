/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIURLResolver : NSObject {
}
+ (void)invalidate;	// 0x321389ed
+ (id)sharedResolver;	// 0x3207d191
+ (id)urlCacheChangedNotificationName;	// 0x321376c9
+ (id)urlCacheName;	// 0x321376c5
- (id)init;	// 0x321377dd
- (id)initWithDictionary:(id)dictionary;	// 0x3207d40d
- (id)_copyRegularExpressionsFromArray:(id)array;	// 0x3207d485
- (BOOL)_string:(id)string matchesPatterns:(id)patterns;	// 0x32080d0d
- (BOOL)_url:(id)url matchesHostPatterns:(id)patterns pathPatterns:(id)patterns3;	// 0x32080c55
- (BOOL)_url:(id)url matchesHostWhitelist:(id)whitelist;	// 0x3207d655
- (void)dealloc;	// 0x32138991
@end

