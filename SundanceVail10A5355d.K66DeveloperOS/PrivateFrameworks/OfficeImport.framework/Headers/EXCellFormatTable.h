/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXCellFormatTable : NSObject {
}
+ (void)readCellFormatsFrom:(xmlNode *)from cellStyleXfsOffset:(unsigned)offset isStyle:(bool)style state:(id)state;	// 0x31c8d5d5
+ (void)readFromCellStyleXfsElement:(xmlNode *)cellStyleXfsElement state:(id)state;	// 0x31c8de71
+ (void)readFromCellStylesElement:(xmlNode *)cellStylesElement state:(id)state;	// 0x31c8de95
+ (void)readFromCellXfsElement:(xmlNode *)cellXfsElement state:(id)state;	// 0x31c8d505
@end

