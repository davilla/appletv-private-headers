/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class EDSheet, EBReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderSheetState : NSObject {
@private
	EBReaderState *mReaderState;	// 4 = 0x4
	EDSheet *mEDSheet;	// 8 = 0x8
	CFDictionaryRef mSharedFormulas;	// 12 = 0xc
	unsigned mChartIndex;	// 16 = 0x10
}
- (id)initWithReaderState:(id)readerState;	// 0x32c055b5
- (void)dealloc;	// 0x32b06dcd
- (id)edSheet;	// 0x32aebd55
- (unsigned)nextChartIndex;	// 0x32c48a31
- (id)readerState;	// 0x32ae7edd
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x32afb181
- (id)resources;	// 0x32aeddfd
- (void)setEDSheet:(id)sheet;	// 0x32ae7f01
- (void)setSharedFormulaIndex:(unsigned)index forRowCol:(int)rowCol;	// 0x32d13b91
- (unsigned)sharedFormulaIndexForRowCol:(int)rowCol;	// 0x32d13b79
- (id)workbook;	// 0x32c33fa9
- (XlBinaryReader *)xlReader;	// 0x32ae80d9
@end

