/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ODDFillColorList : NSObject {
@private
	NSArray *mColors;	// 4 = 0x4
	int mHueDirection;	// 8 = 0x8
	int mMethod;	// 12 = 0xc
}
- (id)colorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;	// 0x32c8fde5
- (id)cycleColorAtIndex:(unsigned)index;	// 0x32cc11d1
- (void)dealloc;	// 0x32c90d81
- (void)getComponentsForIndex:(unsigned)index hue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness state:(id)state;	// 0x32ce18e1
- (id)repeatColorAtIndex:(unsigned)index;	// 0x32c8fe65
- (void)setColors:(id)colors;	// 0x32c8b335
- (void)setHueDirection:(int)direction;	// 0x32c8b289
- (void)setMethod:(int)method;	// 0x32c8b325
- (id)spanColorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;	// 0x32cb42c5
@end

