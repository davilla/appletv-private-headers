/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADClient.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class CHDAnchor;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : NSObject <OADClient> {
@private
	CHDAnchor *mAnchor;	// 4 = 0x4
}
@property(retain) id anchor;	// G=0x311f7bfd; S=0x311bc451; converted property
// converted property getter: - (id)anchor;	// 0x311f7bfd
- (CGRect)bounds;	// 0x311f7c11
- (void)dealloc;	// 0x311bc5f1
- (BOOL)hasBounds;	// 0x311f7c0d
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x311bc451
@end

