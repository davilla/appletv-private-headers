/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADGlowEffect : OADEffect {
	OADColor *mColor;	// 8 = 0x8
	float mRadius;	// 12 = 0xc
}
@property(retain) id color;	// G=0x37149031; S=0x370abe31; converted property
@property(assign) float radius;	// G=0x37149041; S=0x370abe21; converted property
- (id)init;	// 0x370abd5d
// converted property getter: - (id)color;	// 0x37149031
- (id)copyWithZone:(NSZone *)zone;	// 0x370abe6d
- (void)dealloc;	// 0x370ac64d
- (unsigned)hash;	// 0x37149051
- (BOOL)isEqual:(id)equal;	// 0x370c9219
// converted property getter: - (float)radius;	// 0x37149041
// converted property setter: - (void)setColor:(id)color;	// 0x370abe31
// converted property setter: - (void)setRadius:(float)radius;	// 0x370abe21
@end
