/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class NSMutableArray, WDText, OADTheme, WDStyleSheet, NSDate, WDListDefinitionTable, OADBackground, WDListTable, OADDrawingGroup, NSString, WDFontTable, WDRevisionAuthorTable;

__attribute__((visibility("hidden")))
@interface WDDocument : OCDDocument {
@private
	WDStyleSheet *mStyleSheet;	// 16 = 0x10
	WDFontTable *mFontTable;	// 20 = 0x14
	WDListDefinitionTable *mListDefinitionTable;	// 24 = 0x18
	WDRevisionAuthorTable *mRevisionAuthorTable;	// 28 = 0x1c
	WDListTable *mListTable;	// 32 = 0x20
	NSMutableArray *mSections;	// 36 = 0x24
	unsigned short mDefaultTabWidth;	// 40 = 0x28
	WDText *mImageBulletText;	// 44 = 0x2c
	WDText *mFootnoteSeparator;	// 48 = 0x30
	WDText *mFootnoteContinuationSeparator;	// 52 = 0x34
	WDText *mFootnoteContinuationNotice;	// 56 = 0x38
	WDText *mEndnoteSeparator;	// 60 = 0x3c
	WDText *mEndnoteContinuationSeparator;	// 64 = 0x40
	WDText *mEndnoteContinuationNotice;	// 68 = 0x44
	int mFootnoteNumberFormat;	// 72 = 0x48
	int mEndnoteNumberFormat;	// 76 = 0x4c
	int mFootnotePosition;	// 80 = 0x50
	int mEndnotePosition;	// 84 = 0x54
	int mFootnoteRestart;	// 88 = 0x58
	int mEndnoteRestart;	// 92 = 0x5c
	unsigned short mFootnoteNumberingStart;	// 96 = 0x60
	int mGutterPosition;	// 100 = 0x64
	NSString *mOleFilename;	// 104 = 0x68
	short mZoomPercentage;	// 108 = 0x6c
	NSString *mVersion;	// 112 = 0x70
	unsigned mMirrorMargins : 1;	// 116 = 0x74
	unsigned mBorderSurroundHeader : 1;	// 116 = 0x74
	unsigned mBorderSurroundFooter : 1;	// 116 = 0x74
	unsigned mAutoHyphenate : 1;	// 116 = 0x74
	unsigned mEvenAndOddHeaders : 1;	// 116 = 0x74
	unsigned mGraphicsInHeaderFooter : 1;	// 116 = 0x74
	unsigned mBookFold : 1;	// 116 = 0x74
	unsigned mShowMarkup : 1;	// 116 = 0x74
	unsigned mShowComments : 1;	// 117 = 0x75
	unsigned mTrackChanges : 1;	// 117 = 0x75
	unsigned mShowRevisionMarksOnScreen : 1;	// 117 = 0x75
	unsigned mShowInsertionsAndDeletions : 1;	// 117 = 0x75
	unsigned mShowFormatting : 1;	// 117 = 0x75
	unsigned mShowOutline : 1;	// 117 = 0x75
	NSMutableArray *mDocumentImages;	// 120 = 0x78
	NSMutableArray *mChangeTrackingEditDates;	// 124 = 0x7c
	NSMutableArray *mChangeTrackingEditAuthors;	// 128 = 0x80
	NSDate *mCreationDate;	// 132 = 0x84
	NSMutableArray *mImageBullets;	// 136 = 0x88
	OADDrawingGroup *mDrawingGroup;	// 140 = 0x8c
	int mZIndexTotalForMainText;	// 144 = 0x90
	int mZIndexTotalForHeaderFooterText;	// 148 = 0x94
	OADBackground *mDocumentBackground;	// 152 = 0x98
	OADTheme *mTheme;	// 156 = 0x9c
}
@property(assign) BOOL autoHyphenate;	// G=0x32d20e61; S=0x32bce551; converted property
@property(assign) BOOL bookFold;	// G=0x32d20f09; S=0x32bce609; converted property
@property(assign) BOOL borderSurroundFooter;	// G=0x32d20e1d; S=0x32bce525; converted property
@property(assign) BOOL borderSurroundHeader;	// G=0x32d20e09; S=0x32bce509; converted property
@property(retain) id creationDate;	// G=0x32d20ff1; S=0x32d215b5; converted property
@property(assign) unsigned short defaultTabWidth;	// G=0x32bb0341; S=0x32bce541; converted property
@property(retain) id documentBackground;	// G=0x32d21011; S=0x32c108f1; converted property
@property(assign) int endnoteNumberFormat;	// G=0x32d20e99; S=0x32bce5b9; converted property
@property(assign) int endnotePosition;	// G=0x32d20eb9; S=0x32bce599; converted property
@property(assign) int endnoteRestart;	// G=0x32d20ed9; S=0x32bce5d9; converted property
@property(assign) BOOL evenAndOddHeaders;	// G=0x32d20e75; S=0x32bce56d; converted property
@property(assign) int footnoteNumberFormat;	// G=0x32d20e89; S=0x32bce5a9; converted property
@property(assign) unsigned short footnoteNumberingStart;	// G=0x32d20ee9; S=0x32bce5e9; converted property
@property(assign) int footnotePosition;	// G=0x32d20ea9; S=0x32bce589; converted property
@property(assign) int footnoteRestart;	// G=0x32d20ec9; S=0x32bce5c9; converted property
@property(assign) BOOL graphicsInHeaderFooter;	// G=0x32d20e31; S=0x32d20e45; converted property
@property(assign) int gutterPosition;	// G=0x32d20ef9; S=0x32bce5f9; converted property
@property(assign) BOOL mirrorMargins;	// G=0x32d20df5; S=0x32bce4ed; converted property
@property(retain) id oleFilename;	// G=0x32c78041; S=0x32bce7bd; converted property
@property(assign) BOOL showComments;	// G=0x32d20f59; S=0x32bce4d1; converted property
@property(assign) BOOL showFormatting;	// G=0x32d20fa9; S=0x32bce499; converted property
@property(assign) BOOL showInsertionsAndDeletions;	// G=0x32d20f95; S=0x32bce47d; converted property
@property(assign) BOOL showMarkup;	// G=0x32d20f49; S=0x32bce4b5; converted property
@property(assign) BOOL showOutline;	// G=0x32d20fbd; S=0x32bce635; converted property
@property(assign) BOOL showRevisionMarksOnScreen;	// G=0x32d20f81; S=0x32bce461; converted property
@property(assign) BOOL trackChanges;	// G=0x32d20f6d; S=0x32bce445; converted property
@property(retain) id version;	// G=0x32d20f39; S=0x32d2166d; converted property
@property(assign) int zIndexTotalForHeaderFooterText;	// G=0x32d21031; S=0x32c10a19; converted property
@property(assign) int zIndexTotalForMainText;	// G=0x32d21021; S=0x32c109f9; converted property
@property(assign) short zoomPercentage;	// G=0x32d20f1d; S=0x32bce625; converted property
+ (int)thumbnailCutOff;	// 0x32d20ded
- (id)init;	// 0x32bc9099
- (void)addChangeTrackingEditAtDate:(id)date authorIndex:(int)index;	// 0x32c7ed3d
- (id)addImageBulletText;	// 0x32c26a19
- (void)addImageBullets;	// 0x32d216a5
- (id)addList:(id)list;	// 0x32d217b1
- (id)addListDefinition;	// 0x32d21811
- (void)addRevisionAuthor:(id)author;	// 0x32d215ed
- (id)addSection;	// 0x32bd64e9
- (id)annotationBlockIterator;	// 0x32d21151
- (id)annotationIterator;	// 0x32d212b9
- (id)applicationName;	// 0x32d20f2d
// converted property getter: - (BOOL)autoHyphenate;	// 0x32d20e61
// converted property getter: - (BOOL)bookFold;	// 0x32d20f09
// converted property getter: - (BOOL)borderSurroundFooter;	// 0x32d20e1d
// converted property getter: - (BOOL)borderSurroundHeader;	// 0x32d20e09
- (id)changeTrackingEditAuthors;	// 0x32d20fe1
- (id)changeTrackingEditDates;	// 0x32d20fd1
// converted property getter: - (id)creationDate;	// 0x32d20ff1
- (void)dealloc;	// 0x32bb6b49
// converted property getter: - (unsigned short)defaultTabWidth;	// 0x32bb0341
// converted property getter: - (id)documentBackground;	// 0x32d21011
- (id)drawingGroup;	// 0x32c0f6e1
- (id)endnoteBlockIterator;	// 0x32d211c9
- (id)endnoteContinuationNotice;	// 0x32bdc4a9
- (id)endnoteContinuationSeparator;	// 0x32bdc499
- (id)endnoteIterator;	// 0x32d21331
// converted property getter: - (int)endnoteNumberFormat;	// 0x32d20e99
// converted property getter: - (int)endnotePosition;	// 0x32d20eb9
// converted property getter: - (int)endnoteRestart;	// 0x32d20ed9
- (id)endnoteSeparator;	// 0x32bdc489
// converted property getter: - (BOOL)evenAndOddHeaders;	// 0x32d20e75
- (id)fontTable;	// 0x32bc9e6d
- (id)footnoteBlockIterator;	// 0x32d21241
- (id)footnoteContinuationNotice;	// 0x32bdc479
- (id)footnoteContinuationSeparator;	// 0x32bdc469
- (id)footnoteIterator;	// 0x32d213a9
// converted property getter: - (int)footnoteNumberFormat;	// 0x32d20e89
// converted property getter: - (unsigned short)footnoteNumberingStart;	// 0x32d20ee9
// converted property getter: - (int)footnotePosition;	// 0x32d20ea9
// converted property getter: - (int)footnoteRestart;	// 0x32d20ec9
- (id)footnoteSeparator;	// 0x32bdc359
// converted property getter: - (BOOL)graphicsInHeaderFooter;	// 0x32d20e31
// converted property getter: - (int)gutterPosition;	// 0x32d20ef9
- (id)imageBulletParagraph;	// 0x32caff55
- (id)imageBulletText;	// 0x32d21001
- (id)imageBulletWithCharacterOffset:(int)characterOffset;	// 0x32c26b8d
- (id)imageBullets;	// 0x32bd2d05
- (BOOL)isFromBinary;	// 0x32d21041
- (id)lastSection;	// 0x32c5f385
- (id)listAt:(int)at;	// 0x32d217d1
- (int)listCount;	// 0x32d217f1
- (id)listDefinitionAt:(int)at;	// 0x32d21831
- (int)listDefinitionCount;	// 0x32d21851
- (id)listDefinitionTable;	// 0x32bd2d15
- (id)listDefinitionWithId:(int)anId;	// 0x32c59b51
- (id)listTable;	// 0x32bb0519
- (id)mainBlocksIterator;	// 0x32d21499
- (id)mainRunsIterator;	// 0x32d21421
// converted property getter: - (BOOL)mirrorMargins;	// 0x32d20df5
- (id)newAnnotationBlockIterator;	// 0x32d210fd
- (id)newAnnotationIterator;	// 0x32d21265
- (id)newEndnoteBlockIterator;	// 0x32d21175
- (id)newEndnoteIterator;	// 0x32d212dd
- (id)newFootnoteBlockIterator;	// 0x32d211ed
- (id)newFootnoteIterator;	// 0x32d21355
- (id)newMainBlocksIterator;	// 0x32d21445
- (id)newMainRunsIterator;	// 0x32d213cd
- (id)newSectionIterator;	// 0x32d214bd
// converted property getter: - (id)oleFilename;	// 0x32c78041
- (void)removeEmptySections;	// 0x32d2151d
- (int)revisionAuthorAddLookup:(id)lookup;	// 0x32d2160d
- (id)revisionAuthorAt:(int)at;	// 0x32d2162d
- (int)revisionAuthorCount;	// 0x32d2164d
- (id)revisionAuthorTable;	// 0x32bd4dbd
- (id)sectionAt:(int)at;	// 0x32bb5691
- (int)sectionCount;	// 0x32bdd08d
- (id)sectionIterator;	// 0x32d214f9
- (id)sections;	// 0x32bdd175
// converted property setter: - (void)setAutoHyphenate:(BOOL)hyphenate;	// 0x32bce551
// converted property setter: - (void)setBookFold:(BOOL)fold;	// 0x32bce609
// converted property setter: - (void)setBorderSurroundFooter:(BOOL)footer;	// 0x32bce525
// converted property setter: - (void)setBorderSurroundHeader:(BOOL)header;	// 0x32bce509
// converted property setter: - (void)setCreationDate:(id)date;	// 0x32d215b5
// converted property setter: - (void)setDefaultTabWidth:(unsigned short)width;	// 0x32bce541
// converted property setter: - (void)setDocumentBackground:(id)background;	// 0x32c108f1
// converted property setter: - (void)setEndnoteNumberFormat:(int)format;	// 0x32bce5b9
// converted property setter: - (void)setEndnotePosition:(int)position;	// 0x32bce599
// converted property setter: - (void)setEndnoteRestart:(int)restart;	// 0x32bce5d9
// converted property setter: - (void)setEvenAndOddHeaders:(BOOL)headers;	// 0x32bce56d
// converted property setter: - (void)setFootnoteNumberFormat:(int)format;	// 0x32bce5a9
// converted property setter: - (void)setFootnoteNumberingStart:(unsigned short)start;	// 0x32bce5e9
// converted property setter: - (void)setFootnotePosition:(int)position;	// 0x32bce589
// converted property setter: - (void)setFootnoteRestart:(int)restart;	// 0x32bce5c9
// converted property setter: - (void)setGraphicsInHeaderFooter:(BOOL)headerFooter;	// 0x32d20e45
// converted property setter: - (void)setGutterPosition:(int)position;	// 0x32bce5f9
// converted property setter: - (void)setMirrorMargins:(BOOL)margins;	// 0x32bce4ed
// converted property setter: - (void)setOleFilename:(id)filename;	// 0x32bce7bd
// converted property setter: - (void)setShowComments:(BOOL)comments;	// 0x32bce4d1
// converted property setter: - (void)setShowFormatting:(BOOL)formatting;	// 0x32bce499
// converted property setter: - (void)setShowInsertionsAndDeletions:(BOOL)deletions;	// 0x32bce47d
// converted property setter: - (void)setShowMarkup:(BOOL)markup;	// 0x32bce4b5
// converted property setter: - (void)setShowOutline:(BOOL)outline;	// 0x32bce635
// converted property setter: - (void)setShowRevisionMarksOnScreen:(BOOL)screen;	// 0x32bce461
// converted property setter: - (void)setTrackChanges:(BOOL)changes;	// 0x32bce445
// converted property setter: - (void)setVersion:(id)version;	// 0x32d2166d
// converted property setter: - (void)setZIndexTotalForHeaderFooterText:(int)headerFooterText;	// 0x32c10a19
// converted property setter: - (void)setZIndexTotalForMainText:(int)mainText;	// 0x32c109f9
// converted property setter: - (void)setZoomPercentage:(short)percentage;	// 0x32bce625
// converted property getter: - (BOOL)showComments;	// 0x32d20f59
// converted property getter: - (BOOL)showFormatting;	// 0x32d20fa9
// converted property getter: - (BOOL)showInsertionsAndDeletions;	// 0x32d20f95
// converted property getter: - (BOOL)showMarkup;	// 0x32d20f49
// converted property getter: - (BOOL)showOutline;	// 0x32d20fbd
// converted property getter: - (BOOL)showRevisionMarksOnScreen;	// 0x32d20f81
- (id)styleSheet;	// 0x32bd062d
- (id)theme;	// 0x32bddc5d
// converted property getter: - (BOOL)trackChanges;	// 0x32d20f6d
// converted property getter: - (id)version;	// 0x32d20f39
// converted property getter: - (int)zIndexTotalForHeaderFooterText;	// 0x32d21031
// converted property getter: - (int)zIndexTotalForMainText;	// 0x32d21021
// converted property getter: - (short)zoomPercentage;	// 0x32d20f1d
@end

