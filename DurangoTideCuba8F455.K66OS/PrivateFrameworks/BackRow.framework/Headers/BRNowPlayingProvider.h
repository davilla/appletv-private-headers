/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSString, NSSet;
@protocol BRControlFactory;

@interface BRNowPlayingProvider : NSObject <BRProvider> {
@private
	id<BRControlFactory> _factory;	// 4 = 0x4
	NSSet *_types;	// 8 = 0x8
	NSString *_playerMediaAssetID;	// 12 = 0xc
}
+ (id)providerForTypes:(id)types;	// 0x32fe3ff9
- (void)_checkPlayerState;	// 0x32fe3d89
- (id)_initWithTypes:(id)types;	// 0x32fe403d
- (void)_playerStateChanged:(id)changed;	// 0x32fe3f2d
- (id)controlFactory;	// 0x32fe3fad
- (id)dataAtIndex:(long)index;	// 0x32fe3f71
- (long)dataCount;	// 0x32fe3d69
- (void)dealloc;	// 0x32fe4221
- (id)hashForDataAtIndex:(long)index;	// 0x32fe3d7d
@end

