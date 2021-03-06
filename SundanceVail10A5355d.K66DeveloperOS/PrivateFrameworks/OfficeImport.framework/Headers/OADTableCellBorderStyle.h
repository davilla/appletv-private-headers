/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADStroke;

@interface OADTableCellBorderStyle : NSObject {
	OADStroke *mLeftStroke;	// 4 = 0x4
	OADStroke *mRightStroke;	// 8 = 0x8
	OADStroke *mTopStroke;	// 12 = 0xc
	OADStroke *mBottomStroke;	// 16 = 0x10
	OADStroke *mHorzInsideStroke;	// 20 = 0x14
	OADStroke *mVertInsideStroke;	// 24 = 0x18
	OADStroke *mTopLeftToBottomRightStroke;	// 28 = 0x1c
	OADStroke *mBottomLeftToTopRightStroke;	// 32 = 0x20
}
@property(retain) id bottomLeftToTopRightStroke;	// G=0x31dd556d; S=0x31dd557d; converted property
@property(retain) id bottomStroke;	// G=0x31d162e5; S=0x31cbdfa1; converted property
@property(retain) id horzInsideStroke;	// G=0x31d162f5; S=0x31cbdfdd; converted property
@property(retain) id leftStroke;	// G=0x31d16315; S=0x31cbdeed; converted property
@property(retain) id rightStroke;	// G=0x31d16335; S=0x31cbdf29; converted property
@property(retain) id topLeftToBottomRightStroke;	// G=0x31dd5521; S=0x31dd5531; converted property
@property(retain) id topStroke;	// G=0x31d162c5; S=0x31cbdf65; converted property
@property(retain) id vertInsideStroke;	// G=0x31d16345; S=0x31cbe019; converted property
+ (id)defaultAxisParallelStroke;	// 0x31dd55b9
+ (id)defaultObliqueStroke;	// 0x31dd5615
+ (id)defaultStyle;	// 0x31dd5631
- (void)applyOverridesFrom:(id)from;	// 0x31dd5909
// converted property getter: - (id)bottomLeftToTopRightStroke;	// 0x31dd556d
// converted property getter: - (id)bottomStroke;	// 0x31d162e5
- (void)dealloc;	// 0x31cc5dd9
// converted property getter: - (id)horzInsideStroke;	// 0x31d162f5
// converted property getter: - (id)leftStroke;	// 0x31d16315
// converted property getter: - (id)rightStroke;	// 0x31d16335
// converted property setter: - (void)setBottomLeftToTopRightStroke:(id)topRightStroke;	// 0x31dd557d
// converted property setter: - (void)setBottomStroke:(id)stroke;	// 0x31cbdfa1
// converted property setter: - (void)setHorzInsideStroke:(id)stroke;	// 0x31cbdfdd
// converted property setter: - (void)setLeftStroke:(id)stroke;	// 0x31cbdeed
// converted property setter: - (void)setRightStroke:(id)stroke;	// 0x31cbdf29
// converted property setter: - (void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;	// 0x31dd5531
// converted property setter: - (void)setTopStroke:(id)stroke;	// 0x31cbdf65
// converted property setter: - (void)setVertInsideStroke:(id)stroke;	// 0x31cbe019
- (id)shallowCopy;	// 0x31dd57a1
- (id)stroke:(int)stroke;	// 0x31dd5489
// converted property getter: - (id)topLeftToBottomRightStroke;	// 0x31dd5521
// converted property getter: - (id)topStroke;	// 0x31d162c5
// converted property getter: - (id)vertInsideStroke;	// 0x31d16345
@end

