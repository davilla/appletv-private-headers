/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPChunk.h"

@class NSMutableArray;

@interface CPPage : CPChunk <CPDisposable> {
	int pageNumber;	// 52 = 0x34
	CGRect pageCropBox;	// 56 = 0x38
	BOOL hasZones;	// 72 = 0x48
	BOOL hasTextLines;	// 73 = 0x49
	BOOL isDirty;	// 74 = 0x4a
	BOOL isStartOfSection;	// 75 = 0x4b
	long maxLayoutZOrder;	// 76 = 0x4c
	CPChunk *background;	// 80 = 0x50
	float complexity;	// 84 = 0x54
	int rotation;	// 88 = 0x58
	NSMutableArray *shapesOnPage;	// 92 = 0x5c
	NSMutableArray *imagesOnPage;	// 96 = 0x60
	NSMutableArray *graphicsOnPage;	// 100 = 0x64
	NSMutableArray *columnsOnPage;	// 104 = 0x68
	CPPDFContext *pdfContext;	// 108 = 0x6c
	BOOL contextOwner;	// 112 = 0x70
	CGPDFPageRef pdfPage;	// 116 = 0x74
	NSMutableArray *textLinesOnPage;	// 120 = 0x78
	void *_layout;	// 124 = 0x7c
	id hitTest;	// 128 = 0x80
	BOOL reconstructed;	// 132 = 0x84
	opaque_pthread_mutex_t mutex;	// 136 = 0x88
}
@property(assign) CPPDFContext *PDFContext;	// G=0x30291df1; S=0x30291dd5; converted property
@property(retain) CPChunk *background;	// G=0x30291f6d; S=0x30292421; converted property
@property(readonly, retain) NSMutableArray *columnsOnPage;	// G=0x30291fad; converted property
@property(assign) float complexity;	// G=0x30291e49; S=0x30291e59; converted property
@property(readonly, retain) NSMutableArray *graphicsOnPage;	// G=0x30291ea9; converted property
@property(assign) BOOL hasTextLines;	// G=0x30291ed9; S=0x30291ee9; converted property
@property(assign) BOOL hasZones;	// G=0x30291ec9; S=0x30291eb9; converted property
@property(readonly, retain) id hitTest;	// G=0x302ba851; converted property
@property(readonly, retain) NSMutableArray *imagesOnPage;	// G=0x30291e99; converted property
@property(assign) BOOL isStartOfSection;	// G=0x30291ef9; S=0x30291f09; converted property
@property(assign) CGRect pageCropBox;	// G=0x30291e2d; S=0x30291e01; converted property
@property(assign) int pageNumber;	// G=0x30291e69; S=0x30291e79; converted property
@property(readonly, assign) CGPDFPageRef pdfPage;	// G=0x30291dc5; converted property
@property(assign) int rotation;	// G=0x30291f19; S=0x30291f29; converted property
@property(readonly, retain) NSMutableArray *shapesOnPage;	// G=0x30291e89; converted property
@property(readonly, retain) NSMutableArray *textLinesOnPage;	// G=0x3029201d; converted property
+ (void)sortByReadingOrder:(id)order;	// 0x302920b9
- (id)init;	// 0x30292725
- (id)initWithPDFPage:(CGPDFPageRef)pdfpage;	// 0x30292985
// converted property getter: - (CPPDFContext *)PDFContext;	// 0x30291df1
- (void)accept:(id)accept;	// 0x30292609
- (void)addColumns:(id)columns;	// 0x30291fbd
- (void)addImage:(id)image;	// 0x30292505
- (void)addShape:(id)shape;	// 0x30292541
// converted property getter: - (id)background;	// 0x30291f6d
- (id)bodyZone;	// 0x3029245d
- (id)children;	// 0x30291f7d
// converted property getter: - (id)columnsOnPage;	// 0x30291fad
// converted property getter: - (float)complexity;	// 0x30291e49
- (id)copyWithZone:(NSZone *)zone;	// 0x30292875
- (void)dealloc;	// 0x30292625
- (void)dispose;	// 0x302929dd
- (void)finalize;	// 0x302926e9
// converted property getter: - (id)graphicsOnPage;	// 0x30291ea9
// converted property getter: - (BOOL)hasTextLines;	// 0x30291ed9
// converted property getter: - (BOOL)hasZones;	// 0x30291ec9
// converted property getter: - (id)hitTest;	// 0x302ba851
// converted property getter: - (id)imagesOnPage;	// 0x30291e99
// converted property getter: - (BOOL)isStartOfSection;	// 0x30291ef9
- (void)layDownObjectsOnPage;	// 0x302921b1
- (void)layDownObjectsOnPageOld;	// 0x30292abd
- (CGPDFLayoutRef)layout;	// 0x302bc041
// converted property getter: - (CGRect)pageCropBox;	// 0x30291e2d
// converted property getter: - (int)pageNumber;	// 0x30291e69
- (id)parent;	// 0x3029257d
// converted property getter: - (CGPDFPageRef)pdfPage;	// 0x30291dc5
- (BOOL)populatePDFLayout:(CGPDFLayoutRef)layout;	// 0x302bb461
- (void)reconstruct;	// 0x30292a61
- (void)restoreBackGroundObjectToPage;	// 0x302923fd
// converted property getter: - (int)rotation;	// 0x30291f19
// converted property setter: - (void)setBackground:(id)background;	// 0x30292421
- (unsigned)setCellPositionsOf:(id)of from:(unsigned)from;	// 0x30292259
// converted property setter: - (void)setComplexity:(float)complexity;	// 0x30291e59
- (unsigned)setGraphicPositions:(id)positions from:(unsigned)from;	// 0x302921dd
// converted property setter: - (void)setHasTextLines:(BOOL)lines;	// 0x30291ee9
// converted property setter: - (void)setHasZones:(BOOL)zones;	// 0x30291eb9
// converted property setter: - (void)setIsStartOfSection:(BOOL)section;	// 0x30291f09
// converted property setter: - (void)setPDFContext:(CPPDFContext *)context;	// 0x30291dd5
// converted property setter: - (void)setPageCropBox:(CGRect)box;	// 0x30291e01
// converted property setter: - (void)setPageNumber:(int)number;	// 0x30291e79
- (unsigned)setPositionsOf:(id)of from:(unsigned)from;	// 0x302922d5
- (unsigned)setReadingOrder:(id)order from:(unsigned)from;	// 0x30292e4d
// converted property setter: - (void)setRotation:(int)rotation;	// 0x30291f29
// converted property getter: - (id)shapesOnPage;	// 0x30291e89
- (void)sortByReadingOrder;	// 0x30292099
// converted property getter: - (id)textLinesOnPage;	// 0x3029201d
- (unsigned)traverse:(id)traverse ordinal:(unsigned)ordinal;	// 0x30292381
@end

