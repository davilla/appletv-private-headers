/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"

@class OADTextWarp, OADTextBodyAutoFit;

__attribute__((visibility("hidden")))
@interface OADTextBodyProperties : OADProperties {
@private
	OADTextBodyAutoFit *mAutoFit;	// 12 = 0xc
	OADTextWarp *mTextWarp;	// 16 = 0x10
	double mTopInset;	// 20 = 0x14
	double mLeftInset;	// 28 = 0x1c
	double mBottomInset;	// 36 = 0x24
	double mRightInset;	// 44 = 0x2c
	double mRotation;	// 52 = 0x34
	double mColumnSpacing;	// 60 = 0x3c
	unsigned short mColumnCount;	// 68 = 0x44
	unsigned short mTextBodyId;	// 70 = 0x46
	unsigned char mTextAnchorType;	// 72 = 0x48
	unsigned char mVerticalType;	// 73 = 0x49
	unsigned char mWrapType;	// 74 = 0x4a
	unsigned char mVerticalOverflowType;	// 75 = 0x4b
	unsigned char mHorizontalOverflowType;	// 76 = 0x4c
	unsigned mRepectFirstLastParagraphSpacing : 1;	// 77 = 0x4d
	unsigned mIsUpright : 1;	// 77 = 0x4d
	unsigned mIsAnchorCenter : 1;	// 77 = 0x4d
	unsigned mIsLeftToRightColumns : 1;	// 77 = 0x4d
	unsigned mHasVerticalOverflowType : 1;	// 77 = 0x4d
	unsigned mHasHorizontalOverflowType : 1;	// 77 = 0x4d
	unsigned mHasTextBodyId : 1;	// 77 = 0x4d
	unsigned mHasVerticalType : 1;	// 77 = 0x4d
	unsigned mHasWrapType : 1;	// 78 = 0x4e
	unsigned mHasTextAnchorType : 1;	// 78 = 0x4e
	unsigned mHasIsAnchorCenter : 1;	// 78 = 0x4e
	unsigned mHasIsUpright : 1;	// 78 = 0x4e
	unsigned mHasRotation : 1;	// 78 = 0x4e
	unsigned mHasColumnCount : 1;	// 78 = 0x4e
	unsigned mHasColumnSpacing : 1;	// 78 = 0x4e
	unsigned mHasIsLeftToRightColumns : 1;	// 78 = 0x4e
	unsigned mHasRepectFirstLastParagraphSpacing : 1;	// 79 = 0x4f
	unsigned mHasTopInset : 1;	// 79 = 0x4f
	unsigned mHasLeftInset : 1;	// 79 = 0x4f
	unsigned mHasRightInset : 1;	// 79 = 0x4f
	unsigned mHasBottomInset : 1;	// 79 = 0x4f
}
@property(retain) id autoFit;	// G=0x31973b79; S=0x3196d511; converted property
@property(assign) double bottomInset;	// G=0x31960c19; S=0x3196d335; converted property
@property(assign) int columnCount;	// G=0x31973b4d; S=0x3196d35d; converted property
@property(assign) double columnSpacing;	// G=0x3197017d; S=0x3196d385; converted property
@property(assign) int horizontalOverflowType;	// G=0x31ab9a1d; S=0x3196c14d; converted property
@property(assign) BOOL isAnchorCenter;	// G=0x31973c41; S=0x3196d639; converted property
@property(assign) BOOL isLeftToRightColumns;	// G=0x319701a9; S=0x3196d44d; converted property
@property(assign) BOOL isUpright;	// G=0x319700f1; S=0x3196c011; converted property
@property(assign) double leftInset;	// G=0x31960bb5; S=0x3196d2b1; converted property
@property(assign) BOOL respectLastFirstLineSpacing;	// G=0x31ab9a81; S=0x319eb725; converted property
@property(assign) double rightInset;	// G=0x31960c7d; S=0x3196d2dd; converted property
@property(assign) double rotation;	// G=0x31973c71; S=0x3196d3fd; converted property
@property(assign) int textAnchorType;	// G=0x3195cb25; S=0x3196d5e9; converted property
@property(assign) int textBodyId;	// G=0x31ab8f49; S=0x31ab8f59; converted property
@property(retain) id textWarp;	// G=0x319ebf0d; S=0x319eb761; converted property
@property(assign) double topInset;	// G=0x31960b51; S=0x3196d309; converted property
@property(assign) int verticalOverflowType;	// G=0x3197000d; S=0x3196c16d; converted property
@property(assign) int verticalType;	// G=0x3196ff71; S=0x3196c0fd; converted property
@property(assign) int wrapType;	// G=0x31973c15; S=0x3196d57d; converted property
+ (id)defaultEscherWordArtProperties;	// 0x319eb501
+ (id)defaultProperties;	// 0x31963435
- (id)init;	// 0x31963409
- (id)initWithDefaults;	// 0x31a95f8d
// converted property getter: - (id)autoFit;	// 0x31973b79
// converted property getter: - (double)bottomInset;	// 0x31960c19
// converted property getter: - (int)columnCount;	// 0x31973b4d
// converted property getter: - (double)columnSpacing;	// 0x3197017d
- (void)dealloc;	// 0x318f199d
- (BOOL)hasAutoFit;	// 0x3196ff09
- (BOOL)hasBottomInset;	// 0x31960be1
- (BOOL)hasColumnCount;	// 0x3196fe65
- (BOOL)hasColumnSpacing;	// 0x3196fe9d
- (BOOL)hasHorizontalOverflowType;	// 0x31ab9a49
- (BOOL)hasIsAnchorCenter;	// 0x31970081
- (BOOL)hasIsLeftToRightColumns;	// 0x3196fed5
- (BOOL)hasIsUpright;	// 0x319700b9
- (BOOL)hasLeftInset;	// 0x31960b7d
- (BOOL)hasRespectLastFirstLineSpacing;	// 0x3196fe2d
- (BOOL)hasRightInset;	// 0x31960c45
- (BOOL)hasRotation;	// 0x31970121
- (BOOL)hasTextAnchorType;	// 0x3195cb51
- (BOOL)hasTextBodyId;	// 0x31970039
- (BOOL)hasTextWarp;	// 0x3197004d
- (BOOL)hasTopInset;	// 0x31960b19
- (BOOL)hasVerticalOverflowType;	// 0x3196ffd5
- (BOOL)hasVerticalType;	// 0x3196ff3d
- (BOOL)hasWrapType;	// 0x3196ff9d
- (unsigned)hash;	// 0x31ab9851
// converted property getter: - (int)horizontalOverflowType;	// 0x31ab9a1d
// converted property getter: - (BOOL)isAnchorCenter;	// 0x31973c41
- (BOOL)isEqual:(id)equal;	// 0x31ab9015
// converted property getter: - (BOOL)isLeftToRightColumns;	// 0x319701a9
// converted property getter: - (BOOL)isUpright;	// 0x319700f1
// converted property getter: - (double)leftInset;	// 0x31960bb5
- (void)removeUnnecessaryOverrides;	// 0x3196f571
// converted property getter: - (BOOL)respectLastFirstLineSpacing;	// 0x31ab9a81
// converted property getter: - (double)rightInset;	// 0x31960c7d
// converted property getter: - (double)rotation;	// 0x31973c71
// converted property setter: - (void)setAutoFit:(id)fit;	// 0x3196d511
// converted property setter: - (void)setBottomInset:(double)inset;	// 0x3196d335
// converted property setter: - (void)setColumnCount:(int)count;	// 0x3196d35d
// converted property setter: - (void)setColumnSpacing:(double)spacing;	// 0x3196d385
// converted property setter: - (void)setHorizontalOverflowType:(int)type;	// 0x3196c14d
// converted property setter: - (void)setIsAnchorCenter:(BOOL)center;	// 0x3196d639
// converted property setter: - (void)setIsLeftToRightColumns:(BOOL)rightColumns;	// 0x3196d44d
// converted property setter: - (void)setIsUpright:(BOOL)upright;	// 0x3196c011
// converted property setter: - (void)setLeftInset:(double)inset;	// 0x3196d2b1
// converted property setter: - (void)setRespectLastFirstLineSpacing:(BOOL)spacing;	// 0x319eb725
// converted property setter: - (void)setRightInset:(double)inset;	// 0x3196d2dd
// converted property setter: - (void)setRotation:(double)rotation;	// 0x3196d3fd
// converted property setter: - (void)setTextAnchorType:(int)type;	// 0x3196d5e9
// converted property setter: - (void)setTextBodyId:(int)anId;	// 0x31ab8f59
// converted property setter: - (void)setTextWarp:(id)warp;	// 0x319eb761
// converted property setter: - (void)setTopInset:(double)inset;	// 0x3196d309
// converted property setter: - (void)setVerticalOverflowType:(int)type;	// 0x3196c16d
// converted property setter: - (void)setVerticalType:(int)type;	// 0x3196c0fd
// converted property setter: - (void)setWrapType:(int)type;	// 0x3196d57d
// converted property getter: - (int)textAnchorType;	// 0x3195cb25
// converted property getter: - (int)textBodyId;	// 0x31ab8f49
// converted property getter: - (id)textWarp;	// 0x319ebf0d
// converted property getter: - (double)topInset;	// 0x31960b51
// converted property getter: - (int)verticalOverflowType;	// 0x3197000d
// converted property getter: - (int)verticalType;	// 0x3196ff71
// converted property getter: - (int)wrapType;	// 0x31973c15
@end
