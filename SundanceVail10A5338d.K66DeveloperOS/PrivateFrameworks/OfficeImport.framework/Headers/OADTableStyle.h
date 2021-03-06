/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString, OADTablePartStyle, OADTableBackground;

@interface OADTableStyle : NSObject {
	NSString *mName;	// 4 = 0x4
	NSString *mId;	// 8 = 0x8
	OADTableBackground *mBackground;	// 12 = 0xc
	OADTablePartStyle *mWholeTableStyle;	// 16 = 0x10
	OADTablePartStyle *mBand1HorzStyle;	// 20 = 0x14
	OADTablePartStyle *mBand2HorzStyle;	// 24 = 0x18
	OADTablePartStyle *mBand1VertStyle;	// 28 = 0x1c
	OADTablePartStyle *mBand2VertStyle;	// 32 = 0x20
	OADTablePartStyle *mFirstRowStyle;	// 36 = 0x24
	OADTablePartStyle *mFirstColumnStyle;	// 40 = 0x28
	OADTablePartStyle *mLastRowStyle;	// 44 = 0x2c
	OADTablePartStyle *mLastColumnStyle;	// 48 = 0x30
	OADTablePartStyle *mNorthEastStyle;	// 52 = 0x34
	OADTablePartStyle *mNorthWestStyle;	// 56 = 0x38
	OADTablePartStyle *mSouthEastStyle;	// 60 = 0x3c
	OADTablePartStyle *mSouthWestStyle;	// 64 = 0x40
}
@property(retain) id background;	// G=0x33ae6b81; S=0x33b04a71; converted property
@property(retain) id band1HorzStyle;	// G=0x33ae80d9; S=0x33a8ff71; converted property
@property(retain) id band1VertStyle;	// G=0x33ba79f1; S=0x33a90039; converted property
@property(retain) id band2HorzStyle;	// G=0x33ba79e1; S=0x33a8fff9; converted property
@property(retain) id band2VertStyle;	// G=0x33ba7a01; S=0x33a90079; converted property
@property(retain) id firstColumnStyle;	// G=0x33ba7a11; S=0x33a9016d; converted property
@property(retain) id firstRowStyle;	// G=0x33ae705d; S=0x33a901ed; converted property
@property(retain) id id;	// G=0x33ba78e5; S=0x33a8f0cd; converted property
@property(retain) id lastColumnStyle;	// G=0x33ba7a31; S=0x33a9012d; converted property
@property(retain) id lastRowStyle;	// G=0x33ba7a21; S=0x33a901ad; converted property
@property(retain) id name;	// G=0x33ba78d5; S=0x33a8f10d; converted property
@property(retain) id northEastStyle;	// G=0x33ba7a41; S=0x33b04b2d; converted property
@property(retain) id northWestStyle;	// G=0x33ba7a51; S=0x33b1a265; converted property
@property(retain) id southEastStyle;	// G=0x33ba7a61; S=0x33b04aad; converted property
@property(retain) id southWestStyle;	// G=0x33ba7a71; S=0x33b04aed; converted property
@property(retain) id wholeTableStyle;	// G=0x33ae7955; S=0x33a8ff31; converted property
// converted property getter: - (id)background;	// 0x33ae6b81
// converted property getter: - (id)band1HorzStyle;	// 0x33ae80d9
// converted property getter: - (id)band1VertStyle;	// 0x33ba79f1
// converted property getter: - (id)band2HorzStyle;	// 0x33ba79e1
// converted property getter: - (id)band2VertStyle;	// 0x33ba7a01
- (void)dealloc;	// 0x33a97211
// converted property getter: - (id)firstColumnStyle;	// 0x33ba7a11
// converted property getter: - (id)firstRowStyle;	// 0x33ae705d
// converted property getter: - (id)id;	// 0x33ba78e5
// converted property getter: - (id)lastColumnStyle;	// 0x33ba7a31
// converted property getter: - (id)lastRowStyle;	// 0x33ba7a21
// converted property getter: - (id)name;	// 0x33ba78d5
// converted property getter: - (id)northEastStyle;	// 0x33ba7a41
// converted property getter: - (id)northWestStyle;	// 0x33ba7a51
- (id)partStyle:(int)style;	// 0x33ba78f5
// converted property setter: - (void)setBackground:(id)background;	// 0x33b04a71
// converted property setter: - (void)setBand1HorzStyle:(id)style;	// 0x33a8ff71
// converted property setter: - (void)setBand1VertStyle:(id)style;	// 0x33a90039
// converted property setter: - (void)setBand2HorzStyle:(id)style;	// 0x33a8fff9
// converted property setter: - (void)setBand2VertStyle:(id)style;	// 0x33a90079
// converted property setter: - (void)setFirstColumnStyle:(id)style;	// 0x33a9016d
// converted property setter: - (void)setFirstRowStyle:(id)style;	// 0x33a901ed
// converted property setter: - (void)setId:(id)anId;	// 0x33a8f0cd
// converted property setter: - (void)setLastColumnStyle:(id)style;	// 0x33a9012d
// converted property setter: - (void)setLastRowStyle:(id)style;	// 0x33a901ad
// converted property setter: - (void)setName:(id)name;	// 0x33a8f10d
// converted property setter: - (void)setNorthEastStyle:(id)style;	// 0x33b04b2d
// converted property setter: - (void)setNorthWestStyle:(id)style;	// 0x33b1a265
// converted property setter: - (void)setSouthEastStyle:(id)style;	// 0x33b04aad
// converted property setter: - (void)setSouthWestStyle:(id)style;	// 0x33b04aed
// converted property setter: - (void)setWholeTableStyle:(id)style;	// 0x33a8ff31
// converted property getter: - (id)southEastStyle;	// 0x33ba7a61
// converted property getter: - (id)southWestStyle;	// 0x33ba7a71
// converted property getter: - (id)wholeTableStyle;	// 0x33ae7955
@end

