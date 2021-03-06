/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStore.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRAggregateDataStore : BRDataStore {
@private
	NSArray *_dataStores;	// 40 = 0x28
}
- (id)initWithDataStores:(id)dataStores;	// 0x33110015
- (void)dealloc;	// 0x331100ad
- (id)loadData;	// 0x33110149
- (void)purge;	// 0x331100f9
- (void)setUseLocalProvidersOnly:(BOOL)only;	// 0x331101e5
- (BOOL)storeAppliesToObject:(id)object;	// 0x33110265
@end

