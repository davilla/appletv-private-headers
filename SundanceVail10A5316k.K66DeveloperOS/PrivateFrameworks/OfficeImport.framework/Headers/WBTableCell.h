/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBTableCell : NSObject {
}
+ (void)readFrom:(id)from textRun:(WrdTextRun *)run with:(WrdTableProperties *)with tracked:(WrdTableProperties *)tracked row:(id)row index:(int)index cell:(id)cell;	// 0x311519d5
+ (void)setParagraphProperties:(id)properties paragraphProperties:(WrdParagraphProperties *)properties2 for:(id)aFor;	// 0x3129231d
+ (void)writeCharacterProperties:(id)properties to:(id)to;	// 0x3129206d
+ (void)writeParagraphProperties:(id)properties to:(id)to;	// 0x31291e71
+ (void)writeText:(id)text to:(id)to;	// 0x31291cb9
@end
