/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MELoader;

@interface MEExporterManager : NSObject {
	MELoader *_loader;	// 4 = 0x4
}
@property(readonly, assign) MELoader *loader;	// G=0x3440b119; @synthesize=_loader
+ (void)releaseSharedManager;	// 0x3440b061
+ (id)sharedManager;	// 0x3440af6d
- (id)init;	// 0x3440aeb5
- (void)dealloc;	// 0x3440af19
- (id)exporterWithDocument:(id)document;	// 0x3440b0cd
- (void)loadAllPlugins;	// 0x3440b08d
- (void)loadPluginWithIdentifier:(id)identifier;	// 0x3440b0ad
// declared property getter: - (id)loader;	// 0x3440b119
@end

