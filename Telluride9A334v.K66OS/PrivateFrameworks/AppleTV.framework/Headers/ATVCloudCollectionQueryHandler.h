/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVCloudCollectionQueryHandler.h"
#import "ATVCloudQueryHandler.h"


@protocol ATVCloudCollectionQueryHandler
- (id)blankProperty;
- (id)countedPropertiesForATVProperties:(id)atvproperties;
- (Class)entityClass;
- (id)foreignPersistentIDProperty;
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;
- (id)orderingPropertiesForProperty:(id)property;
- (/*function-pointer*/ void *)propertyAccessorFn;
@end

__attribute__((visibility("hidden")))
@interface ATVCloudCollectionQueryHandler : ATVCloudQueryHandler <ATVCloudCollectionQueryHandler> {
}
- (id)blankProperty;	// 0x33308255
- (id)countedPropertiesForATVProperties:(id)atvproperties;	// 0x33308259
- (Class)entityClass;	// 0x33308261
- (id)foreignPersistentIDProperty;	// 0x33308251
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context;	// 0x33307779
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;	// 0x3330825d
- (id)orderingPropertiesForProperty:(id)property;	// 0x3330824d
- (/*function-pointer*/ void *)propertyAccessorFn;	// 0x33308265
@end
