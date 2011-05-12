/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIURLResolver.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIFMFURLResolver : UIURLResolver {
@private
	NSArray *_fmfHostPatterns;	// 4 = 0x4
	NSArray *_fmfPathPatterns;	// 8 = 0x8
}
+ (id)urlCacheChangedNotificationName;	// 0x321376f1
+ (id)urlCacheName;	// 0x321376e5
- (id)initWithDictionary:(id)dictionary;	// 0x3213870d
- (void)dealloc;	// 0x321386b1
- (BOOL)isFMFURL:(id)fmfurl;	// 0x321376fd
@end

