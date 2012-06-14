/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSCondition, MELoader;

@interface MEExporterManager : NSObject {
	MELoader *_loader;	// 4 = 0x4
	NSMutableArray *_exportQueue;	// 8 = 0x8
	NSCondition *_exportWaitCondition;	// 12 = 0xc
}
@property(readonly, assign) MELoader *loader;	// G=0x3659993d; @synthesize=_loader
+ (void)releaseSharedManager;	// 0x36599625
+ (id)sharedManager;	// 0x36599515
- (id)init;	// 0x365993d1
- (void)_exportCanceled:(id)canceled;	// 0x3659984d
- (void)_exportComplete:(id)complete;	// 0x365998d1
- (void)_queueAndWait:(id)wait;	// 0x3659977d
- (void)dealloc;	// 0x36599485
- (id)exporterWithDocument:(id)document;	// 0x36599731
- (void)loadAllPlugins;	// 0x365996f1
- (void)loadPluginWithIdentifier:(id)identifier;	// 0x36599711
// declared property getter: - (id)loader;	// 0x3659993d
@end
