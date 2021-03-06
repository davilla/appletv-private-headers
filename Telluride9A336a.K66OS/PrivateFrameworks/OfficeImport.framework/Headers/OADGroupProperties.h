/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties3DParent.h"
#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class OADScene3D, OADFill, NSArray, OADShape3D;

__attribute__((visibility("hidden")))
@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
@private
	OADFill *mFill;	// 28 = 0x1c
	NSArray *mEffects;	// 32 = 0x20
	OADScene3D *mScene3D;	// 36 = 0x24
	OADShape3D *mShape3D;	// 40 = 0x28
}
@property(retain) id effects;	// G=0x34e213f1; S=0x34c4bcdd; converted property
@property(retain) id fill;	// G=0x34d391cd; S=0x34c4bc9d; converted property
@property(retain) id scene3D;	// G=0x34e21389; S=0x34c4bd1d; converted property
@property(retain) id shape3D;	// G=0x34e21321; S=0x34c4bd5d; converted property
+ (id)defaultProperties;	// 0x34c4bb25
- (id)initWithDefaults;	// 0x34c4bb6d
- (void)dealloc;	// 0x34c4e4c9
// converted property getter: - (id)effects;	// 0x34e213f1
// converted property getter: - (id)fill;	// 0x34d391cd
- (BOOL)hasEffects;	// 0x34e213b9
- (BOOL)hasFill;	// 0x34d391fd
- (BOOL)hasScene3D;	// 0x34e21351
- (BOOL)hasShape3D;	// 0x34e212e9
// converted property getter: - (id)scene3D;	// 0x34e21389
// converted property setter: - (void)setEffects:(id)effects;	// 0x34c4bcdd
// converted property setter: - (void)setFill:(id)fill;	// 0x34c4bc9d
// converted property setter: - (void)setScene3D:(id)d;	// 0x34c4bd1d
// converted property setter: - (void)setShape3D:(id)d;	// 0x34c4bd5d
// converted property getter: - (id)shape3D;	// 0x34e21321
@end

