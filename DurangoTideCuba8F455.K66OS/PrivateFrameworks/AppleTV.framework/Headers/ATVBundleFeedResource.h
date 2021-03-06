/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVReadOnlyFeedResource.h"
#import <NSObject.h> // Unknown library

@class NSString, NSBundle;

__attribute__((visibility("hidden")))
@interface ATVBundleFeedResource : NSObject <ATVReadOnlyFeedResource> {
@private
	NSString *_basePath;	// 4 = 0x4
	NSBundle *_bundle;	// 8 = 0x8
}
@property(readonly, copy, nonatomic) NSString *path;	// G=0x306f2089; 
+ (void)initialize;	// 0x306f20f5
- (id)initWithBundlePath:(id)bundlePath;	// 0x306f2155
- (void)dealloc;	// 0x306f2099
- (id)feedResourceNamed:(id)named;	// 0x306f2211
// declared property getter: - (id)path;	// 0x306f2089
@end

