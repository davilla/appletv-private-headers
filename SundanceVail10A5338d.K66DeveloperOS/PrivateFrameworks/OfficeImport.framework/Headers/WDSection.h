/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDText;

@interface WDSection : NSObject {
	unsigned mOriginal : 1;	// 4 = 0x4
	unsigned mTracked : 1;	// 4 = 0x4
	unsigned mResolved : 1;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDText *mText;	// 12 = 0xc
	WDText *mEvenPageHeader;	// 16 = 0x10
	WDText *mOddPageHeader;	// 20 = 0x14
	WDText *mFirstPageHeader;	// 24 = 0x18
	WDText *mEvenPageFooter;	// 28 = 0x1c
	WDText *mOddPageFooter;	// 32 = 0x20
	WDText *mFirstPageFooter;	// 36 = 0x24
	XXStruct_7a9KuD mOriginalProperties;	// 40 = 0x28
	XXStruct_7a9KuD mTrackedProperties;	// 180 = 0xb4
}
@property(assign) int borderDepth;	// G=0x33c09465; S=0x33b09ac5; converted property
@property(assign) int borderDisplay;	// G=0x33c09599; S=0x33b09b19; converted property
@property(assign) int borderOffset;	// G=0x33c096cd; S=0x33b09b6d; converted property
@property(assign) unsigned long bottomMargin;	// G=0x33a4d85d; S=0x33a42de5; converted property
@property(assign) int breakType;	// G=0x33a4e341; S=0x33a45b25; converted property
@property(assign) int chapterNumberSeparator;	// G=0x33c0a0d9; S=0x33c0a169; converted property
@property(assign) unsigned short columnCount;	// G=0x33a85991; S=0x33a8580d; converted property
@property(assign) long columnSpace;	// G=0x33c0a579; S=0x33a42b49; converted property
@property(assign) BOOL columnsEqualWidth;	// G=0x33c0a4e5; S=0x33a9eefd; converted property
@property(assign) unsigned long footerMargin;	// G=0x33c08d29; S=0x33a42e8d; converted property
@property(retain) id formattingChangeDate;	// G=0x33c0ab15; S=0x33c0aba9; converted property
@property(assign) BOOL formattingChanged;	// G=0x33c0a7e5; S=0x33c0a879; converted property
@property(assign) unsigned long gutterMargin;	// G=0x33c08e61; S=0x33a42ee1; converted property
@property(assign) unsigned long headerMargin;	// G=0x33a4ddd5; S=0x33a42e39; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x33c0a985; S=0x33c0aa19; converted property
@property(assign) unsigned long leftMargin;	// G=0x33a4d6a1; S=0x33a42ce9; converted property
@property(assign) short lineNumberDistance;	// G=0x33c09ac9; S=0x33a97be5; converted property
@property(assign) unsigned short lineNumberIncrement;	// G=0x33c09991; S=0x33b27c39; converted property
@property(assign) int lineNumberRestart;	// G=0x33c09c01; S=0x33b27c91; converted property
@property(assign) short lineNumberStart;	// G=0x33c09801; S=0x33c09895; converted property
@property(assign) unsigned long pageHeight;	// G=0x33a4d445; S=0x33a42c95; converted property
@property(assign) int pageNumberFormat;	// G=0x33c09d35; S=0x33aaa291; converted property
@property(assign) BOOL pageNumberRestart;	// G=0x33c09fa1; S=0x33a45abd; converted property
@property(assign) unsigned short pageNumberStart;	// G=0x33c09e69; S=0x33a45a65; converted property
@property(assign) int pageOrientation;	// G=0x33c08b51; S=0x33aaa4b9; converted property
@property(assign) unsigned long pageScale;	// G=0x33c08841; S=0x33c088d1; converted property
@property(assign) unsigned long pageWidth;	// G=0x33a4d311; S=0x33a42c41; converted property
@property(assign) int resolveMode;	// G=0x33a851ed; S=0x33a41db5; converted property
@property(assign) unsigned long rightMargin;	// G=0x33a4d735; S=0x33a42d3d; converted property
@property(assign) int textDirection;	// G=0x33c089c9; S=0x33c08a59; converted property
@property(assign) BOOL titlePage;	// G=0x33a985c5; S=0x33a984b9; converted property
@property(assign) unsigned long topMargin;	// G=0x33a4d7c9; S=0x33a42d91; converted property
@property(assign) int verticalJustification;	// G=0x33c0a6b1; S=0x33ae9cbd; converted property
- (id)initWithDocument:(id)document;	// 0x33a3ba29
- (id).cxx_construct;	// 0x33a3ba25
- (void)appendColumnSpace:(unsigned long)space;	// 0x33a9f0d5
- (void)appendColumnWidth:(unsigned long)width;	// 0x33a9efbd
// converted property getter: - (int)borderDepth;	// 0x33c09465
// converted property getter: - (int)borderDisplay;	// 0x33c09599
// converted property getter: - (int)borderOffset;	// 0x33c096cd
- (id)bottomBorder;	// 0x33c091fd
// converted property getter: - (unsigned long)bottomMargin;	// 0x33a4d85d
// converted property getter: - (int)breakType;	// 0x33a4e341
// converted property getter: - (int)chapterNumberSeparator;	// 0x33c0a0d9
// converted property getter: - (unsigned short)columnCount;	// 0x33a85991
// converted property getter: - (long)columnSpace;	// 0x33c0a579
- (unsigned long)columnSpaceAt:(unsigned)at;	// 0x33c0a409
- (unsigned long)columnWidthAt:(unsigned)at;	// 0x33c0a261
// converted property getter: - (BOOL)columnsEqualWidth;	// 0x33c0a4e5
- (void)dealloc;	// 0x33a5b08d
- (id)document;	// 0x33c08831
- (id)evenPageFooter;	// 0x33a45f59
- (id)evenPageHeader;	// 0x33a45a55
- (id)firstPageFooter;	// 0x33a54f55
- (id)firstPageHeader;	// 0x33a4dda5
// converted property getter: - (unsigned long)footerMargin;	// 0x33c08d29
// converted property getter: - (id)formattingChangeDate;	// 0x33c0ab15
// converted property getter: - (BOOL)formattingChanged;	// 0x33c0a7e5
// converted property getter: - (unsigned long)gutterMargin;	// 0x33c08e61
// converted property getter: - (unsigned long)headerMargin;	// 0x33a4ddd5
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x33c0a985
- (BOOL)isBorderDepthOverridden;	// 0x33c094f5
- (BOOL)isBorderDisplayOverridden;	// 0x33c09629
- (BOOL)isBorderOffsetOverridden;	// 0x33c0975d
- (BOOL)isBottomBorderOverridden;	// 0x33c0928d
- (BOOL)isBottomMarginOverridden;	// 0x33a4df09
- (BOOL)isBreakTypeOverridden;	// 0x33a4e29d
- (BOOL)isChapterNumberSeparatorOverridden;	// 0x33c0a1bd
- (BOOL)isColumnCountOverridden;	// 0x33a42aa5
- (BOOL)isColumnSpaceOverridden;	// 0x33c0a60d
- (BOOL)isColumnsEqualWidthOverridden;	// 0x33a42b9d
- (BOOL)isFooterMarginOverridden;	// 0x33c08dbd
- (BOOL)isFormattingChangeDateOverridden;	// 0x33c0ac41
- (BOOL)isFormattingChangedOverridden;	// 0x33c0a8e1
- (BOOL)isGutterMarginOverridden;	// 0x33c08ef1
- (BOOL)isHeaderMarginOverridden;	// 0x33c08c85
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x33c0aa71
- (BOOL)isLastColumnWidthDefined;	// 0x33c0a33d
- (BOOL)isLeftBorderOverridden;	// 0x33c09159
- (BOOL)isLeftMarginOverridden;	// 0x33a4d991
- (BOOL)isLineNumberDistanceOverridden;	// 0x33c09b5d
- (BOOL)isLineNumberIncrementOverridden;	// 0x33c09a25
- (BOOL)isLineNumberRestartOverridden;	// 0x33c09c91
- (BOOL)isLineNumberStartOverridden;	// 0x33c098ed
- (BOOL)isPageHeightOverridden;	// 0x33a4d3a1
- (BOOL)isPageNumberFormatOverridden;	// 0x33c09dc5
- (BOOL)isPageNumberRestartOverridden;	// 0x33c0a035
- (BOOL)isPageNumberStartOverridden;	// 0x33c09efd
- (BOOL)isPageOrientationOverridden;	// 0x33c08be1
- (BOOL)isPageScaleOverridden;	// 0x33c08925
- (BOOL)isPageWidthOverridden;	// 0x33a4d26d
- (BOOL)isRightBorderOverridden;	// 0x33c093c1
- (BOOL)isRightMarginOverridden;	// 0x33a4dad5
- (BOOL)isTextDirectionOverridden;	// 0x33c08aad
- (BOOL)isTitlePageOverridden;	// 0x33a4e4f9
- (BOOL)isTopBorderOverridden;	// 0x33c09025
- (BOOL)isTopMarginOverridden;	// 0x33a4dc19
- (BOOL)isVerticalJustificationOverridden;	// 0x33c0a741
- (id)leftBorder;	// 0x33c090c9
// converted property getter: - (unsigned long)leftMargin;	// 0x33a4d6a1
// converted property getter: - (short)lineNumberDistance;	// 0x33c09ac9
// converted property getter: - (unsigned short)lineNumberIncrement;	// 0x33c09991
// converted property getter: - (int)lineNumberRestart;	// 0x33c09c01
// converted property getter: - (short)lineNumberStart;	// 0x33c09801
- (id)mutableBottomBorder;	// 0x33b13d39
- (id)mutableLeftBorder;	// 0x33b13ca9
- (id)mutableRightBorder;	// 0x33b13dc9
- (id)mutableTopBorder;	// 0x33b13c19
- (id)oddPageFooter;	// 0x33a45f69
- (id)oddPageHeader;	// 0x33a4210d
// converted property getter: - (unsigned long)pageHeight;	// 0x33a4d445
// converted property getter: - (int)pageNumberFormat;	// 0x33c09d35
// converted property getter: - (BOOL)pageNumberRestart;	// 0x33c09fa1
// converted property getter: - (unsigned short)pageNumberStart;	// 0x33c09e69
// converted property getter: - (int)pageOrientation;	// 0x33c08b51
// converted property getter: - (unsigned long)pageScale;	// 0x33c08841
// converted property getter: - (unsigned long)pageWidth;	// 0x33a4d311
// converted property getter: - (int)resolveMode;	// 0x33a851ed
- (id)rightBorder;	// 0x33c09331
// converted property getter: - (unsigned long)rightMargin;	// 0x33a4d735
// converted property setter: - (void)setBorderDepth:(int)depth;	// 0x33b09ac5
// converted property setter: - (void)setBorderDisplay:(int)display;	// 0x33b09b19
// converted property setter: - (void)setBorderOffset:(int)offset;	// 0x33b09b6d
// converted property setter: - (void)setBottomMargin:(unsigned long)margin;	// 0x33a42de5
// converted property setter: - (void)setBreakType:(int)type;	// 0x33a45b25
// converted property setter: - (void)setChapterNumberSeparator:(int)separator;	// 0x33c0a169
// converted property setter: - (void)setColumnCount:(unsigned short)count;	// 0x33a8580d
// converted property setter: - (void)setColumnSpace:(long)space;	// 0x33a42b49
// converted property setter: - (void)setColumnsEqualWidth:(BOOL)width;	// 0x33a9eefd
// converted property setter: - (void)setFooterMargin:(unsigned long)margin;	// 0x33a42e8d
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x33c0aba9
// converted property setter: - (void)setFormattingChanged:(BOOL)changed;	// 0x33c0a879
// converted property setter: - (void)setGutterMargin:(unsigned long)margin;	// 0x33a42ee1
// converted property setter: - (void)setHeaderMargin:(unsigned long)margin;	// 0x33a42e39
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x33c0aa19
// converted property setter: - (void)setLeftMargin:(unsigned long)margin;	// 0x33a42ce9
// converted property setter: - (void)setLineNumberDistance:(short)distance;	// 0x33a97be5
// converted property setter: - (void)setLineNumberIncrement:(unsigned short)increment;	// 0x33b27c39
// converted property setter: - (void)setLineNumberRestart:(int)restart;	// 0x33b27c91
// converted property setter: - (void)setLineNumberStart:(short)start;	// 0x33c09895
// converted property setter: - (void)setPageHeight:(unsigned long)height;	// 0x33a42c95
// converted property setter: - (void)setPageNumberFormat:(int)format;	// 0x33aaa291
// converted property setter: - (void)setPageNumberRestart:(BOOL)restart;	// 0x33a45abd
// converted property setter: - (void)setPageNumberStart:(unsigned short)start;	// 0x33a45a65
// converted property setter: - (void)setPageOrientation:(int)orientation;	// 0x33aaa4b9
// converted property setter: - (void)setPageScale:(unsigned long)scale;	// 0x33c088d1
// converted property setter: - (void)setPageWidth:(unsigned long)width;	// 0x33a42c41
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x33a41db5
// converted property setter: - (void)setRightMargin:(unsigned long)margin;	// 0x33a42d3d
// converted property setter: - (void)setTextDirection:(int)direction;	// 0x33c08a59
// converted property setter: - (void)setTitlePage:(BOOL)page;	// 0x33a984b9
// converted property setter: - (void)setTopMargin:(unsigned long)margin;	// 0x33a42d91
// converted property setter: - (void)setVerticalJustification:(int)justification;	// 0x33ae9cbd
- (id)text;	// 0x33a3bbc5
// converted property getter: - (int)textDirection;	// 0x33c089c9
// converted property getter: - (BOOL)titlePage;	// 0x33a985c5
- (id)topBorder;	// 0x33c08f95
// converted property getter: - (unsigned long)topMargin;	// 0x33a4d7c9
// converted property getter: - (int)verticalJustification;	// 0x33c0a6b1
@end

