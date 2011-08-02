/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WXOfficeArt : NSObject {
}
+ (void)initialize;	// 0x34511a99
+ (void)readClientData:(xmlNode *)data state:(id)state to:(id)to;	// 0x345143f1
+ (void)readFrom:(xmlNode *)from parentRElement:(xmlNode *)element parentParagraph:(id)paragraph state:(id)state to:(id)to;	// 0x34511b6d
+ (void)readOAX:(xmlNode *)oax parentRElement:(xmlNode *)element parentParagraph:(id)paragraph state:(id)state to:(id)to;	// 0x34511f01
+ (void)readPosition:(xmlNode *)position state:(id)state to:(id)to isHorizontal:(bool)horizontal;	// 0x34514911
+ (void)readVml:(xmlNode *)vml parentRElement:(xmlNode *)element parentParagraph:(id)paragraph state:(id)state to:(id)to;	// 0x34518089
+ (void)readWrap:(xmlNode *)wrap state:(id)state to:(id)to;	// 0x34514cbd
+ (void)readWrapDistance:(xmlNode *)distance parentElement:(xmlNode *)element state:(id)state to:(id)to;	// 0x3455dcf9
@end
