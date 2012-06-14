/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXTable : NSObject {
}
+ (void)cacheTableStylesInPart:(id)part cache:(id)cache;	// 0x3451f121
+ (id)readCellBorderStyle:(xmlNode *)style drawingState:(id)state;	// 0x34524699
+ (void)readCellFromXmlNode:(xmlNode *)xmlNode toCell:(id)cell drawingState:(id)state;	// 0x3454df1d
+ (id)readCellPropertiesFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x3454e151
+ (id)readCellStyle:(xmlNode *)style drawingState:(id)state;	// 0x345245c9
+ (id)readDefaultTableStyleWithDrawingState:(id)drawingState;	// 0x3452341d
+ (id)readFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x3454d5c9
+ (void)readGridFromXmlNode:(xmlNode *)xmlNode toGrid:(id)grid;	// 0x3454dadd
+ (int)readOnOffFlag:(id)flag;	// 0x34525491
+ (id)readPartStyle:(xmlNode *)style drawingState:(id)state;	// 0x345244e1
+ (void)readPropertiesFromXmlNode:(xmlNode *)xmlNode toProperties:(id)properties drawingState:(id)state;	// 0x3454d705
+ (void)readRowFromXmlNode:(xmlNode *)xmlNode toRow:(id)row drawingState:(id)state;	// 0x3454dd4d
+ (void)readRowsFromTableXmlNode:(xmlNode *)tableXmlNode toTable:(id)table drawingState:(id)state;	// 0x3454dbf9
+ (id)readTableStyle:(xmlNode *)style drawingState:(id)state;	// 0x345240d1
+ (id)readTextStyle:(xmlNode *)style drawingState:(id)state;	// 0x34524cd5
+ (id)readThemableEffectsFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x34562c3d
+ (id)readThemableFillFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x34524b1d
+ (id)readThemableStrokeFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x34524841
@end
