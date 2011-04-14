/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class OADPoint3D, OADVector3D;

__attribute__((visibility("hidden")))
@interface OADBackdrop : NSObject <NSCopying> {
@private
	OADPoint3D *mAnchor;	// 4 = 0x4
	OADVector3D *mNormal;	// 8 = 0x8
	OADVector3D *mUp;	// 12 = 0xc
}
@property(retain) id anchor;	// G=0x31abdeed; S=0x31abe365; converted property
@property(retain) id normal;	// G=0x31abdefd; S=0x31abe32d; converted property
@property(retain) id up;	// G=0x31abdf0d; S=0x31abe2f5; converted property
- (id)init;	// 0x31abdf4d
// converted property getter: - (id)anchor;	// 0x31abdeed
- (id)copyWithZone:(NSZone *)zone;	// 0x31abe39d
- (void)dealloc;	// 0x31abe431
- (unsigned)hash;	// 0x31abe299
- (BOOL)isEqual:(id)equal;	// 0x31abe1b1
// converted property getter: - (id)normal;	// 0x31abdefd
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x31abe365
// converted property setter: - (void)setNormal:(id)normal;	// 0x31abe32d
// converted property setter: - (void)setUp:(id)up;	// 0x31abe2f5
// converted property getter: - (id)up;	// 0x31abdf0d
@end
