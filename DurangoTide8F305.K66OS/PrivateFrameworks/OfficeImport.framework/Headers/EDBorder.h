/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDColorReference, EDResources;

__attribute__((visibility("hidden")))
@interface EDBorder : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mDiagonalType;	// 16 = 0x10
}
@property(assign) int diagonalType;	// G=0x34571925; S=0x345a66e5; converted property
@property(assign) int type;	// G=0x343c33b1; S=0x345a66d5; converted property
+ (id)borderWithType:(int)type color:(id)color diagonalType:(int)type3 resources:(id)resources;	// 0x345a6721
+ (id)borderWithType:(int)type color:(id)color resources:(id)resources;	// 0x345a6751
+ (id)borderWithType:(int)type colorReference:(id)reference diagonalType:(int)type3 resources:(id)resources;	// 0x344b8139
+ (id)borderWithType:(int)type colorReference:(id)reference resources:(id)resources;	// 0x343b7251
+ (id)borderWithType:(int)type resources:(id)resources;	// 0x343b7289
- (id)initWithResources:(id)resources;	// 0x343b72d9
- (id)color;	// 0x343c34cd
- (id)colorReference;	// 0x34571915
- (void)dealloc;	// 0x343bce25
// converted property getter: - (int)diagonalType;	// 0x34571925
- (unsigned)hash;	// 0x345a66f5
- (BOOL)isEqual:(id)equal;	// 0x344b82b9
- (BOOL)isEqualToBorder:(id)border;	// 0x344b830d
// converted property setter: - (void)setDiagonalType:(int)type;	// 0x345a66e5
// converted property setter: - (void)setType:(int)type;	// 0x345a66d5
// converted property getter: - (int)type;	// 0x343c33b1
@end

