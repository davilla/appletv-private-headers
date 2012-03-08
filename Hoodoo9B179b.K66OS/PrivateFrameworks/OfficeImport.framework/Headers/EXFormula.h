/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXFormula : NSObject {
}
+ (void)applyArrayedFormula:(id)formula edReference:(id)reference edWorksheet:(id)worksheet state:(id)state;	// 0x329373a9
+ (void)applyArrayedFormulasToSheet:(id)sheet state:(id)state;	// 0x328dd185
+ (id)edFormulaFromXmlFormulaElement:(xmlNode *)xmlFormulaElement formulaClass:(Class)aClass state:(id)state;	// 0x329178c1
+ (id)edFormulaFromXmlFormulaElement:(xmlNode *)xmlFormulaElement state:(id)state;	// 0x329884e9
+ (id)edTokensForFormulaString:(id)formulaString formulaClass:(Class)aClass rowNumber:(int)number columnNumber:(int)number4 sheet:(id)sheet workbook:(id)workbook;	// 0x32917c3d
+ (id)edTokensForFormulaString:(id)formulaString sheet:(id)sheet workbook:(id)workbook;	// 0x32988531
+ (Class)formulaClassFromXmlFormulaElement:(xmlNode *)xmlFormulaElement state:(id)state;	// 0x3291c831
+ (id)readFrom:(xmlNode *)from formulaClass:(Class)aClass rowNumber:(int)number columnNumber:(int)number4 edCell:(EDCellHeader *)cell edRowBlocks:(id)blocks state:(id)state;	// 0x329178f1
+ (void)readFrom:(xmlNode *)from rowNumber:(int)number columnNumber:(int)number3 edCell:(EDCellHeader *)cell edRowBlocks:(id)blocks state:(id)state;	// 0x3291c7d5
@end
