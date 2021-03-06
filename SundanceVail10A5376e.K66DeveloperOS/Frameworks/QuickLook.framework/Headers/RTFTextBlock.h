/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface RTFTextBlock : NSObject <NSCopying> {
	void *_propVals;	// 4 = 0x4
	unsigned _propMask;	// 8 = 0x8
	unsigned _typeMask;	// 12 = 0xc
	id _primParamVal;	// 16 = 0x10
	id _otherParamVals;	// 20 = 0x14
	void *_blockPrimary;	// 24 = 0x18
	void *_blockSecondary;	// 28 = 0x1c
}
@property(retain) id backgroundColor;	// G=0x32c52ff9; S=0x32c52fb5; converted property
@property(assign) unsigned verticalAlignment;	// G=0x32c52fa1; S=0x32c52f81; converted property
- (id)init;	// 0x32c52b51
- (id)_attributeDescription;	// 0x32c531bd
- (void)_createFloatStorage;	// 0x32c52b7d
- (void)_destroyFloatStorage;	// 0x32c52bc1
- (void)_setValue:(float)value type:(unsigned)type forParameter:(unsigned)parameter;	// 0x32c52c5d
- (void)_takeValuesFromTextBlock:(id)textBlock;	// 0x32c52d29
- (float)_valueForParameter:(unsigned)parameter;	// 0x32c52ce5
- (unsigned)_valueTypeForParameter:(unsigned)parameter;	// 0x32c52d0d
// converted property getter: - (id)backgroundColor;	// 0x32c52ff9
- (id)borderColorForEdge:(unsigned)edge;	// 0x32c53109
- (float)contentWidth;	// 0x32c52e85
- (unsigned)contentWidthValueType;	// 0x32c52e99
- (id)copyWithZone:(NSZone *)zone;	// 0x32c52dd9
- (void)dealloc;	// 0x32c52be9
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x32c52fb5
- (void)setBorderColor:(id)color;	// 0x32c53175
- (void)setBorderColor:(id)color forEdge:(unsigned)edge;	// 0x32c53009
- (void)setContentWidth:(float)width type:(unsigned)type;	// 0x32c52e61
- (void)setValue:(float)value type:(unsigned)type forDimension:(unsigned)dimension;	// 0x32c52e31
// converted property setter: - (void)setVerticalAlignment:(unsigned)alignment;	// 0x32c52f81
- (void)setWidth:(float)width type:(unsigned)type forLayer:(int)layer;	// 0x32c52f0d
- (void)setWidth:(float)width type:(unsigned)type forLayer:(int)layer edge:(unsigned)edge;	// 0x32c52ead
- (float)valueForDimension:(unsigned)dimension;	// 0x32c52e41
- (unsigned)valueTypeForDimension:(unsigned)dimension;	// 0x32c52e51
// converted property getter: - (unsigned)verticalAlignment;	// 0x32c52fa1
- (float)widthForLayer:(int)layer edge:(unsigned)edge;	// 0x32c52edd
- (unsigned)widthValueTypeForLayer:(int)layer edge:(unsigned)edge;	// 0x32c52ef5
@end

