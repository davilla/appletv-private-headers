/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXCell : NSObject {
}
+ (bool)edBoolFromXmlBoolString:(id)xmlBoolString;	// 0x3292fa2d
+ (void)edCellFromXmlCellElement:(xmlNode *)xmlCellElement edRowInfo:(EDRowInfo **)info edRowBlock:(id)block edRowBlocks:(id)blocks state:(id)state;	// 0x328dc765
+ (int)edCellTypeFromXmlCellElement:(xmlNode *)xmlCellElement stringIndex:(bool *)index;	// 0x328dca25
+ (int)edErrorFromXmlErrorString:(id)xmlErrorString;	// 0x3292c36d
@end

