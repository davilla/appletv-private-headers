/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADToPointPathElement : OADPathElement {
@private
	OADAdjustPoint mToPoint;	// 4 = 0x4
	BOOL mRelative;	// 20 = 0x14
}
@property(assign) BOOL relative;	// G=0x32cd7ae1; S=0x32b7d605; converted property
- (id)initWithToPoint:(OADAdjustPoint)point;	// 0x32b7d5ad
// converted property getter: - (BOOL)relative;	// 0x32cd7ae1
// converted property setter: - (void)setRelative:(BOOL)relative;	// 0x32b7d605
- (OADAdjustPoint)toPoint;	// 0x32ba4289
@end

