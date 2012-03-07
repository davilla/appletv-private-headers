/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDParagraphProperties : NSObject <NSCopying> {
@private
	WDDocument *mDocument;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mCharacterPropertiesOverridden : 1;	// 12 = 0xc
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_oPtw4B *mOriginalProperties;	// 16 = 0x10
	XXStruct_oPtw4B *mTrackedProperties;	// 20 = 0x14
}
@property(assign) BOOL anchorLock;	// G=0x353b4c89; S=0x35245c55; converted property
@property(retain) id baseStyle;	// G=0x351b9025; S=0x35252315; converted property
@property(retain) id characterProperties;	// G=0x351ba6e9; S=0x3525a43d; converted property
@property(assign) XXStruct_BOQfuC dropCap;	// G=0x353b42e9; S=0x35244d15; converted property
@property(assign) short firstLineIndent;	// G=0x351c6641; S=0x3524765d; converted property
@property(assign) int formattingChanged;	// G=0x353b612d; S=0x3530ffb9; converted property
@property(assign) long height;	// G=0x353b4455; S=0x35244ff5; converted property
@property(assign) int heightRule;	// G=0x353b45ad; S=0x3524515d; converted property
@property(assign) int horizontalAnchor;	// G=0x35269621; S=0x352456dd; converted property
@property(assign) long horizontalPosition;	// G=0x352d8879; S=0x3524599d; converted property
@property(assign) long horizontalSpace;	// G=0x353b4869; S=0x35245419; converted property
@property(assign) int justification;	// G=0x3525d099; S=0x352477bd; converted property
@property(assign) BOOL keepLinesTogether;	// G=0x353b5a3d; S=0x3527659d; converted property
@property(assign) BOOL keepNextParagraphTogether;	// G=0x353b58d9; S=0x35253015; converted property
@property(assign) short leftIndent;	// G=0x351c65a5; S=0x3524739d; converted property
@property(assign) short lineSpacing;	// G=0x352694c9; S=0x352470dd; converted property
@property(assign) int lineSpacingRule;	// G=0x352b4541; S=0x3524723d; converted property
@property(retain) id list;	// G=0x351c6e61; S=0x353b6c2d; converted property
@property(assign) int listIndex;	// G=0x351c6c2d; S=0x35244bb1; converted property
@property(assign) unsigned char listLevel;	// G=0x351c6d05; S=0x35244a49; converted property
@property(assign) unsigned short outlineLevel;	// G=0x353b5779; S=0x35252eb5; converted property
@property(assign, getter=isPageBreakBefore) BOOL pageBreakBefore;	// G=0x353b4181; S=0x352448c1; converted property
@property(assign) int resolveMode;	// G=0x352b463d; S=0x35244829; converted property
@property(assign) short rightIndent;	// G=0x35269d21; S=0x352474fd; converted property
@property(assign) unsigned short spaceAfter;	// G=0x351c66dd; S=0x35246e15; converted property
@property(assign) BOOL spaceAfterAuto;	// G=0x353b5615; S=0x35246f75; converted property
@property(assign) unsigned short spaceBefore;	// G=0x351c6779; S=0x35246b4d; converted property
@property(assign) BOOL spaceBeforeAuto;	// G=0x353b54b1; S=0x35246cad; converted property
@property(assign) BOOL suppressAutoHyphens;	// G=0x353b5ba1; S=0x35247a95; converted property
@property(assign) BOOL suppressLineNumbers;	// G=0x353b5d05; S=0x3524791d; converted property
@property(assign) int tabStopAddedCount;	// G=0x353b6b5d; S=0x35253339; converted property
@property(assign) int tabStopDeletedPositionCount;	// G=0x353b68b1; S=0x3525349d; converted property
@property(assign) unsigned short tablePart;	// G=0x353b5fcd; S=0x353226d5; converted property
@property(retain) id tableStyle;	// G=0x353b4025; S=0x352bf649; converted property
@property(assign) int verticalAnchor;	// G=0x352d87dd; S=0x3524583d; converted property
@property(assign) long verticalPosition;	// G=0x352e8b9d; S=0x35245af9; converted property
@property(assign) long verticalSpace;	// G=0x353b470d; S=0x352452bd; converted property
@property(assign) BOOL widowControl;	// G=0x353b5e65; S=0x35247bfd; converted property
@property(assign) long width;	// G=0x352d8911; S=0x35244e91; converted property
@property(assign) BOOL wrap;	// G=0x353b49c5; S=0x35245575; converted property
@property(assign) BOOL wrapCode;	// G=0x353b4b29; S=0x352a1af5; converted property
- (id)initWithDocument:(id)document;	// 0x35244781
- (void)addTabStopAdded:(XXStruct_M9LKhA *)added;	// 0x35253199
- (void)addTabStopDeletedPosition:(short)position;	// 0x35261ef5
// converted property getter: - (BOOL)anchorLock;	// 0x353b4c89
- (id)barBorder;	// 0x353b5355
// converted property getter: - (id)baseStyle;	// 0x351b9025
- (id)betweenBorder;	// 0x353b51f9
- (id)bottomBorder;	// 0x35268835
// converted property getter: - (id)characterProperties;	// 0x351ba6e9
- (void)clearBaseStyle;	// 0x35252cc1
- (void)clearChararacterProperties;	// 0x353b8599
- (void)copyPropertiesInto:(id)into;	// 0x353b62d5
- (id)copyWithZone:(NSZone *)zone;	// 0x353b6605
- (void)dealloc;	// 0x351c85cd
- (id)document;	// 0x351c6e21
// converted property getter: - (XXStruct_BOQfuC)dropCap;	// 0x353b42e9
// converted property getter: - (short)firstLineIndent;	// 0x351c6641
// converted property getter: - (int)formattingChanged;	// 0x353b612d
// converted property getter: - (long)height;	// 0x353b4455
// converted property getter: - (int)heightRule;	// 0x353b45ad
// converted property getter: - (int)horizontalAnchor;	// 0x35269621
// converted property getter: - (long)horizontalPosition;	// 0x352d8879
// converted property getter: - (long)horizontalSpace;	// 0x353b4869
- (BOOL)isAnchorLockOverridden;	// 0x353b4d29
- (BOOL)isAnythingOverridden;	// 0x353b849d
- (BOOL)isAnythingOverriddenIn:(XXStruct_M0DnwB *)anIn;	// 0x353b628d
- (BOOL)isBarBorderOverridden;	// 0x353b53ed
- (BOOL)isBaseStyleOverridden;	// 0x351b8f61
- (BOOL)isBetweenBorderOverridden;	// 0x353b5291
- (BOOL)isBottomBorderOverridden;	// 0x351b9ff9
- (BOOL)isCharacterPropertiesOverridden;	// 0x351c7f09
- (BOOL)isDropCapOverridden;	// 0x353b4391
- (BOOL)isFirstLineIndentOverridden;	// 0x351b9cd5
- (BOOL)isFormattingChangedOverridden;	// 0x353b61c9
- (BOOL)isHeightOverridden;	// 0x353b44ed
- (BOOL)isHeightRuleOverridden;	// 0x353b4649
- (BOOL)isHorizontalAnchorOverridden;	// 0x351b8671
- (BOOL)isHorizontalPositionOverridden;	// 0x351b87f9
- (BOOL)isHorizontalSpaceOverridden;	// 0x353b4901
- (BOOL)isJustificationOverridden;	// 0x351b9a89
- (BOOL)isKeepLinesTogetherOverridden;	// 0x353b5add
- (BOOL)isKeepNextParagraphTogetherOverridden;	// 0x353b5979
- (BOOL)isLeftBorderOverridden;	// 0x353b4fdd
- (BOOL)isLeftIndentOverridden;	// 0x351b9b4d
- (BOOL)isLineSpacingOverridden;	// 0x351b99c5
- (BOOL)isLineSpacingRuleOverridden;	// 0x352b447d
- (BOOL)isListIndexOverridden;	// 0x351b9d99
- (BOOL)isListLevelOverridden;	// 0x351b9e5d
- (BOOL)isListOverridden;	// 0x353b6c15
- (BOOL)isOutlineLevelOverridden;	// 0x353b5815
// converted property getter: - (BOOL)isPageBreakBefore;	// 0x353b4181
- (BOOL)isPageBreakBeforeOverridden;	// 0x353b4225
- (BOOL)isRightBorderOverridden;	// 0x353b5135
- (BOOL)isRightIndentOverridden;	// 0x351b9c11
- (BOOL)isShadingOverridden;	// 0x351ba0bd
- (BOOL)isSpaceAfterAutoOverridden;	// 0x353b56b5
- (BOOL)isSpaceAfterOverridden;	// 0x351b983d
- (BOOL)isSpaceBeforeAutoOverridden;	// 0x353b5551
- (BOOL)isSpaceBeforeOverridden;	// 0x351b9901
- (BOOL)isSuppressAutoHyphensOverridden;	// 0x353b5c41
- (BOOL)isSuppressLineNumbersOverridden;	// 0x353b5da1
- (BOOL)isTablePartOverridden;	// 0x353b6069
- (BOOL)isTableStyleOverridden;	// 0x353b40bd
- (BOOL)isTopBorderOverridden;	// 0x353b4e85
- (BOOL)isVerticalAnchorOverridden;	// 0x351b8735
- (BOOL)isVerticalPositionOverridden;	// 0x351b88bd
- (BOOL)isVerticalSpaceOverridden;	// 0x353b47a5
- (BOOL)isWidowControlOverridden;	// 0x353b5f09
- (BOOL)isWidthOverridden;	// 0x35269b79
- (BOOL)isWrapCodeOverridden;	// 0x353b4bc5
- (BOOL)isWrapOverridden;	// 0x353b4a65
// converted property getter: - (int)justification;	// 0x3525d099
// converted property getter: - (BOOL)keepLinesTogether;	// 0x353b5a3d
// converted property getter: - (BOOL)keepNextParagraphTogether;	// 0x353b58d9
- (id)leftBorder;	// 0x353b4f49
// converted property getter: - (short)leftIndent;	// 0x351c65a5
// converted property getter: - (short)lineSpacing;	// 0x352694c9
// converted property getter: - (int)lineSpacingRule;	// 0x352b4541
// converted property getter: - (id)list;	// 0x351c6e61
// converted property getter: - (int)listIndex;	// 0x351c6c2d
// converted property getter: - (unsigned char)listLevel;	// 0x351c6d05
- (id)mutableBarBorder;	// 0x3524676d
- (id)mutableBetweenBorder;	// 0x3524657d
- (id)mutableBottomBorder;	// 0x3524619d
- (id)mutableCharacterProperties;	// 0x352bcc19
- (id)mutableLeftBorder;	// 0x35245fad
- (id)mutableRightBorder;	// 0x3524638d
- (id)mutableShading;	// 0x3524695d
- (id)mutableTopBorder;	// 0x35245dbd
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x353b6c69
// converted property getter: - (unsigned short)outlineLevel;	// 0x353b5779
- (void)removeTabStopAddedWithPosition:(short)position;	// 0x353b6969
// converted property getter: - (int)resolveMode;	// 0x352b463d
- (id)rightBorder;	// 0x353b509d
// converted property getter: - (short)rightIndent;	// 0x35269d21
// converted property setter: - (void)setAnchorLock:(BOOL)lock;	// 0x35245c55
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x35252315
// converted property setter: - (void)setCharacterProperties:(id)properties;	// 0x3525a43d
// converted property setter: - (void)setDropCap:(XXStruct_BOQfuC)cap;	// 0x35244d15
// converted property setter: - (void)setFirstLineIndent:(short)indent;	// 0x3524765d
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x3530ffb9
// converted property setter: - (void)setHeight:(long)height;	// 0x35244ff5
// converted property setter: - (void)setHeightRule:(int)rule;	// 0x3524515d
// converted property setter: - (void)setHorizontalAnchor:(int)anchor;	// 0x352456dd
// converted property setter: - (void)setHorizontalPosition:(long)position;	// 0x3524599d
// converted property setter: - (void)setHorizontalSpace:(long)space;	// 0x35245419
// converted property setter: - (void)setJustification:(int)justification;	// 0x352477bd
// converted property setter: - (void)setKeepLinesTogether:(BOOL)together;	// 0x3527659d
// converted property setter: - (void)setKeepNextParagraphTogether:(BOOL)together;	// 0x35253015
// converted property setter: - (void)setLeftIndent:(short)indent;	// 0x3524739d
// converted property setter: - (void)setLineSpacing:(short)spacing;	// 0x352470dd
// converted property setter: - (void)setLineSpacingRule:(int)rule;	// 0x3524723d
// converted property setter: - (void)setList:(id)list;	// 0x353b6c2d
// converted property setter: - (void)setListIndex:(int)index;	// 0x35244bb1
// converted property setter: - (void)setListLevel:(unsigned char)level;	// 0x35244a49
// converted property setter: - (void)setOutlineLevel:(unsigned short)level;	// 0x35252eb5
// converted property setter: - (void)setPageBreakBefore:(BOOL)before;	// 0x352448c1
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x35244829
// converted property setter: - (void)setRightIndent:(short)indent;	// 0x352474fd
// converted property setter: - (void)setSpaceAfter:(unsigned short)after;	// 0x35246e15
// converted property setter: - (void)setSpaceAfterAuto:(BOOL)auto;	// 0x35246f75
// converted property setter: - (void)setSpaceBefore:(unsigned short)before;	// 0x35246b4d
// converted property setter: - (void)setSpaceBeforeAuto:(BOOL)auto;	// 0x35246cad
// converted property setter: - (void)setSuppressAutoHyphens:(BOOL)hyphens;	// 0x35247a95
// converted property setter: - (void)setSuppressLineNumbers:(BOOL)numbers;	// 0x3524791d
// converted property setter: - (void)setTabStopAddedCount:(int)count;	// 0x35253339
// converted property setter: - (void)setTabStopDeletedPositionCount:(int)count;	// 0x3525349d
// converted property setter: - (void)setTablePart:(unsigned short)part;	// 0x353226d5
// converted property setter: - (void)setTableStyle:(id)style;	// 0x352bf649
// converted property setter: - (void)setVerticalAnchor:(int)anchor;	// 0x3524583d
// converted property setter: - (void)setVerticalPosition:(long)position;	// 0x35245af9
// converted property setter: - (void)setVerticalSpace:(long)space;	// 0x352452bd
// converted property setter: - (void)setWidowControl:(BOOL)control;	// 0x35247bfd
// converted property setter: - (void)setWidth:(long)width;	// 0x35244e91
// converted property setter: - (void)setWrap:(BOOL)wrap;	// 0x35245575
// converted property setter: - (void)setWrapCode:(BOOL)code;	// 0x352a1af5
- (id)shading;	// 0x35268bd9
// converted property getter: - (unsigned short)spaceAfter;	// 0x351c66dd
// converted property getter: - (BOOL)spaceAfterAuto;	// 0x353b5615
// converted property getter: - (unsigned short)spaceBefore;	// 0x351c6779
// converted property getter: - (BOOL)spaceBeforeAuto;	// 0x353b54b1
// converted property getter: - (BOOL)suppressAutoHyphens;	// 0x353b5ba1
// converted property getter: - (BOOL)suppressLineNumbers;	// 0x353b5d05
- (XXStruct_M9LKhA *)tabStopAddedAt:(int)at;	// 0x353b6a8d
// converted property getter: - (int)tabStopAddedCount;	// 0x353b6b5d
- (short)tabStopDeletedPositionAt:(int)at;	// 0x353b67f1
// converted property getter: - (int)tabStopDeletedPositionCount;	// 0x353b68b1
// converted property getter: - (unsigned short)tablePart;	// 0x353b5fcd
// converted property getter: - (id)tableStyle;	// 0x353b4025
- (id)topBorder;	// 0x353b4ded
// converted property getter: - (int)verticalAnchor;	// 0x352d87dd
// converted property getter: - (long)verticalPosition;	// 0x352e8b9d
// converted property getter: - (long)verticalSpace;	// 0x353b470d
// converted property getter: - (BOOL)widowControl;	// 0x353b5e65
// converted property getter: - (long)width;	// 0x352d8911
// converted property getter: - (BOOL)wrap;	// 0x353b49c5
// converted property getter: - (BOOL)wrapCode;	// 0x353b4b29
@end
