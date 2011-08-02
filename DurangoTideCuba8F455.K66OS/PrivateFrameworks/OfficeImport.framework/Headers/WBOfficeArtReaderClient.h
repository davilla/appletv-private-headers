/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABReaderClient.h"
#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (bool)allowOverlap:(EshContentProperties *)overlap;	// 0x32c104f5
+ (bool)behindText:(EshContentProperties *)text;	// 0x32d2e795
+ (BOOL)escherIsFullySupported;	// 0x32c108ed
+ (int)horizontalPosition:(EshContentProperties *)position;	// 0x32c10205
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x32c86379
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x32c0fcb5
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x32d2e791
+ (void)readFrom:(EshContentProperties *)from to:(id)to;	// 0x32c10085
+ (int)relativeHorizontalPosition:(EshContentProperties *)position;	// 0x32c10271
+ (int)relativeVerticalPosition:(EshContentProperties *)position;	// 0x32c1032d
+ (BOOL)tablesAreAllowed;	// 0x32c862e1
+ (int)verticalPosition:(EshContentProperties *)position;	// 0x32c102c1
+ (double)wrapDistanceBottom:(EshContentProperties *)bottom;	// 0x32c10499
+ (double)wrapDistanceLeft:(EshContentProperties *)left;	// 0x32c1037d
+ (double)wrapDistanceRight:(EshContentProperties *)right;	// 0x32c10439
+ (double)wrapDistanceTop:(EshContentProperties *)top;	// 0x32c103dd
@end

