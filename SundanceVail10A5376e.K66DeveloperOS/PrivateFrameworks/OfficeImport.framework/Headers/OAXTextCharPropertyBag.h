/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXTextCharPropertyBag : NSObject {
}
+ (void)readCharacterProperties:(xmlNode *)properties characterProperties:(id)properties2 drawingState:(id)state;	// 0x37031e91
+ (void)readFont:(xmlNode *)font characterProperties:(id)properties;	// 0x37032515
+ (void)readFormatting:(xmlNode *)formatting characterProperties:(id)properties drawingState:(id)state;	// 0x37153431
+ (void)readUnderlineFill:(xmlNode *)fill underline:(id)underline drawingState:(id)state;	// 0x37153311
+ (void)readUnderlineType:(id)type underline:(id)underline;	// 0x37057425
@end

