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
- (id)initWithReaderState:(id)readerState;	// 0x344bb5b5
- (void)dealloc;	// 0x343bcdcd
- (id)edSheet;	// 0x343a1d55
- (unsigned)nextChartIndex;	// 0x344fea31
- (id)readerState;	// 0x3439dedd
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x343b1181
- (id)resources;	// 0x343a3dfd
- (void)setEDSheet:(id)sheet;	// 0x3439df01
- (void)setSharedFormulaIndex:(unsigned)index forRowCol:(int)rowCol;	// 0x345c9b91
- (unsigned)sharedFormulaIndexForRowCol:(int)rowCol;	// 0x345c9b79
- (id)workbook;	// 0x344e9fa9
- (XlBinaryReader *)xlReader;	// 0x3439e0d9
@end

