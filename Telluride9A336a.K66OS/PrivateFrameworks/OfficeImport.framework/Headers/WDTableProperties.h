/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableProperties : NSObject <NSCopying> {
@private
	WDDocument *mDocument;	// 4 = 0x4
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_hOXagA mOriginalProperties;	// 12 = 0xc
	XXStruct_hOXagA mTrackedProperties;	// 148 = 0x94
}
@property(assign) int alignment;	// G=0x34e1690d; S=0x34cbd719; converted property
@property(retain) id baseStyle;	// G=0x34d1755d; S=0x34ccdded; converted property
@property(assign) long bottomDistanceFromText;	// G=0x34e175ad; S=0x34d7d335; converted property
@property(assign) short cellSpacing;	// G=0x34e16f79; S=0x34d55a8d; converted property
@property(assign) int cellSpacingType;	// G=0x34e170c5; S=0x34d7b05d; converted property
@property(assign) int deleted;	// G=0x34e176f5; S=0x34e17785; converted property
@property(retain) id deletionDate;	// G=0x34e180c1; S=0x34e18829; converted property
@property(retain) id editDate;	// G=0x34e18209; S=0x34e18761; converted property
@property(assign) int edited;	// G=0x34e17895; S=0x34e17925; converted property
@property(retain) id formattingChangeDate;	// G=0x34e18341; S=0x34e18699; converted property
@property(assign) int formattingChanged;	// G=0x34e17a35; S=0x34e17ac5; converted property
@property(assign) int horizontalAnchor;	// G=0x34d67a39; S=0x34d67811; converted property
@property(assign) long horizontalPosition;	// G=0x34cc47fd; S=0x34d678c1; converted property
@property(assign) short indent;	// G=0x34e16ce5; S=0x34ccde41; converted property
@property(assign) int indentType;	// G=0x34e16e31; S=0x34ccde99; converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// G=0x34e17bd5; S=0x34e17c69; converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// G=0x34e17d79; S=0x34e17e0d; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x34e17f1d; S=0x34e17fb1; converted property
@property(assign) int justification;	// G=0x34e167c5; S=0x34cd3b21; converted property
@property(assign) long leftDistanceFromText;	// G=0x34cc488d; S=0x34d74a6d; converted property
@property(assign) int resolveMode;	// G=0x34e16635; S=0x34cbd239; converted property
@property(assign) long rightDistanceFromText;	// G=0x34e17465; S=0x34d74ac5; converted property
@property(assign) long topDistanceFromText;	// G=0x34e172c5; S=0x34e17355; converted property
@property(assign) int verticalAnchor;	// G=0x34d679a9; S=0x34d677b9; converted property
@property(assign) long verticalPosition;	// G=0x34d67919; S=0x34d67869; converted property
@property(assign) long width;	// G=0x34e16a55; S=0x34cd3b79; converted property
@property(assign) int widthType;	// G=0x34e16b9d; S=0x34cd3bd1; converted property
- (id)init;	// 0x34e18d11
- (id)initWithDocument:(id)document;	// 0x34cbcdd9
// converted property getter: - (int)alignment;	// 0x34e1690d
// converted property getter: - (id)baseStyle;	// 0x34d1755d
- (id)bottomBorder;	// 0x34cd4185
// converted property getter: - (long)bottomDistanceFromText;	// 0x34e175ad
// converted property getter: - (short)cellSpacing;	// 0x34e16f79
// converted property getter: - (int)cellSpacingType;	// 0x34e170c5
- (void)clearBottomBorder;	// 0x34e18b01
- (void)clearInsideHorizontalBorder;	// 0x34e189a1
- (void)clearInsideVerticalBorder;	// 0x34e188f1
- (void)clearLeftBorder;	// 0x34e18bb1
- (void)clearRightBorder;	// 0x34e18a51
- (void)clearShading;	// 0x34cbd771
- (void)clearTopBorder;	// 0x34e18c61
- (id)copyWithZone:(NSZone *)zone;	// 0x34e18489
- (void)dealloc;	// 0x34c20ed1
// converted property getter: - (int)deleted;	// 0x34e176f5
// converted property getter: - (id)deletionDate;	// 0x34e180c1
- (id)document;	// 0x34cbda41
// converted property getter: - (id)editDate;	// 0x34e18209
// converted property getter: - (int)edited;	// 0x34e17895
// converted property getter: - (id)formattingChangeDate;	// 0x34e18341
// converted property getter: - (int)formattingChanged;	// 0x34e17a35
// converted property getter: - (int)horizontalAnchor;	// 0x34d67a39
// converted property getter: - (long)horizontalPosition;	// 0x34cc47fd
// converted property getter: - (short)indent;	// 0x34e16ce5
// converted property getter: - (int)indentType;	// 0x34e16e31
// converted property getter: - (unsigned short)indexToAuthorIDOfDeletion;	// 0x34e17bd5
// converted property getter: - (unsigned short)indexToAuthorIDOfEdit;	// 0x34e17d79
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x34e17f1d
- (id)insideHorizontalBorder;	// 0x34cd435d
- (id)insideVerticalBorder;	// 0x34cd43ed
- (BOOL)isAlignmentOverridden;	// 0x34e1699d
- (BOOL)isBaseStyleOverridden;	// 0x34cbf6f9
- (BOOL)isBottomBorderOverridden;	// 0x34cc3a39
- (BOOL)isBottomDistanceFromTextOverridden;	// 0x34e1763d
- (BOOL)isCellSpacingOverridden;	// 0x34e1700d
- (BOOL)isCellSpacingTypeOverridden;	// 0x34e17155
- (BOOL)isDeletedOverridden;	// 0x34e177dd
- (BOOL)isDeletionDateOverridden;	// 0x34e18151
- (BOOL)isEditDateOverridden;	// 0x34e18299
- (BOOL)isEditedOverridden;	// 0x34e1797d
- (BOOL)isFormattingChangeDateOverridden;	// 0x34e183d1
- (BOOL)isFormattingChangedOverridden;	// 0x34e17b1d
- (BOOL)isHorizontalAnchorOverridden;	// 0x34cbf939
- (BOOL)isHorizontalPositionOverridden;	// 0x34cbfaa9
- (BOOL)isIndentOverridden;	// 0x34e16d79
- (BOOL)isIndentTypeOverridden;	// 0x34e16ec1
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;	// 0x34e17cc1
- (BOOL)isIndexToAuthorIDOfEditOverridden;	// 0x34e17e65
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x34e18009
- (BOOL)isInsideHorizontalBorderOverridden;	// 0x34cc3ba9
- (BOOL)isInsideVerticalBorderOverridden;	// 0x34cc3c61
- (BOOL)isJustificationOverridden;	// 0x34e16855
- (BOOL)isLeftBorderOverridden;	// 0x34cc3981
- (BOOL)isLeftDistanceFromTextOverridden;	// 0x34e1720d
- (BOOL)isRightBorderOverridden;	// 0x34cc3af1
- (BOOL)isRightDistanceFromTextOverridden;	// 0x34e174f5
- (BOOL)isShadingOverridden;	// 0x34e1670d
- (BOOL)isTableFloating;	// 0x34cbf86d
- (BOOL)isTopBorderOverridden;	// 0x34cc38c9
- (BOOL)isTopDistanceFromTextOverridden;	// 0x34e173ad
- (BOOL)isVerticalAnchorOverridden;	// 0x34cbf9f1
- (BOOL)isVerticalPositionOverridden;	// 0x34cbfb61
- (BOOL)isWidthOverridden;	// 0x34e16ae5
- (BOOL)isWidthTypeOverridden;	// 0x34e16c2d
// converted property getter: - (int)justification;	// 0x34e167c5
- (id)leftBorder;	// 0x34cd40f5
// converted property getter: - (long)leftDistanceFromText;	// 0x34cc488d
- (void)moveOrignalToTracked;	// 0x34e18d51
- (id)mutableBottomBorder;	// 0x34cd37d1
- (id)mutableInsideHorizontalBorder;	// 0x34cd3979
- (id)mutableInsideVerticalBorder;	// 0x34cd3a4d
- (id)mutableLeftBorder;	// 0x34cd36fd
- (id)mutableRightBorder;	// 0x34cd38a5
- (id)mutableShading;	// 0x34d74b35
- (id)mutableTopBorder;	// 0x34cd3629
// converted property getter: - (int)resolveMode;	// 0x34e16635
- (id)rightBorder;	// 0x34cd4215
// converted property getter: - (long)rightDistanceFromText;	// 0x34e17465
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x34cbd719
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x34ccdded
// converted property setter: - (void)setBottomDistanceFromText:(long)text;	// 0x34d7d335
// converted property setter: - (void)setCellSpacing:(short)spacing;	// 0x34d55a8d
// converted property setter: - (void)setCellSpacingType:(int)type;	// 0x34d7b05d
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x34e17785
// converted property setter: - (void)setDeletionDate:(id)date;	// 0x34e18829
// converted property setter: - (void)setEditDate:(id)date;	// 0x34e18761
// converted property setter: - (void)setEdited:(int)edited;	// 0x34e17925
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x34e18699
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x34e17ac5
// converted property setter: - (void)setHorizontalAnchor:(int)anchor;	// 0x34d67811
// converted property setter: - (void)setHorizontalPosition:(long)position;	// 0x34d678c1
// converted property setter: - (void)setIndent:(short)indent;	// 0x34ccde41
// converted property setter: - (void)setIndentType:(int)type;	// 0x34ccde99
// converted property setter: - (void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;	// 0x34e17c69
// converted property setter: - (void)setIndexToAuthorIDOfEdit:(unsigned short)edit;	// 0x34e17e0d
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x34e17fb1
// converted property setter: - (void)setJustification:(int)justification;	// 0x34cd3b21
// converted property setter: - (void)setLeftDistanceFromText:(long)text;	// 0x34d74a6d
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x34cbd239
// converted property setter: - (void)setRightDistanceFromText:(long)text;	// 0x34d74ac5
// converted property setter: - (void)setTopDistanceFromText:(long)text;	// 0x34e17355
// converted property setter: - (void)setVerticalAnchor:(int)anchor;	// 0x34d677b9
// converted property setter: - (void)setVerticalPosition:(long)position;	// 0x34d67869
// converted property setter: - (void)setWidth:(long)width;	// 0x34cd3b79
// converted property setter: - (void)setWidthType:(int)type;	// 0x34cd3bd1
- (id)shading;	// 0x34e1667d
- (id)topBorder;	// 0x34cd4065
// converted property getter: - (long)topDistanceFromText;	// 0x34e172c5
// converted property getter: - (int)verticalAnchor;	// 0x34d679a9
// converted property getter: - (long)verticalPosition;	// 0x34d67919
// converted property getter: - (long)width;	// 0x34e16a55
// converted property getter: - (int)widthType;	// 0x34e16b9d
@end

