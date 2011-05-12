/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class OADStyleMatrixReference, OADFontReference;

__attribute__((visibility("hidden")))
@interface OADShapeStyle : NSObject <NSCopying> {
@private
	OADStyleMatrixReference *mLineReference;	// 4 = 0x4
	OADStyleMatrixReference *mFillReference;	// 8 = 0x8
	OADStyleMatrixReference *mEffectReference;	// 12 = 0xc
	OADFontReference *mFontReference;	// 16 = 0x10
}
@property(retain) id effectReference;	// G=0x3458ed59; S=0x34532485; converted property
@property(retain) id fillReference;	// G=0x34545ea9; S=0x3453244d; converted property
@property(retain) id fontReference;	// G=0x34553f79; S=0x345324bd; converted property
@property(retain) id lineReference;	// G=0x34545ec9; S=0x345323f9; converted property
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix;	// 0x345324f5
- (void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix useNull:(BOOL)null strokeWidthMultiplier:(float)multiplier;	// 0x34532521
- (void)applyToParagraphProperties:(id)paragraphProperties;	// 0x34534755
- (void)applyToTextBody:(id)textBody;	// 0x345346bd
- (void)applyToTextListStyle:(id)textListStyle;	// 0x34538111
- (id)copyWithZone:(NSZone *)zone;	// 0x34545b21
- (void)dealloc;	// 0x345329f5
// converted property getter: - (id)effectReference;	// 0x3458ed59
// converted property getter: - (id)fillReference;	// 0x34545ea9
// converted property getter: - (id)fontReference;	// 0x34553f79
// converted property getter: - (id)lineReference;	// 0x34545ec9
- (void)setEffectMatrixIndex:(unsigned long)index color:(id)color;	// 0x3458ed69
// converted property setter: - (void)setEffectReference:(id)reference;	// 0x34532485
- (void)setFillMatrixIndex:(unsigned long)index color:(id)color;	// 0x34558099
// converted property setter: - (void)setFillReference:(id)reference;	// 0x3453244d
// converted property setter: - (void)setFontReference:(id)reference;	// 0x345324bd
- (void)setLineMatrixIndex:(unsigned long)index color:(id)color;	// 0x3455823d
// converted property setter: - (void)setLineReference:(id)reference;	// 0x345323f9
@end

