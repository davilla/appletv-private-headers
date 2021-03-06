/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADColor.h"


__attribute__((visibility("hidden")))
@interface OADIndexedColor : OADColor {
@private
	int mIndex;	// 8 = 0x8
}
+ (id)indexedColorWithIndex:(int)index;	// 0x32c31291
- (id)initWithIndex:(int)index;	// 0x32c2cb49
- (id)colorFromPalette:(id)palette;	// 0x32cd310d
- (id)copyWithZone:(NSZone *)zone;	// 0x32c330b1
- (unsigned)hash;	// 0x32cd3681
- (int)index;	// 0x32c3d35d
- (BOOL)isEqual:(id)equal;	// 0x32cd35e9
@end

