/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, ATVEventMediaAsset, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVEventMediaAssetUpdater : NSObject {
@private
	ATVEventMediaAsset *_asset;	// 4 = 0x4
	ATVMerchant *_merchant;	// 8 = 0x8
	NSMutableArray *_refreshTimers;	// 12 = 0xc
	dispatch_queue_s *_httpQueue;	// 16 = 0x10
}
- (id)initWithEventMediaAsset:(id)eventMediaAsset;	// 0x306ff989
- (void)_timerFired:(id)fired;	// 0x306ff8f9
- (void)dealloc;	// 0x306ffc51
@end

