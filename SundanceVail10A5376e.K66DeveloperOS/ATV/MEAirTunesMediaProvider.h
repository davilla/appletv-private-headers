/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaProvider.h"

@class MEAirTunesMediaAsset;

__attribute__((visibility("hidden")))
@interface MEAirTunesMediaProvider : BRBaseMediaProvider {
	MEAirTunesMediaAsset *_asset;	// 12 = 0xc
}
- (id)init;	// 0x53271
- (void).cxx_destruct;	// 0x53399
- (id)mediaTypes;	// 0x532f1
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors excludeHiddenObjects:(BOOL)objects error:(id *)error;	// 0x5336d
- (int)status;	// 0x53351
@end
