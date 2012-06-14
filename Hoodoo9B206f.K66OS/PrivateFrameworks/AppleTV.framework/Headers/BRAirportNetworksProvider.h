/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSArray;

@interface BRAirportNetworksProvider : NSObject <BRProvider> {
@private
	NSArray *_networks;	// 4 = 0x4
}
- (id)initWithNetworks:(id)networks;	// 0x36714815
- (id)controlFactory;	// 0x367148e9
- (id)dataAtIndex:(long)index;	// 0x3671494d
- (long)dataCount;	// 0x3671492d
- (void)dealloc;	// 0x367147c9
- (id)hashForDataAtIndex:(long)index;	// 0x3671496d
- (void)setNetworks:(id)networks;	// 0x36714869
@end
