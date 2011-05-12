/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTableCell, NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDText : NSObject {
@private
	NSMutableArray *mBlocks;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	int mTextType;	// 12 = 0xc
	WDTableCell *mTableCell;	// 16 = 0x10
}
- (id)initWithDocument:(id)document textType:(int)type;	// 0x34481e39
- (id)initWithDocument:(id)document textType:(int)type tableCell:(id)cell;	// 0x34481e5d
- (void)addBlock:(id)block;	// 0x345e4751
- (id)addParagraph;	// 0x3448df55
- (id)addParagraphAtIndex:(int)index;	// 0x345e46ed
- (id)addTable;	// 0x344971f1
- (id)addTableAtIndex:(int)index;	// 0x345e4689
- (id)blockAt:(int)at;	// 0x34462049
- (int)blockCount;	// 0x344621d1
- (id)blockIterator;	// 0x345e4641
- (id)blocks;	// 0x345e43f9
- (id)content;	// 0x345e4409
- (void)dealloc;	// 0x3446d521
- (id)document;	// 0x3448e0a9
- (int)indexOfBlock:(id)block;	// 0x345e4771
- (BOOL)isEmpty;	// 0x345e44e9
- (id)lastBlock;	// 0x34516575
- (id)newBlockIterator;	// 0x345e4605
- (id)newRunIterator;	// 0x345e455d
- (void)removeLastBlock;	// 0x344919dd
- (void)removeLastCharacter:(unsigned short)character;	// 0x344923d9
- (id)runIterator;	// 0x345e45b1
- (id)tableCell;	// 0x34499775
- (int)tableNestingLevel;	// 0x3448d0d9
- (int)textType;	// 0x3448dbf9
@end

