/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShade.h"


__attribute__((visibility("hidden")))
@interface OADLinearShade : OADShade {
@private
	float mAngle;	// 12 = 0xc
	BOOL mIsAngleOverridden;	// 16 = 0x10
	BOOL mScaled;	// 17 = 0x11
	BOOL mIsScaledOverridden;	// 18 = 0x12
}
@property(assign) float angle;	// G=0x32bf8081; S=0x32b8f1e5; converted property
@property(assign) BOOL scaled;	// G=0x32cd4ddd; S=0x32b8f1c9; converted property
+ (id)defaultProperties;	// 0x32b8f185
- (id)initWithDefaults;	// 0x32bf7835
// converted property getter: - (float)angle;	// 0x32bf8081
- (id)copyWithZone:(NSZone *)zone;	// 0x32c81be9
- (unsigned)hash;	// 0x32cd5975
- (BOOL)isAngleOverridden;	// 0x32bf80ad
- (BOOL)isEqual:(id)equal;	// 0x32cd5841
- (BOOL)isScaledOverridden;	// 0x32cd4da9
// converted property getter: - (BOOL)scaled;	// 0x32cd4ddd
// converted property setter: - (void)setAngle:(float)angle;	// 0x32b8f1e5
// converted property setter: - (void)setScaled:(BOOL)scaled;	// 0x32b8f1c9
@end

