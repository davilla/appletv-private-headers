/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableString, NSMutableArray;

@interface PptTextBlock : NSObject {
	PptTextHeaderAtom *mTextHeader;	// 4 = 0x4
	NSMutableString *mText;	// 8 = 0x8
	PptTextBlockStylingAtom *mStyleText;	// 12 = 0xc
	NSMutableArray *mMetaCharacterFields;	// 16 = 0x10
	NSMutableArray *mBookmarks;	// 20 = 0x14
	NSMutableArray *mHyperlinks;	// 24 = 0x18
	PptTextRulerAtom *mTextRuler;	// 28 = 0x1c
}
- (id)init;	// 0x31bebb31
- (id)bookmarks;	// 0x31e004d1
- (PptCharRun *)characterRunAtIndex:(int)index;	// 0x31bee0d1
- (int)characterRunCount;	// 0x31bec5d5
- (void)dealloc;	// 0x31bed295
- (id)hyperlinks;	// 0x31bec5ed
- (id)metaCharacterFields;	// 0x31bec5fd
- (PptParaRun *)paragraphRunAtIndex:(int)index;	// 0x31bec5a5
- (int)paragraphRunCount;	// 0x31bec58d
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)hyperlinks;	// 0x31bebf61
- (void)readString:(id)string;	// 0x31bebd61
- (void)readStyles:(id)styles;	// 0x31bebed9
- (void)readTextBlock:(id)block;	// 0x31bebc39
- (id)text;	// 0x31bec269
- (unsigned long)textIndex;	// 0x31e004b9
- (PptTextRulerAtom *)textRuler;	// 0x31bec245
- (int)textType;	// 0x31bec255
- (void)writeTextBlock:(id)block;	// 0x31e004b5
@end

