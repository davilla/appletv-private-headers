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
- (id)initWithOutlineBullet:(id)outlineBullet;	// 0x32c0cb41
- (id)initWithSlideId:(unsigned long)slideId textType:(int)type placeholderIndex:(unsigned long)index;	// 0x32b89de5
- (id)copyWithZone:(NSZone *)zone;	// 0x32c0cba5
- (unsigned)hash;	// 0x32b89e3d
- (BOOL)isEqual:(id)equal;	// 0x32b98b6d
@end

