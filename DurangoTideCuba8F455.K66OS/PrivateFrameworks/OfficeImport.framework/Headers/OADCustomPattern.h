/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADPattern.h"

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADCustomPattern : OADPattern {
@private
	OADBlipRef *mBlipRef;	// 12 = 0xc
	BOOL mIsBlipRefOverridden;	// 16 = 0x10
}
@property(retain) id blipRef;	// G=0x32cd4635; S=0x32b8fb3d; converted property
+ (id)defaultProperties;	// 0x32b8faf9
- (id)initWithDefaults;	// 0x32c0d18d
// converted property getter: - (id)blipRef;	// 0x32cd4635
- (id)copyWithZone:(NSZone *)zone;	// 0x32cd4661
- (void)dealloc;	// 0x32ba90a1
- (unsigned)hash;	// 0x32cd5119
- (BOOL)isBlipRefOverridden;	// 0x32cd4601
- (BOOL)isEqual:(id)equal;	// 0x32cd5039
// converted property setter: - (void)setBlipRef:(id)ref;	// 0x32b8fb3d
@end
