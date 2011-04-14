/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSArray;

@interface BRAirportNetworksProvider : NSObject <BRProvider> {
@private
	NSArray *_networks;	// 4 = 0x4
}
- (id)initWithNetworks:(id)networks;	// 0x329827b1
- (id)controlFactory;	// 0x32982705
- (id)dataAtIndex:(long)index;	// 0x329826c5
- (long)dataCount;	// 0x329826e5
- (void)dealloc;	// 0x32982801
- (id)hashForDataAtIndex:(long)index;	// 0x3298266d
- (void)setNetworks:(id)networks;	// 0x32982741
@end
