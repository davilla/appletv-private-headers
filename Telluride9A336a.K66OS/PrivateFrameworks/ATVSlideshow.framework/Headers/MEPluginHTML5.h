/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MEPluginTypeGeneric.h"
#import "MEPluginRegistration.h"
#import "MEPlugin.h"

@class NSLock, NSOperationQueue;

@interface MEPluginHTML5 : MEPlugin <MEPluginRegistration, MEPluginTypeGeneric> {
	NSLock *mXMLLock;	// 12 = 0xc
	NSOperationQueue *mImageQueue;	// 16 = 0x10
}
+ (BOOL)matchesOptions:(id)options;	// 0x3440bba1
+ (void)registerPluginsToLoader:(id)loader;	// 0x3440bb25
- (id)initWithIdentifier:(id)identifier andDocument:(id)document andDelegate:(id)delegate;	// 0x3440bba5
- (void)cacheImageAtPath:(id)path toPath:(id)path2 withAssetInfo:(id)assetInfo referenceOriginal:(BOOL)original createCache:(BOOL)cache;	// 0x3440dc31
- (void)dealloc;	// 0x3440bc8d
- (BOOL)exportToFile:(id)file andOptions:(id)options error:(id *)error;	// 0x3440bced
@end

