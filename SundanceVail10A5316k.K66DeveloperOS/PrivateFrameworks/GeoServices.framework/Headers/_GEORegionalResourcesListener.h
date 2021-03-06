/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesListener : NSObject {
@private
	NSMutableSet *_resourceIdentifiers;	// 4 = 0x4
	NSMutableSet *_completedResourceIdentifiers;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSSet *resourceIdentifiers;	// G=0x34b59a31; @synthesize=_resourceIdentifiers
- (BOOL)addCompletedResourceIdentifier:(id)identifier;	// 0x34b59971
- (void)addResourceIdentifiers:(id)identifiers;	// 0x34b59911
- (void)dealloc;	// 0x34b598ad
// declared property getter: - (id)resourceIdentifiers;	// 0x34b59a31
@end

