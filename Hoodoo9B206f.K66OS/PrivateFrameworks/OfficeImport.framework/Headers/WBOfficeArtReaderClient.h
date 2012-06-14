/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"


__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (bool)allowOverlap:(EshContentProperties *)overlap;	// 0x344ad211
+ (bool)behindText:(EshContentProperties *)text;	// 0x344ad255
+ (BOOL)escherIsFullySupported;	// 0x344ad6a9
+ (int)horizontalPosition:(EshContentProperties *)position;	// 0x344aced9
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x345338d9
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x344ac8a9
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x34610069
+ (void)readFrom:(EshContentProperties *)from to:(id)to;	// 0x344acd05
+ (int)relativeHorizontalPosition:(EshContentProperties *)position;	// 0x344acf45
+ (int)relativeVerticalPosition:(EshContentProperties *)position;	// 0x344ad011
+ (BOOL)tablesAreAllowed;	// 0x34533835
+ (int)verticalPosition:(EshContentProperties *)position;	// 0x344acfa5
+ (double)wrapDistanceBottom:(EshContentProperties *)bottom;	// 0x344ad1ad
+ (double)wrapDistanceLeft:(EshContentProperties *)left;	// 0x344ad071
+ (double)wrapDistanceRight:(EshContentProperties *)right;	// 0x344ad141
+ (double)wrapDistanceTop:(EshContentProperties *)top;	// 0x344ad0dd
@end
