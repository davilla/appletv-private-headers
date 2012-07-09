/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"

@class DOMRange, WebDataSource, NSString, NSDictionary, NSData, NSMutableAttributedString, NSMutableDictionary, NSURL, NSMutableArray, WebView, DOMDocument;

@interface NSHTMLReader : NSObject {
	NSMutableAttributedString *_attrStr;	// 4 = 0x4
	NSMutableDictionary *_documentAttrs;	// 8 = 0x8
	NSData *_data;	// 12 = 0xc
	NSURL *_baseURL;	// 16 = 0x10
	NSDictionary *_options;	// 20 = 0x14
	WebView *_webView;	// 24 = 0x18
	id _webDelegate;	// 28 = 0x1c
	DOMDocument *_document;	// 32 = 0x20
	DOMRange *_domRange;	// 36 = 0x24
	NSMutableArray *_domStartAncestors;	// 40 = 0x28
	WebDataSource *_dataSource;	// 44 = 0x2c
	NSString *_standardFontFamily;	// 48 = 0x30
	float _textSizeMultiplier;	// 52 = 0x34
	float _webViewTextSizeMultiplier;	// 56 = 0x38
	float _defaultTabInterval;	// 60 = 0x3c
	float _defaultFontSize;	// 64 = 0x40
	float _minimumFontSize;	// 68 = 0x44
	NSMutableArray *_textLists;	// 72 = 0x48
	NSMutableArray *_textBlocks;	// 76 = 0x4c
	NSMutableArray *_textTables;	// 80 = 0x50
	NSMutableDictionary *_textTableFooters;	// 84 = 0x54
	NSMutableArray *_textTableSpacings;	// 88 = 0x58
	NSMutableArray *_textTablePaddings;	// 92 = 0x5c
	NSMutableArray *_textTableRows;	// 96 = 0x60
	NSMutableArray *_textTableRowArrays;	// 100 = 0x64
	NSMutableArray *_textTableRowBackgroundColors;	// 104 = 0x68
	NSMutableDictionary *_computedStylesForElements;	// 108 = 0x6c
	NSMutableDictionary *_specifiedStylesForElements;	// 112 = 0x70
	NSMutableDictionary *_stringsForNodes;	// 116 = 0x74
	NSMutableDictionary *_floatsForNodes;	// 120 = 0x78
	NSMutableDictionary *_colorsForNodes;	// 124 = 0x7c
	NSMutableDictionary *_attributesForElements;	// 128 = 0x80
	NSMutableDictionary *_elementIsBlockLevel;	// 132 = 0x84
	NSMutableDictionary *_fontCache;	// 136 = 0x88
	NSMutableArray *_writingDirectionArray;	// 140 = 0x8c
	int _domRangeStartIndex;	// 144 = 0x90
	int _indexingLimit;	// 148 = 0x94
	int _thumbnailLimit;	// 152 = 0x98
	int _errorCode;	// 156 = 0x9c
	int _quoteLevel;	// 160 = 0xa0
	struct {
		unsigned isSoft : 1;
		unsigned reachedStart : 1;
		unsigned reachedEnd : 1;
		unsigned isIndexing : 1;
		unsigned isTesting : 1;
		unsigned hasTrailingNewline : 1;
		unsigned pad : 26;
	} _flags;	// 164 = 0xa4
}
+ (id)defaultParagraphStyle;	// 0x368e19f1
- (id)initWithDOMRange:(id)domrange;	// 0x368ed609
- (id)initWithData:(id)data options:(id)options;	// 0x368ecf21
- (id)initWithPath:(id)path options:(id)options;	// 0x368ed5c9
- (Class)_DOMHTMLTableCellElementClass;	// 0x368e1805
- (Class)_WebMessageDocumentClass;	// 0x368e182d
- (BOOL)_addAttachmentForElement:(id)element URL:(id)url needsParagraph:(BOOL)paragraph usePlaceholder:(BOOL)placeholder;	// 0x368e51fd
- (void)_addMarkersToList:(id)list range:(NSRange)range;	// 0x368e7f51
- (void)_addQuoteForElement:(id)element opening:(BOOL)opening level:(int)level;	// 0x368e5729
- (void)_addQuoteForLibXML2ElementNode:(xmlNode *)libXML2ElementNode opening:(BOOL)opening level:(int)level;	// 0x368eb325
- (void)_addTableCellForElement:(id)element;	// 0x368e6dd1
- (void)_addTableForElement:(id)element;	// 0x368e6a01
- (void)_addValue:(id)value forElement:(id)element;	// 0x368e586d
- (void)_adjustTrailingNewline;	// 0x368e9e45
- (id)_attributesForElement:(id)element;	// 0x368e4d2d
- (id)_blockLevelElementForNode:(id)node;	// 0x368e327d
- (id)_childrenForNode:(id)node;	// 0x368e1a81
- (id)_colorForNode:(id)node property:(id)property;	// 0x368e3529
- (id)_computedAttributesForElement:(id)element;	// 0x368e3679
- (id)_computedColorForNode:(id)node property:(id)property;	// 0x368e3301
- (id)_computedStringForNode:(id)node property:(id)property;	// 0x368e1d0d
- (id)_computedStyleForElement:(id)element;	// 0x368e1af9
- (id)_createWebArchiveForData:(id)data;	// 0x368ea1f1
- (BOOL)_elementHasOwnBackgroundColor:(id)color;	// 0x368e31b9
- (BOOL)_elementIsBlockLevel:(id)level;	// 0x368e3045
- (BOOL)_enterElement:(id)element tag:(id)tag display:(id)display depth:(int)depth embedded:(BOOL)embedded;	// 0x368e682d
- (BOOL)_enterLibXML2ElementNode:(xmlNode *)node tag:(id)tag;	// 0x368eb699
- (void)_exitElement:(id)element tag:(id)tag display:(id)display depth:(int)depth startIndex:(unsigned)index;	// 0x368e8471
- (void)_exitLibXML2ElementNode:(xmlNode *)node tag:(id)tag startIndex:(unsigned)index;	// 0x368ebc21
- (void)_fillInBlock:(id)block forElement:(id)element backgroundColor:(id)color extraMargin:(float)margin extraPadding:(float)padding isTable:(BOOL)table;	// 0x368e5941
- (BOOL)_getComputedFloat:(float *)aFloat forNode:(id)node property:(id)property;	// 0x368e2b91
- (BOOL)_getFloat:(float *)aFloat forNode:(id)node property:(id)property;	// 0x368e2ead
- (void)_load;	// 0x368ecad5
- (void)_loadFromDOMRange;	// 0x368eae1d
- (void)_loadUsingLibXML2;	// 0x368ec521
- (void)_loadUsingWebKit;	// 0x368ea3d1
- (void)_loadUsingWebKitOnMainThread;	// 0x368eca89
- (void)_loadWebKit;	// 0x368e16f5
- (void)_newLineForElement:(id)element;	// 0x368e4fa5
- (void)_newLineForLibXML2ElementNode:(xmlNode *)libXML2ElementNode;	// 0x368eb269
- (void)_newParagraphForElement:(id)element tag:(id)tag allowEmpty:(BOOL)empty suppressTrailingSpace:(BOOL)space;	// 0x368e4db9
- (void)_newParagraphForLibXML2ElementNode:(xmlNode *)libXML2ElementNode tag:(id)tag allowEmpty:(BOOL)empty suppressTrailingSpace:(BOOL)space;	// 0x368eb13d
- (void)_newTabForElement:(id)element;	// 0x368e50c9
- (void)_parseLibXML2Node:(xmlNode *)node;	// 0x368ec4f1
- (void)_parseNode:(id)node;	// 0x368e9e25
- (BOOL)_processElement:(id)element tag:(id)tag display:(id)display depth:(int)depth;	// 0x368e71d5
- (void)_processHeadElement:(id)element;	// 0x368e66f5
- (BOOL)_processLibXML2ElementNode:(xmlNode *)node tag:(id)tag;	// 0x368ebb65
- (void)_processLibXML2HeadElementNode:(xmlNode *)node;	// 0x368eb5d1
- (void)_processLibXML2MetaNode:(xmlNode *)node;	// 0x368eb4d5
- (void)_processLibXML2TextNode:(xmlNode *)node content:(id)content;	// 0x368ec0b5
- (void)_processLibXML2TitleNode:(xmlNode *)node;	// 0x368eb405
- (void)_processMetaElementWithName:(id)name content:(id)content;	// 0x368e5fa9
- (void)_processText:(id)text;	// 0x368e9079
- (BOOL)_sanitizeWebArchiveArray:(id)array;	// 0x368e9eed
- (BOOL)_sanitizeWebArchiveDictionary:(id)dictionary;	// 0x368ea041
- (id)_specifiedStyleForElement:(id)element;	// 0x368e1c51
- (id)_stringForNode:(id)node property:(id)property;	// 0x368e2a8d
- (void)_traverseFooterNode:(id)node depth:(int)depth;	// 0x368e9b71
- (void)_traverseLibXML2Node:(xmlNode *)node depth:(int)depth;	// 0x368ec345
- (void)_traverseNode:(id)node depth:(int)depth embedded:(BOOL)embedded;	// 0x368e9665
- (Class)_webArchiveClass;	// 0x368e17a5
- (id)_webKitBundle;	// 0x368e168d
- (id)_webPreferences;	// 0x368e1895
- (Class)_webViewClass;	// 0x368e1745
- (id)attributedString;	// 0x368ed651
- (void)dealloc;	// 0x368eccc9
- (id)documentAttributes;	// 0x368ed6b1
- (void)setMutableAttributedString:(id)string;	// 0x368ed711
@end
