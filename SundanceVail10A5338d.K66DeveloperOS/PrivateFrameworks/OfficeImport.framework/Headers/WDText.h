/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTableCell, WDDocument, NSMutableArray;

@interface WDText : NSObject {
	NSMutableArray *mBlocks;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	int mTextType;	// 12 = 0xc
	WDTableCell *mTableCell;	// 16 = 0x10
}
- (id)initWithDocument:(id)document textType:(int)type;	// 0x33a2e449
- (id)initWithDocument:(id)document textType:(int)type tableCell:(id)cell;	// 0x33a2e46d
- (void)addBlock:(id)block;	// 0x33c11a69
- (id)addParagraph;	// 0x33a3c3dd
- (id)addParagraphAtIndex:(int)index;	// 0x33c11a89
- (id)addTable;	// 0x33a436ad
- (id)addTableAtIndex:(int)index;	// 0x33c11af9
- (id)blockAt:(int)at;	// 0x33a4ed5d
- (int)blockCount;	// 0x33a4ddb5
- (id)blockIterator;	// 0x33c11b69
- (id)blocks;	// 0x33c11a39
- (id)content;	// 0x33c11d35
- (void)dealloc;	// 0x33a5b1e5
- (id)document;	// 0x33a3c54d
- (int)indexOfBlock:(id)block;	// 0x33c11a49
- (BOOL)isEmpty;	// 0x33c11cbd
- (id)lastBlock;	// 0x33a4154d
- (id)newBlockIterator;	// 0x33c11bbd
- (id)newRunIterator;	// 0x33c11c61
- (void)removeLastBlock;	// 0x33a98499
- (void)removeLastCharacter:(unsigned short)character;	// 0x33a98521
- (id)runIterator;	// 0x33c11c01
- (id)tableCell;	// 0x33aa3599
- (int)tableNestingLevel;	// 0x33a80c49
- (int)textType;	// 0x33a3dde5
@end

