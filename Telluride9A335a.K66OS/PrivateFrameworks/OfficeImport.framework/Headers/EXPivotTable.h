/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXPivotTable : NSObject {
}
+ (int)edPivotAreaTypeFrom:(id)from;	// 0x3537a6b1
+ (int)edPivotConditionalFormatScopeFrom:(id)from;	// 0x3537a645
+ (int)edPivotConditionalFormatTypeFrom:(id)from;	// 0x3537a5bd
+ (int)edPivotDatFieldFormatFrom:(id)from;	// 0x35332451
+ (int)edPivotFieldAxisFrom:(id)from;	// 0x353315f9
+ (int)edPivotItemTypeFrom:(id)from;	// 0x35331ab5
+ (id)edPivotTableFromXmlPivotTableElement:(xmlNode *)xmlPivotTableElement state:(id)state;	// 0x3532fdf5
+ (void)readConditionalFormatsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x3533257d
+ (void)readDataFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x35332149
+ (void)readFieldItemsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x353316f5
+ (void)readFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x35331c89
+ (void)readItemsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x35331d55
+ (void)readLocationFrom:(xmlNode *)from toPivotTable:(id)pivotTable;	// 0x35330da1
+ (void)readPageFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x35332019
+ (void)readPivotAreaReferencesFrom:(xmlNode *)from toCollection:(id)collection;	// 0x3537a76d
+ (void)readPivotAreasFrom:(xmlNode *)from toCollection:(id)collection;	// 0x3533272d
+ (void)readPivotFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x353311d9
+ (void)readStyleInfoFrom:(xmlNode *)from toPivotTable:(id)pivotTable;	// 0x35330f99
@end

