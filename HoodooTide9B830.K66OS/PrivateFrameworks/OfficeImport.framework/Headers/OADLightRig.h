/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADLightRig : NSObject <NSCopying> {
@private
	OADRotation3D *mRotation;	// 4 = 0x4
	int mType;	// 8 = 0x8
	int mDirection;	// 12 = 0xc
}
@property(assign) int direction;	// G=0x3139174d; S=0x312afaa9; converted property
@property(retain) id rotation;	// G=0x3139172d; S=0x312af9a9; converted property
@property(assign) int type;	// G=0x3139173d; S=0x312afa41; converted property
- (id)init;	// 0x312af94d
- (id)copyWithZone:(NSZone *)zone;	// 0x31391b31
- (void)dealloc;	// 0x312b4761
// converted property getter: - (int)direction;	// 0x3139174d
- (unsigned)hash;	// 0x31391ae9
- (BOOL)isEqual:(id)equal;	// 0x31391a09
// converted property getter: - (id)rotation;	// 0x3139172d
// converted property setter: - (void)setDirection:(int)direction;	// 0x312afaa9
// converted property setter: - (void)setRotation:(id)rotation;	// 0x312af9a9
// converted property setter: - (void)setType:(int)type;	// 0x312afa41
// converted property getter: - (int)type;	// 0x3139173d
@end

