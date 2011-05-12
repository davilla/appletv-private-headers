/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface PBOutlineBulletKey : NSObject <NSCopying> {
@private
	unsigned mSlideId;	// 4 = 0x4
	int mTextType;	// 8 = 0x8
	unsigned mPlaceholderIndex;	// 12 = 0xc
}
- (id)initWithOutlineBullet:(id)outlineBullet;	// 0x344c2b41
- (id)initWithSlideId:(unsigned long)slideId textType:(int)type placeholderIndex:(unsigned long)index;	// 0x3443fde5
- (id)copyWithZone:(NSZone *)zone;	// 0x344c2ba5
- (unsigned)hash;	// 0x3443fe3d
- (BOOL)isEqual:(id)equal;	// 0x3444eb6d
@end

