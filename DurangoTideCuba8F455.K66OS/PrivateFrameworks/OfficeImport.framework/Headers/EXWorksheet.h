/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXWorksheet : NSObject {
}
+ (id)edSheetWithState:(id)state;	// 0x32c6caf5
+ (void)readColumnInfosFrom:(xmlNode *)from state:(id)state;	// 0x32c9525d
+ (void)readCommentTextFrom:(id)from;	// 0x32c6d8a9
+ (void)readConditionalFormattingsFrom:(xmlNode *)from state:(id)state;	// 0x32cfbc79
+ (void)readDataValidationsFrom:(xmlNode *)from state:(id)state;	// 0x32cbcc99
+ (bool)readDistinctSheetElementsFrom:(xmlTextReader *)from state:(id)state;	// 0x32c6e07d
+ (void)readHyperlinksFrom:(xmlNode *)from state:(id)state;	// 0x32cfbcdd
+ (void)readOleObjectsFrom:(xmlNode *)from state:(id)state;	// 0x32cfbd99
+ (void)readOtherSheetComponentsWithState:(id)state;	// 0x32c6d87d
+ (void)readPivotTables:(id)tables;	// 0x32c6dbe9
+ (void)readTables:(id)tables;	// 0x32c6ce6d
+ (void)readWorksheetFormatPropertiesFrom:(xmlNode *)from state:(id)state;	// 0x32c6e671
+ (void)readWorksheetViewsFrom:(xmlNode *)from state:(id)state;	// 0x32c6e4dd
+ (void)setupProcessors:(id)processors;	// 0x32c6cb79
@end

