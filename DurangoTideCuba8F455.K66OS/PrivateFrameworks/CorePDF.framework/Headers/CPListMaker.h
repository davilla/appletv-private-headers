/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"

@class CPList, CPLayoutArea, NSArray;

@interface CPListMaker : NSObject <CPDisposable> {
	CPLayoutArea *area;	// 4 = 0x4
	NSArray *spacers;	// 8 = 0x8
	unsigned textLineCount;	// 12 = 0xc
	CPTextLine **textLines;	// 16 = 0x10
	CPList *list;	// 20 = 0x14
}
+ (void)makeListsInChunk:(id)chunk;	// 0x30bd2aad
+ (void)makeListsInLayoutArea:(id)layoutArea;	// 0x30bd2b41
+ (void)makeListsInPage:(id)page;	// 0x30bd2a6d
- (id)initWithLayoutArea:(id)layoutArea;	// 0x30bd3039
- (void)dealloc;	// 0x30bd2f81
- (void)dispose;	// 0x30bd30e1
- (void)fetchTextLine:(id)line;	// 0x30bd2f05
- (void)fetchTextLinesInColumn:(id)column;	// 0x30bd3101
- (void)finalize;	// 0x30bd2ffd
- (BOOL)makeListFrom:(CPListInfo *)from;	// 0x30bd32ed
- (void)makeListItemFrom:(CPListInfo *)from stopAt:(unsigned)at;	// 0x30bd2c9d
- (void)makeLists;	// 0x30bd2b91
- (void)makeListsInColumn:(id)column;	// 0x30bd31b9
@end

