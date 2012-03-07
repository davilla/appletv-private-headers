/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVCloudQueryHandler.h"


__attribute__((visibility("hidden")))
@interface ATVCloudItemQueryHandler : ATVCloudQueryHandler {
}
+ (id)mlPredicatePropertyForATVProperty:(CFStringRef)atvproperty;	// 0x33b8b5f5
+ (id)mlPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x33b8b75d
+ (id)mlQueryPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x33b8b035
- (id)_orderingPropertiesForProperty:(id)property;	// 0x33b8b839
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context;	// 0x33b8a45d
@end
