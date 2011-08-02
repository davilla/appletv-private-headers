/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVState.h"

@class EDSheet, ECColumnWidthConvertor, NSMutableArray, NSMutableDictionary, CPImportTracing, EXOAVState, EDWorkbook, EXOfficeArtState, OCPPackagePart, EDReference, EDResources;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EXState : OAVState {
@private
	unsigned mCurrentSheetIndex;	// 28 = 0x1c
	EDSheet *mCurrentSheet;	// 32 = 0x20
	unsigned mCellStyleXfsOffset;	// 36 = 0x24
	double mDefaultColumnWidth;	// 40 = 0x28
	double mDefaultRowHeight;	// 48 = 0x30
	OCPPackagePart *mCurrentPart;	// 56 = 0x38
	OCPPackagePart *mWorkbookPart;	// 60 = 0x3c
	CFDictionaryRef mSharedFormulasMap;	// 64 = 0x40
	NSMutableArray *mArrayedFormulas;	// 68 = 0x44
	EDReference *mSheetDimension;	// 72 = 0x48
	EXOfficeArtState *mOfficeArtState;	// 76 = 0x4c
	EXOAVState *mOAVState;	// 80 = 0x50
	bool mMaxColumnsWarned;	// 84 = 0x54
	bool mMaxRowsWarned;	// 85 = 0x55
	bool mIsPredefinedTableStylesRead;	// 86 = 0x56
	NSMutableDictionary *mReferenceForCommentTextBox;	// 88 = 0x58
	bool mIsPredefinedDxfsBeingRead;	// 92 = 0x5c
	xmlNs *mRelationshipNS;	// 96 = 0x60
	unsigned mTotalCellsWithContentCount;	// 100 = 0x64
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 104 = 0x68
	NSMutableArray *mLegacyDrawables;	// 108 = 0x6c
	EDWorkbook *mWorkbook;	// 112 = 0x70
	EDResources *mResources;	// 116 = 0x74
	id<OCCancelDelegate> mCancelDelegate;	// 120 = 0x78
	CPImportTracing *mTracing;	// 124 = 0x7c
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x32cfac85; @synthesize=mCancelDelegate
@property(assign) unsigned cellStyleXfsOffset;	// G=0x32c6b141; S=0x32c6acd5; converted property
@property(retain) id currentPart;	// G=0x32c6bb15; S=0x32c6ba15; converted property
@property(retain) id currentSheet;	// G=0x32c6d0d9; S=0x32c6ce1d; converted property
@property(assign) unsigned currentSheetIndex;	// G=0x32cfac35; S=0x32c6c569; converted property
@property(assign) double defaultColumnWidth;	// G=0x32cfac45; S=0x32c6e8e9; converted property
@property(assign) double defaultRowHeight;	// G=0x32c6eeb5; S=0x32c6e8fd; converted property
@property(retain) id officeArtState;	// G=0x32c68ce1; S=0x32ca0bb9; converted property
@property(assign, getter=isPredefinedDxfsBeingRead) bool predefinedDxfsBeingRead;	// G=0x32ca015d; S=0x32c9f8e9; converted property
@property(assign, getter=isPredefinedTableStylesRead) bool predefinedTableStylesRead;	// G=0x32c9f51d; S=0x32ca0211; converted property
@property(retain) id resources;	// G=0x32c69201; S=0x32c68cd1; converted property
@property(retain) id sheetDimension;	// G=0x32c6ec45; S=0x32c6e4a1; converted property
@property(retain) id workbook;	// G=0x32c69221; S=0x32c68c8d; converted property
- (id)initWithWorkbookPart:(id)workbookPart cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x32c683f5
- (void)addSharedBaseFormulaIndex:(unsigned)index withIndex:(long)index2;	// 0x32cae171
- (id)arrayedFormulas;	// 0x32c6f939
// declared property getter: - (id)cancelDelegate;	// 0x32cfac85
// converted property getter: - (unsigned)cellStyleXfsOffset;	// 0x32c6b141
- (unsigned)cellsWithContentCount;	// 0x32cfac75
- (id)columnWidthConvertor;	// 0x32c6e841
// converted property getter: - (id)currentPart;	// 0x32c6bb15
// converted property getter: - (id)currentSheet;	// 0x32c6d0d9
// converted property getter: - (unsigned)currentSheetIndex;	// 0x32cfac35
- (void)dealloc;	// 0x32c6fe0d
// converted property getter: - (double)defaultColumnWidth;	// 0x32cfac45
// converted property getter: - (double)defaultRowHeight;	// 0x32c6eeb5
- (void)incrementCellsWithContentCount;	// 0x32c6f24d
- (BOOL)isCancelled;	// 0x32c6c545
// converted property getter: - (bool)isPredefinedDxfsBeingRead;	// 0x32ca015d
// converted property getter: - (bool)isPredefinedTableStylesRead;	// 0x32c9f51d
- (id)legacyDrawables;	// 0x32c6f69d
- (id)oavState;	// 0x32cfac55
// converted property getter: - (id)officeArtState;	// 0x32c68ce1
- (xmlNs *)relationshipNameSpaceForWorkbook;	// 0x32cfac65
- (void)relationshipNameSpaceForWorkbook:(xmlNs *)workbook;	// 0x32c6c2e9
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x32c9f2cd
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x32cbcd49
- (void)resetForNewSheet;	// 0x32c6c8c9
// converted property getter: - (id)resources;	// 0x32c69201
// converted property setter: - (void)setCellStyleXfsOffset:(unsigned)offset;	// 0x32c6acd5
// converted property setter: - (void)setCurrentPart:(id)part;	// 0x32c6ba15
// converted property setter: - (void)setCurrentSheet:(id)sheet;	// 0x32c6ce1d
// converted property setter: - (void)setCurrentSheetIndex:(unsigned)index;	// 0x32c6c569
// converted property setter: - (void)setDefaultColumnWidth:(double)width;	// 0x32c6e8e9
// converted property setter: - (void)setDefaultRowHeight:(double)height;	// 0x32c6e8fd
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x32ca0bb9
// converted property setter: - (void)setPredefinedDxfsBeingRead:(bool)read;	// 0x32c9f8e9
// converted property setter: - (void)setPredefinedTableStylesRead:(bool)read;	// 0x32ca0211
// converted property setter: - (void)setResources:(id)resources;	// 0x32c68cd1
// converted property setter: - (void)setSheetDimension:(id)dimension;	// 0x32c6e4a1
- (void)setTextBox:(id)box forReference:(id)reference;	// 0x32cfacb5
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x32c68c8d
- (unsigned)sharedBaseFormulaIndexWithIndex:(long)index;	// 0x32cae1dd
// converted property getter: - (id)sheetDimension;	// 0x32c6ec45
- (id)textBoxForReference:(id)reference;	// 0x32cfac95
// converted property getter: - (id)workbook;	// 0x32c69221
- (id)workbookPart;	// 0x32c68c39
@end
