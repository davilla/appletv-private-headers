/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDPath.h"


__attribute__((visibility("hidden")))
@interface GQDPointPath : GQDPath {
@private
	int mType;	// 8 = 0x8
	CGPoint mPoint;	// 12 = 0xc
	CGSize mSize;	// 20 = 0x14
}
- (CGPathRef)createBezierPath;	// 0x317ec081
- (int)mapStrType:(CFStringRef)type;	// 0x317ec509
- (CGPoint)point;	// 0x317ebe65
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x317ec4ad
- (CGSize)size;	// 0x317ebe7d
- (int)type;	// 0x317ebe55
@end

