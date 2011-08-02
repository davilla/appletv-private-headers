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
@property(retain) id autoFit;	// G=0x32b95b79; S=0x32b8f511; converted property
@property(assign) double bottomInset;	// G=0x32b82c19; S=0x32b8f335; converted property
@property(assign) int columnCount;	// G=0x32b95b4d; S=0x32b8f35d; converted property
@property(assign) double columnSpacing;	// G=0x32b9217d; S=0x32b8f385; converted property
@property(assign) int horizontalOverflowType;	// G=0x32cdba1d; S=0x32b8e14d; converted property
@property(assign) BOOL isAnchorCenter;	// G=0x32b95c41; S=0x32b8f639; converted property
@property(assign) BOOL isLeftToRightColumns;	// G=0x32b921a9; S=0x32b8f44d; converted property
@property(assign) BOOL isUpright;	// G=0x32b920f1; S=0x32b8e011; converted property
@property(assign) double leftInset;	// G=0x32b82bb5; S=0x32b8f2b1; converted property
@property(assign) BOOL respectLastFirstLineSpacing;	// G=0x32cdba81; S=0x32c0d725; converted property
@property(assign) double rightInset;	// G=0x32b82c7d; S=0x32b8f2dd; converted property
@property(assign) double rotation;	// G=0x32b95c71; S=0x32b8f3fd; converted property
@property(assign) int textAnchorType;	// G=0x32b7eb25; S=0x32b8f5e9; converted property
@property(assign) int textBodyId;	// G=0x32cdaf49; S=0x32cdaf59; converted property
@property(retain) id textWarp;	// G=0x32c0df0d; S=0x32c0d761; converted property
@property(assign) double topInset;	// G=0x32b82b51; S=0x32b8f309; converted property
@property(assign) int verticalOverflowType;	// G=0x32b9200d; S=0x32b8e16d; converted property
@property(assign) int verticalType;	// G=0x32b91f71; S=0x32b8e0fd; converted property
@property(assign) int wrapType;	// G=0x32b95c15; S=0x32b8f57d; converted property
+ (id)defaultEscherWordArtProperties;	// 0x32c0d501
+ (id)defaultProperties;	// 0x32b85435
- (id)init;	// 0x32b85409
- (id)initWithDefaults;	// 0x32cb7f8d
// converted property getter: - (id)autoFit;	// 0x32b95b79
// converted property getter: - (double)bottomInset;	// 0x32b82c19
// converted property getter: - (int)columnCount;	// 0x32b95b4d
// converted property getter: - (double)columnSpacing;	// 0x32b9217d
- (void)dealloc;	// 0x32b1399d
- (BOOL)hasAutoFit;	// 0x32b91f09
- (BOOL)hasBottomInset;	// 0x32b82be1
- (BOOL)hasColumnCount;	// 0x32b91e65
- (BOOL)hasColumnSpacing;	// 0x32b91e9d
- (BOOL)hasHorizontalOverflowType;	// 0x32cdba49
- (BOOL)hasIsAnchorCenter;	// 0x32b92081
- (BOOL)hasIsLeftToRightColumns;	// 0x32b91ed5
- (BOOL)hasIsUpright;	// 0x32b920b9
- (BOOL)hasLeftInset;	// 0x32b82b7d
- (BOOL)hasRespectLastFirstLineSpacing;	// 0x32b91e2d
- (BOOL)hasRightInset;	// 0x32b82c45
- (BOOL)hasRotation;	// 0x32b92121
- (BOOL)hasTextAnchorType;	// 0x32b7eb51
- (BOOL)hasTextBodyId;	// 0x32b92039
- (BOOL)hasTextWarp;	// 0x32b9204d
- (BOOL)hasTopInset;	// 0x32b82b19
- (BOOL)hasVerticalOverflowType;	// 0x32b91fd5
- (BOOL)hasVerticalType;	// 0x32b91f3d
- (BOOL)hasWrapType;	// 0x32b91f9d
- (unsigned)hash;	// 0x32cdb851
// converted property getter: - (int)horizontalOverflowType;	// 0x32cdba1d
// converted property getter: - (BOOL)isAnchorCenter;	// 0x32b95c41
- (BOOL)isEqual:(id)equal;	// 0x32cdb015
// converted property getter: - (BOOL)isLeftToRightColumns;	// 0x32b921a9
// converted property getter: - (BOOL)isUpright;	// 0x32b920f1
// converted property getter: - (double)leftInset;	// 0x32b82bb5
- (void)removeUnnecessaryOverrides;	// 0x32b91571
// converted property getter: - (BOOL)respectLastFirstLineSpacing;	// 0x32cdba81
// converted property getter: - (double)rightInset;	// 0x32b82c7d
// converted property getter: - (double)rotation;	// 0x32b95c71
// converted property setter: - (void)setAutoFit:(id)fit;	// 0x32b8f511
// converted property setter: - (void)setBottomInset:(double)inset;	// 0x32b8f335
// converted property setter: - (void)setColumnCount:(int)count;	// 0x32b8f35d
// converted property setter: - (void)setColumnSpacing:(double)spacing;	// 0x32b8f385
// converted property setter: - (void)setHorizontalOverflowType:(int)type;	// 0x32b8e14d
// converted property setter: - (void)setIsAnchorCenter:(BOOL)center;	// 0x32b8f639
// converted property setter: - (void)setIsLeftToRightColumns:(BOOL)rightColumns;	// 0x32b8f44d
// converted property setter: - (void)setIsUpright:(BOOL)upright;	// 0x32b8e011
// converted property setter: - (void)setLeftInset:(double)inset;	// 0x32b8f2b1
// converted property setter: - (void)setRespectLastFirstLineSpacing:(BOOL)spacing;	// 0x32c0d725
// converted property setter: - (void)setRightInset:(double)inset;	// 0x32b8f2dd
// converted property setter: - (void)setRotation:(double)rotation;	// 0x32b8f3fd
// converted property setter: - (void)setTextAnchorType:(int)type;	// 0x32b8f5e9
// converted property setter: - (void)setTextBodyId:(int)anId;	// 0x32cdaf59
// converted property setter: - (void)setTextWarp:(id)warp;	// 0x32c0d761
// converted property setter: - (void)setTopInset:(double)inset;	// 0x32b8f309
// converted property setter: - (void)setVerticalOverflowType:(int)type;	// 0x32b8e16d
// converted property setter: - (void)setVerticalType:(int)type;	// 0x32b8e0fd
// converted property setter: - (void)setWrapType:(int)type;	// 0x32b8f57d
// converted property getter: - (int)textAnchorType;	// 0x32b7eb25
// converted property getter: - (int)textBodyId;	// 0x32cdaf49
// converted property getter: - (id)textWarp;	// 0x32c0df0d
// converted property getter: - (double)topInset;	// 0x32b82b51
// converted property getter: - (int)verticalOverflowType;	// 0x32b9200d
// converted property getter: - (int)verticalType;	// 0x32b91f71
// converted property getter: - (int)wrapType;	// 0x32b95c15
@end

