/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVSystemFeedResources : NSObject {
@private
	NSDictionary *_bundlesByNamespace;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x33184109
- (id)init;	// 0x3318416d
- (id)_computedResourceNamed:(id)named;	// 0x33184575
- (id)_resourceNamed:(id)named inBundles:(id)bundles;	// 0x331844d1
- (void)dealloc;	// 0x331843e9
- (id)feedResourceNamed:(id)named inNamespace:(id)aNamespace;	// 0x33184435
@end
