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
@property(assign) int direction;	// G=0x34595edd; S=0x3453b899; converted property
@property(retain) id rotation;	// G=0x34595ebd; S=0x3453b7a1; converted property
@property(assign) int type;	// G=0x34595ecd; S=0x3453b831; converted property
- (id)init;	// 0x3453b74d
- (id)copyWithZone:(NSZone *)zone;	// 0x345965ad
- (void)dealloc;	// 0x3453bf7d
// converted property getter: - (int)direction;	// 0x34595edd
- (unsigned)hash;	// 0x3459656d
- (BOOL)isEqual:(id)equal;	// 0x3459649d
// converted property getter: - (id)rotation;	// 0x34595ebd
// converted property setter: - (void)setDirection:(int)direction;	// 0x3453b899
// converted property setter: - (void)setRotation:(id)rotation;	// 0x3453b7a1
// converted property setter: - (void)setType:(int)type;	// 0x3453b831
// converted property getter: - (int)type;	// 0x34595ecd
@end
