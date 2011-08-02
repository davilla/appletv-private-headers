/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFlickrProvider.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForSavedSearches : ATVFlickrProvider {
@private
	NSMutableArray *_savedSearchCollections;	// 24 = 0x18
}
+ (id)providerOfSavedSearchCollections;	// 0x30663a41
- (id)init;	// 0x30663835
- (id)_data;	// 0x30662d71
- (BOOL)_handlesObject:(id)object;	// 0x30663661
- (void)_newSavedSearchToAddCollectionFor:(id)aFor;	// 0x30663565
- (void)_savedSearchTermRemoved:(id)removed;	// 0x30663465
- (void)dealloc;	// 0x30663789
- (id)hashForDataAtIndex:(long)index;	// 0x30663739
@end

