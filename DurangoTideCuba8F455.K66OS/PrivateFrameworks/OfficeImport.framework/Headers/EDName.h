/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDFormula, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDName : NSObject {
@private
	unsigned mSheetIndex;	// 4 = 0x4
	EDString *mNameString;	// 8 = 0x8
	EDFormula *mFormula;	// 12 = 0xc
	TSUPointerKeyDictionary *mMaxWorksheetReferences;	// 16 = 0x10
}
@property(retain) id nameString;	// G=0x32cf3641; S=0x32c9f291; converted property
@property(assign) unsigned sheetIndex;	// G=0x32cf3661; S=0x32c9f319; converted property
- (id)init;	// 0x32c9f255
- (void)dealloc;	// 0x32ca6c1d
- (id)formula;	// 0x32cf3651
- (unsigned)hash;	// 0x32cf3671
- (BOOL)isEqual:(id)equal;	// 0x32cf36e9
- (BOOL)isEqualToEDName:(id)edname;	// 0x32cf379d
- (BOOL)isEqualToString:(id)string;	// 0x32cf3779
- (id)maxWorksheetReferences;	// 0x32cf369d
// converted property getter: - (id)nameString;	// 0x32cf3641
- (void)setFormula:(id)formula workbook:(id)workbook;	// 0x32c9f3a9
// converted property setter: - (void)setNameString:(id)string;	// 0x32c9f291
// converted property setter: - (void)setSheetIndex:(unsigned)index;	// 0x32c9f319
// converted property getter: - (unsigned)sheetIndex;	// 0x32cf3661
@end

