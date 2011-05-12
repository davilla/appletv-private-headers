/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXPivotTable : NSObject {
}
+ (int)edPivotAreaTypeFrom:(id)from;	// 0x345ae479
+ (int)edPivotConditionalFormatScopeFrom:(id)from;	// 0x345ae529
+ (int)edPivotConditionalFormatTypeFrom:(id)from;	// 0x345ae58d
+ (int)edPivotDatFieldFormatFrom:(id)from;	// 0x345ae60d
+ (int)edPivotFieldAxisFrom:(id)from;	// 0x345ae711
+ (int)edPivotItemTypeFrom:(id)from;	// 0x345ae775
+ (id)edPivotTableFromXmlPivotTableElement:(xmlNode *)xmlPivotTableElement state:(id)state;	// 0x345aebd9
+ (void)readConditionalFormatsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x345afbb1
+ (void)readDataFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x345afd4d
+ (void)readFieldItemsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x345aff15
+ (void)readFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x345b061d
+ (void)readItemsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x345b046d
+ (void)readLocationFrom:(xmlNode *)from toPivotTable:(id)pivotTable;	// 0x345aea85
+ (void)readPageFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x345af6b9
+ (void)readPivotAreaReferencesFrom:(xmlNode *)from toCollection:(id)collection;	// 0x345af7e1
+ (void)readPivotAreasFrom:(xmlNode *)from toCollection:(id)collection;	// 0x345af98d
+ (void)readPivotFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x345b0181
+ (void)readStyleInfoFrom:(xmlNode *)from toPivotTable:(id)pivotTable;	// 0x345ae915
@end

