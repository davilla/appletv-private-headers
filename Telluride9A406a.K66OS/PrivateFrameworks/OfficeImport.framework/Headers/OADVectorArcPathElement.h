/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADVectorArcPathElement : OADPathElement {
@private
	OADAdjustCoord mLeft;	// 4 = 0x4
	OADAdjustCoord mTop;	// 12 = 0xc
	OADAdjustCoord mRight;	// 20 = 0x14
	OADAdjustCoord mBottom;	// 28 = 0x1c
	OADAdjustPoint mStartVector;	// 36 = 0x24
	OADAdjustPoint mEndVector;	// 52 = 0x34
	BOOL mClockwise;	// 68 = 0x44
	BOOL mConnectedToPrevious;	// 69 = 0x45
}
- (id)initWithLeft:(OADAdjustCoord)left top:(OADAdjustCoord)top right:(OADAdjustCoord)right bottom:(OADAdjustCoord)bottom startVector:(OADAdjustPoint)vector endVector:(OADAdjustPoint)vector6 clockwise:(BOOL)clockwise connectedToPrevious:(BOOL)previous;	// 0x3296a3b5
- (OADAdjustCoord)bottom;	// 0x32ac20e1
- (BOOL)clockwise;	// 0x32ac2145
- (BOOL)connectedToPrevious;	// 0x32ac2155
- (OADAdjustPoint)endVector;	// 0x32ac2121
- (OADAdjustCoord)left;	// 0x32ac208d
- (OADAdjustCoord)right;	// 0x32ac20c5
- (OADAdjustPoint)startVector;	// 0x32ac20fd
- (OADAdjustCoord)top;	// 0x32ac20a9
@end
