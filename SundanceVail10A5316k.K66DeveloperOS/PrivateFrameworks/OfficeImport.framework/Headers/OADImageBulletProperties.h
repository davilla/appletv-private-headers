/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBulletProperties.h"

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADImageBulletProperties : OADBulletProperties {
@private
	OADBlipRef *mImage;	// 4 = 0x4
}
- (id)initWithBlipRef:(id)blipRef;	// 0x31193ffd
- (void)dealloc;	// 0x311975e1
- (id)image;	// 0x3124b6ed
- (BOOL)isEqual:(id)equal;	// 0x311b2cf9
@end

