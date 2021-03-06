/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {
	WDTableProperties *mTableProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_98qQxD mOriginalProperties;	// 16 = 0x10
	XXStruct_98qQxD mTrackedProperties;	// 44 = 0x2c
}
@property(assign) BOOL header;	// G=0x371b9405; S=0x3704b87d; converted property
@property(assign) long height;	// G=0x3704cb0d; S=0x3704b9bd; converted property
@property(assign) int heightType;	// G=0x371b92d9; S=0x3704b96d; converted property
@property(assign) int resolveMode;	// G=0x371b8d99; S=0x3704a041; converted property
@property(assign) short widthAfter;	// G=0x371b9081; S=0x37051d15; converted property
@property(assign) int widthAfterType;	// G=0x371b91ad; S=0x37051d65; converted property
@property(assign) short widthBefore;	// G=0x371b8e29; S=0x37051325; converted property
@property(assign) int widthBeforeType;	// G=0x371b8f55; S=0x37051375; converted property
- (id)init;	// 0x371b8d59
- (id)initWithDocument:(id)document;	// 0x36fdf25d
- (id).cxx_construct;	// 0x36fdf259
- (void)addProperties:(id)properties;	// 0x371b8de1
- (void)addPropertiesValues:(XXStruct_98qQxD *)values to:(XXStruct_98qQxD *)to;	// 0x371b9655
- (id)characterProperties;	// 0x36ffe361
- (id)copyWithZone:(NSZone *)zone;	// 0x371b953d
- (void)dealloc;	// 0x37002321
// converted property getter: - (BOOL)header;	// 0x371b9405
// converted property getter: - (long)height;	// 0x3704cb0d
// converted property getter: - (int)heightType;	// 0x371b92d9
- (BOOL)isHeaderOverridden;	// 0x371b9499
- (BOOL)isHeightOverridden;	// 0x36ffe601
- (BOOL)isHeightTypeOverridden;	// 0x371b9365
- (BOOL)isWidthAfterOverridden;	// 0x371b910d
- (BOOL)isWidthAfterTypeOverridden;	// 0x371b9239
- (BOOL)isWidthBeforeOverridden;	// 0x371b8eb5
- (BOOL)isWidthBeforeTypeOverridden;	// 0x371b8fe1
// converted property getter: - (int)resolveMode;	// 0x371b8d99
// converted property setter: - (void)setHeader:(BOOL)header;	// 0x3704b87d
// converted property setter: - (void)setHeight:(long)height;	// 0x3704b9bd
// converted property setter: - (void)setHeightType:(int)type;	// 0x3704b96d
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x3704a041
// converted property setter: - (void)setWidthAfter:(short)after;	// 0x37051d15
// converted property setter: - (void)setWidthAfterType:(int)type;	// 0x37051d65
// converted property setter: - (void)setWidthBefore:(short)before;	// 0x37051325
// converted property setter: - (void)setWidthBeforeType:(int)type;	// 0x37051375
- (id)tableProperties;	// 0x36fdf4e1
// converted property getter: - (short)widthAfter;	// 0x371b9081
// converted property getter: - (int)widthAfterType;	// 0x371b91ad
// converted property getter: - (short)widthBefore;	// 0x371b8e29
// converted property getter: - (int)widthBeforeType;	// 0x371b8f55
@end

