/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDPath.h"


__attribute__((visibility("hidden")))
@interface GQDConnectionPath : GQDPath {
@private
	CGPoint mPoint;	// 8 = 0x8
	CGSize mSize;	// 16 = 0x10
}
- (CGPathRef)createBezierPath;	// 0x340382c9
- (CGPoint)point;	// 0x340380c9
- (CGSize)size;	// 0x340380e1
@end

