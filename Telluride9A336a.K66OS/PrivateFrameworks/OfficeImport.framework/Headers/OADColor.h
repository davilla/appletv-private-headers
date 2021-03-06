/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : NSObject <NSCopying> {
@private
	NSMutableArray *mTransforms;	// 4 = 0x4
}
@property(retain) id transforms;	// G=0x34b85249; S=0x34ce8cc1; converted property
+ (id)basicMapOfColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x34b84a71
+ (id)colorWithRedByte:(unsigned char)redByte greenByte:(unsigned char)byte blueByte:(unsigned char)byte3;	// 0x34c4ca9d
+ (id)mapAdjustedColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x34c4c699
+ (int)mapSchemeColorID:(int)anId colorMap:(id)map;	// 0x34b84cd1
+ (id)nsColorWithOADColor:(id)oadcolor;	// 0x34e1d5d9
+ (id)nsColorWithOADColor:(id)oadcolor colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x34b84a05
+ (id)nsColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x34b84f01
- (void)addTransform:(id)transform;	// 0x34c4d4b9
- (void)addTransformOfType:(int)type;	// 0x34e1d575
- (void)addTransformOfType:(int)type value:(float)value;	// 0x34d5f525
- (id)colorForStyleColor:(id)styleColor;	// 0x34d4357d
- (id)copyWithZone:(NSZone *)zone;	// 0x34e1d561
- (void)dealloc;	// 0x34c04fa9
- (unsigned)hash;	// 0x34c04acd
- (BOOL)isEqual:(id)equal;	// 0x34c04aed
// converted property setter: - (void)setTransforms:(id)transforms;	// 0x34ce8cc1
// converted property getter: - (id)transforms;	// 0x34b85249
@end

