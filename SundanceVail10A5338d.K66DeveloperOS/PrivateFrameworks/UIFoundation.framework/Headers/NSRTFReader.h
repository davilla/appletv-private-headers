/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSMapTable, UIColor, NSTextTable, NSData, NSMutableAttributedString, NSMutableDictionary, NSArray, NSFileWrapper, NSCalendar, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSRTFReader : NSObject {
	NSMutableAttributedString *_topAttributedString;	// 4 = 0x4
	NSMutableAttributedString *_curAttributedString;	// 8 = 0x8
	NSMutableArray *_attributesStack;	// 12 = 0xc
	NSMutableDictionary *_curAttributes;	// 16 = 0x10
	unsigned _level;	// 20 = 0x14
	NSData *_rtfData;	// 24 = 0x18
	NSMutableDictionary *_fontTable;	// 28 = 0x1c
	NSFileWrapper *_document;	// 32 = 0x20
	union {
		unsigned char thin[128];
		unsigned short fat[128];
	} _textBuffer;	// 36 = 0x24
	unsigned _textBufferIndex;	// 292 = 0x124
	int _rtfVersion;	// 296 = 0x128
	int _cocoaVersion;	// 300 = 0x12c
	int _cocoaSubVersion;	// 304 = 0x130
	int _readOnly;	// 308 = 0x134
	int _usesScreenFonts;	// 312 = 0x138
	unsigned long _defaultToUniCharEncoding;	// 316 = 0x13c
	NSAttributeInfo _attributeInfo;	// 320 = 0x140
	NSMutableData *_attributeInfoStack;	// 348 = 0x15c
	CGSize _paperSize;	// 352 = 0x160
	float _lMargin;	// 360 = 0x168
	float _rMargin;	// 364 = 0x16c
	float _bMargin;	// 368 = 0x170
	float _tMargin;	// 372 = 0x174
	NSMutableDictionary *_documentInfoDictionary;	// 376 = 0x178
	CGSize _viewSize;	// 380 = 0x17c
	int _viewScale;	// 388 = 0x184
	int _viewKind;	// 392 = 0x188
	NSMapTable *_cachedRTFFontTable;	// 396 = 0x18c
	float _hyphenationFactor;	// 400 = 0x190
	float _defaultTabInterval;	// 404 = 0x194
	UIColor *_documentBackgroundColor;	// 408 = 0x198
	NSRTFPriv _private;	// 412 = 0x19c
	BOOL _textBufferContentsIsFat;	// 2592 = 0xa20
	BOOL _explicitCharSetEncountered;	// 2593 = 0xa21
	BOOL _isRTLDocument;	// 2594 = 0xa22
	int _readLimit;	// 2596 = 0xa24
	int _thumbnailLimit;	// 2600 = 0xa28
	BOOL _limitReached;	// 2604 = 0xa2c
	unsigned char _textFlow;	// 2605 = 0xa2d
	NSMutableArray *_layoutOrientationSections;	// 2608 = 0xa30
	unsigned _verticalOrientationLocation;	// 2612 = 0xa34
	NSArray *_textBlocks;	// 2616 = 0xa38
	NSMutableArray *_nestedTables;	// 2620 = 0xa3c
	NSTextTable *_currentTable;	// 2624 = 0xa40
	NSTextTable *_previousTable;	// 2628 = 0xa44
	NSMutableArray *_currentRowArray;	// 2632 = 0xa48
	NSMutableArray *_previousRowArray;	// 2636 = 0xa4c
	int _currentRow;	// 2640 = 0xa50
	int _currentColumn;	// 2644 = 0xa54
	int _currentDefinitionColumn;	// 2648 = 0xa58
	BOOL _currentRowIsLast;	// 2652 = 0xa5c
	BOOL _setTableCells;	// 2653 = 0xa5d
	unsigned _currentBorderEdge;	// 2656 = 0xa60
	BOOL _currentBorderIsTable;	// 2660 = 0xa64
	NSMutableDictionary *_listDefinitions;	// 2664 = 0xa68
	int _currentListNumber;	// 2668 = 0xa6c
	int _currentListLevel;	// 2672 = 0xa70
	NSCalendar *_gregorianCalendar;	// 2676 = 0xa74
	NSMutableDictionary *_fontAttributesTable;	// 2680 = 0xa78
}
@property(assign) int baseWritingDirection;	// G=0x368dc22d; S=0x368dc215; converted property
@property(assign) int cocoaSubVersion;	// G=0x368dc069; S=0x368dc0cd; converted property
@property(assign) int cocoaVersion;	// G=0x368dc051; S=0x368dc079; converted property
@property(assign) float defaultTabInterval;	// G=0x368dc205; S=0x368dc1f5; converted property
@property(retain) id mutableAttributedString;	// G=0x368dd885; S=0x368dd819; converted property
@property(assign) CGSize paperSize;	// G=0x368dbfed; S=0x368dbfd9; converted property
@property(assign) unsigned textFlow;	// G=0x368dc279; S=0x368dc245; converted property
@property(assign) CGSize viewSize;	// G=0x368dc019; S=0x368dc005; converted property
- (id)initWithPath:(id)path;	// 0x368d7341
- (id)initWithRTF:(id)rtf;	// 0x368d7589
- (id)initWithRTFD:(id)rtfd;	// 0x368d719d
- (id)initWithRTFDFileWrapper:(id)rtfdfileWrapper;	// 0x368d7469
- (id)_RTFDFileWrapper;	// 0x368dbfa9
- (void)_addListDefinition:(id)definition forKey:(int)key;	// 0x368de425
- (void)_addOverride:(int)override forKey:(int)key;	// 0x368de4d5
- (void)_beginTableRow;	// 0x368dc52d
- (void)_clearTableCells;	// 0x368dcd21
- (unsigned)_currentBorderEdge;	// 0x368dc6c9
- (BOOL)_currentBorderIsTable;	// 0x368dc6d9
- (int)_currentListLevel;	// 0x368de3f5
- (int)_currentListNumber;	// 0x368de3d5
- (id)_currentTable;	// 0x368dc65d
- (id)_currentTableCell;	// 0x368dc66d
- (BOOL)_currentTableCellIsPlaceholder;	// 0x368dc6e9
- (id)_documentInfoDictionary;	// 0x368ddfe1
- (void)_endTableCell;	// 0x368dcfe1
- (void)_endTableCellDefinition;	// 0x368dcf41
- (void)_endTableRow;	// 0x368dd081
- (void)_ensureTableCells;	// 0x368dc289
- (void)_lastTableRow;	// 0x368dd06d
- (id)_listDefinitions;	// 0x368de415
- (void)_mergeTableCellsHorizontally;	// 0x368dd1c9
- (void)_mergeTableCellsVertically;	// 0x368dd27d
- (id)_mutableParagraphStyle;	// 0x368dd9cd
- (void)_paragraphInTable;	// 0x368dcf91
- (void)_popState;	// 0x368deb09
- (void)_popTableState;	// 0x368dc9a5
- (void)_pushState;	// 0x368dea81
- (void)_pushTableState;	// 0x368dc7dd
- (void)_setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;	// 0x368dc7bd
- (void)_setCurrentListLevel:(int)level;	// 0x368de405
- (void)_setCurrentListNumber:(int)number;	// 0x368de3e5
- (void)_setRTFDFileWrapper:(id)wrapper;	// 0x368dbf65
- (void)_setTableCells;	// 0x368dcb59
- (void)_setTableNestingLevel:(int)level;	// 0x368dcd7d
- (void)_startTableRowDefinition;	// 0x368dcf31
- (void)_updateAttributes;	// 0x368de031
- (id)attributedString;	// 0x368ddb6d
- (id)attributedStringToEndOfGroup;	// 0x368dda99
- (id)attributesAtEndOfGroup;	// 0x368dde3d
// converted property getter: - (int)baseWritingDirection;	// 0x368dc22d
// converted property getter: - (int)cocoaSubVersion;	// 0x368dc069
// converted property getter: - (int)cocoaVersion;	// 0x368dc051
- (void)dealloc;	// 0x368dec1d
- (id)defaultParagraphStyle;	// 0x368dd8f1
// converted property getter: - (float)defaultTabInterval;	// 0x368dc205
- (id)documentAttributes;	// 0x368dd369
- (void)finalize;	// 0x368dee11
- (float)floatCocoaVersion;	// 0x368dc0e1
// converted property getter: - (id)mutableAttributedString;	// 0x368dd885
- (id)mutableAttributes;	// 0x368dd895
// converted property getter: - (CGSize)paperSize;	// 0x368dbfed
- (void)processString:(id)string;	// 0x368de5f1
- (void)setBackgroundColor:(id)color;	// 0x368dc1b1
// converted property setter: - (void)setBaseWritingDirection:(int)direction;	// 0x368dc215
- (void)setBottomMargin:(float)margin;	// 0x368dc191
// converted property setter: - (void)setCocoaSubVersion:(int)version;	// 0x368dc0cd
// converted property setter: - (void)setCocoaVersion:(int)version;	// 0x368dc079
// converted property setter: - (void)setDefaultTabInterval:(float)interval;	// 0x368dc1f5
- (void)setHyphenationFactor:(float)factor;	// 0x368dc1a1
- (void)setLeftMargin:(float)margin;	// 0x368dc161
// converted property setter: - (void)setMutableAttributedString:(id)string;	// 0x368dd819
// converted property setter: - (void)setPaperSize:(CGSize)size;	// 0x368dbfd9
- (void)setReadLimit:(int)limit;	// 0x368dbfb9
- (void)setReadOnly:(int)only;	// 0x368dc141
- (void)setRightMargin:(float)margin;	// 0x368dc171
// converted property setter: - (void)setTextFlow:(unsigned)flow;	// 0x368dc245
- (void)setThumbnailLimit:(int)limit;	// 0x368dbfc9
- (void)setTopMargin:(float)margin;	// 0x368dc181
- (void)setUsesScreenFonts:(int)fonts;	// 0x368dc151
- (void)setViewKind:(int)kind;	// 0x368dc031
- (void)setViewScale:(int)scale;	// 0x368dc041
// converted property setter: - (void)setViewSize:(CGSize)size;	// 0x368dc005
// converted property getter: - (unsigned)textFlow;	// 0x368dc279
// converted property getter: - (CGSize)viewSize;	// 0x368dc019
@end

