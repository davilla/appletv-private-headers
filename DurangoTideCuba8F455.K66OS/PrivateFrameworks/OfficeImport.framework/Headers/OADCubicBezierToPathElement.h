/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADCubicBezierToPathElement : OADPathElement {
@private
	OADAdjustPoint mControlPoint1;	// 4 = 0x4
	OADAdjustPoint mControlPoint2;	// 20 = 0x14
	OADAdjustPoint mToPoint;	// 36 = 0x24
	BOOL mRelative;	// 52 = 0x34
}
@property(assign) BOOL relative;	// G=0x32cd7b01; S=0x32c1538d; converted property
- (id)initWithControlPoint1:(OADAdjustPoint)controlPoint1 controlPoint2:(OADAdjustPoint)a2 toPoint:(OADAdjustPoint)point;	// 0x32c15309
- (OADAdjustPoint)controlPoint1;	// 0x32c158fd
- (OADAdjustPoint)controlPoint2;	// 0x32c15919
// converted property getter: - (BOOL)relative;	// 0x32cd7b01
// converted property setter: - (void)setRelative:(BOOL)relative;	// 0x32c1538d
- (OADAdjustPoint)toPoint;	// 0x32c158e1
@end

