/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "OABFillPropertiesManager.h"
#import "OABColorPropertiesManager.h"

@protocol OABPropertiesManager;

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
- (long)fillAngle;
- (long)fillBgAlpha;
- (unsigned long)fillBlipID;
- (id)fillBlipName;
- (long)fillFgAlpha;
- (long)fillFocus;
- (long)fillFocusBottom;
- (long)fillFocusLeft;
- (long)fillFocusRight;
- (long)fillFocusTop;
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillType;
@end

__attribute__((visibility("hidden")))
@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {
@private
	EshFill *mFill;	// 4 = 0x4
	int mShapeType;	// 8 = 0x8
	id<OABPropertiesManager> mMasterManager;	// 12 = 0xc
}
- (id)initWithFill:(const EshFill *)fill shapeType:(int)type masterShape:(EshShape *)shape;	// 0x3273ede9
- (void)dealloc;	// 0x327b75b1
- (long)fillAngle;	// 0x3280134d
- (long)fillBgAlpha;	// 0x32801885
- (EshColor)fillBgColor;	// 0x3280141d
- (EshBlip *)fillBlipDataReference;	// 0x327fb5b5
- (unsigned long)fillBlipID;	// 0x327fb481
- (id)fillBlipName;	// 0x327fb509
- (long)fillFgAlpha;	// 0x327bda05
- (EshColor)fillFgColor;	// 0x327bd999
- (long)fillFocus;	// 0x328013b5
- (long)fillFocusBottom;	// 0x3287f3d5
- (long)fillFocusLeft;	// 0x3287f2c1
- (long)fillFocusRight;	// 0x3287f379
- (long)fillFocusTop;	// 0x3287f31d
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;	// 0x32801661
- (int)fillType;	// 0x3273f86d
- (BOOL)isFilled;	// 0x3273f921
- (BOOL)isStroked;	// 0x32a2f80d
- (EshColor)shadowColor;	// 0x32a2f811
- (EshColor)strokeBgColor;	// 0x32a2f839
- (EshColor)strokeFgColor;	// 0x32a2f861
@end

