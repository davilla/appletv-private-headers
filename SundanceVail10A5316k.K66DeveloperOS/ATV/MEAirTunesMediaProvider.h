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
- (id)init;	// 0x528cd
- (void).cxx_destruct;	// 0x529f5
- (id)mediaTypes;	// 0x5294d
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors excludeHiddenObjects:(BOOL)objects error:(id *)error;	// 0x529c9
- (int)status;	// 0x529ad
@end

