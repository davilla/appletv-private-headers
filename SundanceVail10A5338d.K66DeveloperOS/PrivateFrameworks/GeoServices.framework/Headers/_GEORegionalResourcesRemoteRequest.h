/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesRemoteRequest : NSObject {
	GEOTileKeyList *_list;	// 4 = 0x4
	unsigned long long _handle;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned long long handle;	// G=0x324a15a1; @synthesize=_handle
@property(readonly, assign, nonatomic) GEOTileKeyList *list;	// G=0x324a15b9; @synthesize=_list
- (id)initWithList:(id)list handle:(unsigned long long)handle;	// 0x324a14dd
- (void)dealloc;	// 0x324a1555
// declared property getter: - (unsigned long long)handle;	// 0x324a15a1
// declared property getter: - (id)list;	// 0x324a15b9
@end

