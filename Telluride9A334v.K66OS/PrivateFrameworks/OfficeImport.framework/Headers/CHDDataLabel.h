/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties, EDResources;

__attribute__((visibility("hidden")))
@interface CHDDataLabel : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mStringIndex;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	int mPosition;	// 16 = 0x10
	bool mShowLeaderLines;	// 20 = 0x14
	bool mShowCategoryName;	// 21 = 0x15
	bool mShowSeriesName;	// 22 = 0x16
	bool mShowPercent;	// 23 = 0x17
	bool mShowValue;	// 24 = 0x18
	bool mShowLegendKey;	// 25 = 0x19
	bool mIsPositionAffineTransform;	// 26 = 0x1a
	double mRotation;	// 28 = 0x1c
	OADGraphicProperties *mGraphicProperties;	// 36 = 0x24
}
@property(retain) id contentFormat;	// G=0x357463c5; S=0x356e770d; converted property
@property(assign) unsigned contentFormatId;	// G=0x357463b5; S=0x356dcb3d; converted property
@property(retain) id graphicProperties;	// G=0x3574634d; S=0x35653145; converted property
@property(assign) bool isPositionAffineTransform;	// G=0x3574636d; S=0x3574635d; converted property
@property(assign) int position;	// G=0x357462ed; S=0x356cc155; converted property
@property(assign) double rotationAngle;	// G=0x3574637d; S=0x356cc2c5; converted property
@property(assign, getter=isShowCategoryName) bool showCategoryName;	// G=0x3574630d; S=0x35653115; converted property
@property(assign, getter=isShowLeaderLines) bool showLeaderLines;	// G=0x357462fd; S=0x35653105; converted property
@property(assign, getter=isShowLegendKey) bool showLegendKey;	// G=0x3574633d; S=0x356cc0f5; converted property
@property(assign, getter=isShowPercent) bool showPercent;	// G=0x3574632d; S=0x35653125; converted property
@property(assign, getter=isShowSeriesName) bool showSeriesName;	// G=0x3574631d; S=0x356cc105; converted property
@property(assign, getter=isShowValue) bool showValue;	// G=0x356cdec5; S=0x35653135; converted property
@property(retain) id string;	// G=0x3574640d; S=0x356cc165; converted property
@property(assign) unsigned stringIndex;	// G=0x35746395; S=0x357463a5; converted property
+ (id)dataLabelWithResources:(id)resources;	// 0x35652fbd
- (id)initWithResources:(id)resources;	// 0x35653009
// converted property getter: - (id)contentFormat;	// 0x357463c5
// converted property getter: - (unsigned)contentFormatId;	// 0x357463b5
- (void)dealloc;	// 0x3565be35
// converted property getter: - (id)graphicProperties;	// 0x3574634d
// converted property getter: - (bool)isPositionAffineTransform;	// 0x3574636d
// converted property getter: - (bool)isShowCategoryName;	// 0x3574630d
// converted property getter: - (bool)isShowLeaderLines;	// 0x357462fd
// converted property getter: - (bool)isShowLegendKey;	// 0x3574633d
// converted property getter: - (bool)isShowPercent;	// 0x3574632d
// converted property getter: - (bool)isShowSeriesName;	// 0x3574631d
// converted property getter: - (bool)isShowValue;	// 0x356cdec5
// converted property getter: - (int)position;	// 0x357462ed
// converted property getter: - (double)rotationAngle;	// 0x3574637d
// converted property setter: - (void)setContentFormat:(id)format;	// 0x356e770d
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x356dcb3d
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x35653145
// converted property setter: - (void)setIsPositionAffineTransform:(bool)transform;	// 0x3574635d
// converted property setter: - (void)setPosition:(int)position;	// 0x356cc155
// converted property setter: - (void)setRotationAngle:(double)angle;	// 0x356cc2c5
// converted property setter: - (void)setShowCategoryName:(bool)name;	// 0x35653115
// converted property setter: - (void)setShowLeaderLines:(bool)lines;	// 0x35653105
// converted property setter: - (void)setShowLegendKey:(bool)key;	// 0x356cc0f5
// converted property setter: - (void)setShowPercent:(bool)percent;	// 0x35653125
// converted property setter: - (void)setShowSeriesName:(bool)name;	// 0x356cc105
// converted property setter: - (void)setShowValue:(bool)value;	// 0x35653135
// converted property setter: - (void)setString:(id)string;	// 0x356cc165
// converted property setter: - (void)setStringIndex:(unsigned)index;	// 0x357463a5
// converted property getter: - (id)string;	// 0x3574640d
// converted property getter: - (unsigned)stringIndex;	// 0x35746395
@end

