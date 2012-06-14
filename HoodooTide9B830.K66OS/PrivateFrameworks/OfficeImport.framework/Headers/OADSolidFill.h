/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADFill.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADSolidFill : OADFill {
@private
	OADColor *mColor;	// 12 = 0xc
	BOOL mIsColorOverridden;	// 16 = 0x10
}
@property(retain) id color;	// G=0x310ea8e5; S=0x31165709; converted property
+ (id)blackFill;	// 0x31384dbd
+ (id)defaultProperties;	// 0x311656c1
+ (id)whiteFill;	// 0x31384e39
- (id)initWithDefaults;	// 0x3118f4f5
// converted property getter: - (id)color;	// 0x310ea8e5
- (id)copyWithZone:(NSZone *)zone;	// 0x3124eb95
- (void)dealloc;	// 0x3116af5d
- (unsigned)hash;	// 0x31384eb5
- (BOOL)isColorOverridden;	// 0x310ea915
- (BOOL)isEqual:(id)equal;	// 0x3116a8f9
// converted property setter: - (void)setColor:(id)color;	// 0x31165709
- (void)setStyleColor:(id)color;	// 0x312916f9
@end
