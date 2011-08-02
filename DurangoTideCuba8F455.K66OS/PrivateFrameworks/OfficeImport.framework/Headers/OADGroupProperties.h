/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties3DParent.h"
#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class OADScene3D, OADFill, OADShape3D, NSArray;

__attribute__((visibility("hidden")))
@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
@private
	OADFill *mFill;	// 28 = 0x1c
	NSArray *mEffects;	// 32 = 0x20
	OADScene3D *mScene3D;	// 36 = 0x24
	OADShape3D *mShape3D;	// 40 = 0x28
}
@property(retain) id effects;	// G=0x32cd6281; S=0x32bf7ad1; converted property
@property(retain) id fill;	// G=0x32c7d4a1; S=0x32bf7a99; converted property
@property(retain) id scene3D;	// G=0x32cd6221; S=0x32bf7b4d; converted property
@property(retain) id shape3D;	// G=0x32cd61c1; S=0x32bf7bd9; converted property
+ (id)defaultProperties;	// 0x32b8e58d
- (id)initWithDefaults;	// 0x32bf7889
- (void)dealloc;	// 0x32ba8f1d
// converted property getter: - (id)effects;	// 0x32cd6281
// converted property getter: - (id)fill;	// 0x32c7d4a1
- (BOOL)hasEffects;	// 0x32cd624d
- (BOOL)hasFill;	// 0x32c7d4cd
- (BOOL)hasScene3D;	// 0x32cd61ed
- (BOOL)hasShape3D;	// 0x32cd618d
// converted property getter: - (id)scene3D;	// 0x32cd6221
// converted property setter: - (void)setEffects:(id)effects;	// 0x32bf7ad1
// converted property setter: - (void)setFill:(id)fill;	// 0x32bf7a99
// converted property setter: - (void)setScene3D:(id)d;	// 0x32bf7b4d
// converted property setter: - (void)setShape3D:(id)d;	// 0x32bf7bd9
// converted property getter: - (id)shape3D;	// 0x32cd61c1
@end

