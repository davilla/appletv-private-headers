/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CACodingProxy.h"


__attribute__((visibility("hidden")))
@interface LKNSValueCodingProxy : CACodingProxy {
	int _kind;	// 4 = 0x4
	union {
		CGPoint point;
		CGSize size;
		CGRect rect;
		CATransform3D transform;
		CAPoint3D point3d;
		CADoublePoint dpoint;
		CADoubleSize dsize;
		CADoubleRect drect;
		CAColorMatrix color_matrix;
	} _u;	// 8 = 0x8
}
- (id)initWithCoder:(id)coder;	// 0x320f8b4d
- (id)initWithObject:(id)object;	// 0x320f7f29
- (id).cxx_construct;	// 0x320f91dd
- (id)decodedObject;	// 0x320f82e5
- (void)encodeWithCoder:(id)coder;	// 0x320f8595
@end

