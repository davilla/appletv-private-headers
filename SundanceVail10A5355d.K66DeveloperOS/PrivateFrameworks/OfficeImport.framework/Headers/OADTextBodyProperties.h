/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"

@class OADTextBodyAutoFit, OADTextWarp;

@interface OADTextBodyProperties : OADProperties {
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
	unsigned char mFlowType;	// 73 = 0x49
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
	unsigned mHasFlowType : 1;	// 77 = 0x4d
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
@property(retain) id autoFit;	// G=0x31bf07c5; S=0x31b9ceed; converted property
@property(assign) double bottomInset;	// G=0x31bf060d; S=0x31b9cdc5; converted property
@property(assign) int columnCount;	// G=0x31bf067d; S=0x31b9ce1d; converted property
@property(assign) double columnSpacing;	// G=0x31bf06e9; S=0x31b9ce41; converted property
@property(assign) int flowType;	// G=0x31bf08b5; S=0x31b9cf2d; converted property
@property(assign) int horizontalOverflowType;	// G=0x31dd6a19; S=0x31b9cf99; converted property
@property(assign) BOOL isAnchorCenter;	// G=0x31bf0a45; S=0x31b9d001; converted property
@property(assign) BOOL isLeftToRightColumns;	// G=0x31bf075d; S=0x31b9ce71; converted property
@property(assign) BOOL isUpright;	// G=0x31bf0b19; S=0x31b9d065; converted property
@property(assign) double leftInset;	// G=0x31bf0521; S=0x31b9cd99; converted property
@property(assign) BOOL respectLastFirstLineSpacing;	// G=0x31dd69ad; S=0x31b9cd39; converted property
@property(assign) double rightInset;	// G=0x31bf0599; S=0x31b9cdf1; converted property
@property(assign) double rotation;	// G=0x31bf0b85; S=0x31b9d09d; converted property
@property(assign) int textAnchorType;	// G=0x31bf0ab1; S=0x31b9d039; converted property
@property(assign) int textBodyId;	// G=0x31dd6a49; S=0x31dd6a59; converted property
@property(retain) id textWarp;	// G=0x31d2d161; S=0x31b9cfc1; converted property
@property(assign) double topInset;	// G=0x31bf04ad; S=0x31b9cd6d; converted property
@property(assign) int verticalOverflowType;	// G=0x31bf098d; S=0x31b9cf75; converted property
@property(assign) int wrapType;	// G=0x31bf0921; S=0x31b9cf51; converted property
+ (id)defaultEscherWordArtProperties;	// 0x31c4adc9
+ (id)defaultProperties;	// 0x31b9cac5
- (id)init;	// 0x31b9ca95
- (id)initWithDefaults;	// 0x31b9cb11
// converted property getter: - (id)autoFit;	// 0x31bf07c5
// converted property getter: - (double)bottomInset;	// 0x31bf060d
// converted property getter: - (int)columnCount;	// 0x31bf067d
// converted property getter: - (double)columnSpacing;	// 0x31bf06e9
- (void)dealloc;	// 0x31bed429
// converted property getter: - (int)flowType;	// 0x31bf08b5
- (BOOL)hasAutoFit;	// 0x31bf0791
- (BOOL)hasBottomInset;	// 0x31bf05d5
- (BOOL)hasColumnCount;	// 0x31bf0645
- (BOOL)hasColumnSpacing;	// 0x31bf06b1
- (BOOL)hasFlowType;	// 0x31bf087d
- (BOOL)hasHorizontalOverflowType;	// 0x31dd69e1
- (BOOL)hasIsAnchorCenter;	// 0x31bf0a0d
- (BOOL)hasIsLeftToRightColumns;	// 0x31bf0725
- (BOOL)hasIsUpright;	// 0x31bf0ae1
- (BOOL)hasLeftInset;	// 0x31bf04e5
- (BOOL)hasRespectLastFirstLineSpacing;	// 0x31bf043d
- (BOOL)hasRightInset;	// 0x31bf055d
- (BOOL)hasRotation;	// 0x31bf0b4d
- (BOOL)hasTextAnchorType;	// 0x31bf0a79
- (BOOL)hasTextBodyId;	// 0x31bf09bd
- (BOOL)hasTextWarp;	// 0x31bf09d5
- (BOOL)hasTopInset;	// 0x31bf0475
- (BOOL)hasVerticalOverflowType;	// 0x31bf0955
- (BOOL)hasWrapType;	// 0x31bf08e9
- (unsigned)hash;	// 0x31dd6a81
// converted property getter: - (int)horizontalOverflowType;	// 0x31dd6a19
// converted property getter: - (BOOL)isAnchorCenter;	// 0x31bf0a45
- (BOOL)isEqual:(id)equal;	// 0x31dd6c69
// converted property getter: - (BOOL)isLeftToRightColumns;	// 0x31bf075d
// converted property getter: - (BOOL)isUpright;	// 0x31bf0b19
// converted property getter: - (double)leftInset;	// 0x31bf0521
- (void)removeUnnecessaryOverrides;	// 0x31befb61
// converted property getter: - (BOOL)respectLastFirstLineSpacing;	// 0x31dd69ad
// converted property getter: - (double)rightInset;	// 0x31bf0599
// converted property getter: - (double)rotation;	// 0x31bf0b85
// converted property setter: - (void)setAutoFit:(id)fit;	// 0x31b9ceed
// converted property setter: - (void)setBottomInset:(double)inset;	// 0x31b9cdc5
// converted property setter: - (void)setColumnCount:(int)count;	// 0x31b9ce1d
// converted property setter: - (void)setColumnSpacing:(double)spacing;	// 0x31b9ce41
// converted property setter: - (void)setFlowType:(int)type;	// 0x31b9cf2d
// converted property setter: - (void)setHorizontalOverflowType:(int)type;	// 0x31b9cf99
// converted property setter: - (void)setIsAnchorCenter:(BOOL)center;	// 0x31b9d001
// converted property setter: - (void)setIsLeftToRightColumns:(BOOL)rightColumns;	// 0x31b9ce71
// converted property setter: - (void)setIsUpright:(BOOL)upright;	// 0x31b9d065
// converted property setter: - (void)setLeftInset:(double)inset;	// 0x31b9cd99
// converted property setter: - (void)setRespectLastFirstLineSpacing:(BOOL)spacing;	// 0x31b9cd39
// converted property setter: - (void)setRightInset:(double)inset;	// 0x31b9cdf1
// converted property setter: - (void)setRotation:(double)rotation;	// 0x31b9d09d
// converted property setter: - (void)setTextAnchorType:(int)type;	// 0x31b9d039
// converted property setter: - (void)setTextBodyId:(int)anId;	// 0x31dd6a59
// converted property setter: - (void)setTextWarp:(id)warp;	// 0x31b9cfc1
// converted property setter: - (void)setTopInset:(double)inset;	// 0x31b9cd6d
// converted property setter: - (void)setVerticalOverflowType:(int)type;	// 0x31b9cf75
// converted property setter: - (void)setWrapType:(int)type;	// 0x31b9cf51
// converted property getter: - (int)textAnchorType;	// 0x31bf0ab1
// converted property getter: - (int)textBodyId;	// 0x31dd6a49
// converted property getter: - (id)textWarp;	// 0x31d2d161
// converted property getter: - (double)topInset;	// 0x31bf04ad
// converted property getter: - (int)verticalOverflowType;	// 0x31bf098d
// converted property getter: - (int)wrapType;	// 0x31bf0921
@end
