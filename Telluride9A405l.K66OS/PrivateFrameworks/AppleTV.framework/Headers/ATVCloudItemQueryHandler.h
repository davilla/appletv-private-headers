/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVCloudQueryHandler.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ATVCloudItemQueryHandler : ATVCloudQueryHandler {
}
+ (id)mlPredicatePropertyForATVProperty:(CFStringRef)atvproperty;	// 0x35efcba9
+ (id)mlPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x35efcd11
+ (id)mlQueryPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x35efc5e9
- (id)_orderingPropertiesForProperty:(id)property;	// 0x35efcded
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context;	// 0x35efba11
@end
