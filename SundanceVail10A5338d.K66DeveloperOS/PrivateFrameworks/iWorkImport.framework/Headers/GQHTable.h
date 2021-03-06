/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQTableGenerator.h"
#import "GQHGraphicStyle.h"
#import "iWorkImport-Structs.h"


@interface GQHTable : GQHGraphicStyle <GQTableGenerator> {
}
+ (void)addMissingCellWithRowIndex:(unsigned short)rowIndex columnIndex:(unsigned short)index state:(id)state;	// 0x350a3c4d
+ (void)addMissingCellsUpToRowIndex:(unsigned short)rowIndex columnIndex:(unsigned short)index state:(id)state;	// 0x350a3fd9
+ (int)beginCells:(id)cells state:(id)state;	// 0x350a4a31
+ (void)beginRowWithIndex:(unsigned short)index state:(id)state;	// 0x350a3a89
+ (int)beginTable:(id)table state:(id)state;	// 0x350a4271
+ (CFStringRef)createTableAttachmentIdWithNumber:(long)number;	// 0x350a5f5d
+ (int)endCells:(id)cells state:(id)state;	// 0x350a50c9
+ (int)endTable:(id)table state:(id)state;	// 0x350a43a9
+ (void)getVectorStylesForRowIndex:(unsigned short)rowIndex rowSpan:(unsigned short)span columnIndex:(unsigned short)index columnSpan:(unsigned short)span4 vectorStyles:(id *)styles state:(id)state;	// 0x350a5b45
+ (int)handleCell:(id)cell state:(id)state;	// 0x350a50cd
+ (id)mapBaseFillStyleForRowIndex:(unsigned short)rowIndex columnIndex:(unsigned short)index state:(id)state isGroupingCell:(BOOL)cell;	// 0x350a5431
+ (int)mapCellContent:(id)content xml:(id)xml state:(id)state;	// 0x350a33d1
+ (void)mapCellStyle:(id)style rowIndex:(unsigned short)index rowSpan:(unsigned short)span columnIndex:(unsigned short)index4 columnSpan:(unsigned short)span5 state:(id)state cell:(id)cell level:(unsigned short)level;	// 0x350a5559
+ (void)mapVectorStyles:(id *)styles toCellStyle:(id)cellStyle state:(id)state;	// 0x350a5c59
+ (const char *)name;	// 0x350a5425
+ (unsigned short)resolveGroupLevel:(id)level model:(id)model columnIndex:(int)index tableState:(id)state;	// 0x350a5d39
+ (void)splitTable:(id)table;	// 0x350a5dd5
+ (void)startTableWithTableAnchor:(CFStringRef)tableAnchor tableHeight:(float)height state:(id)state;	// 0x350a4575
@end

