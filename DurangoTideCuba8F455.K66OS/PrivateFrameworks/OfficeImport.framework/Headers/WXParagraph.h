/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXParagraph : NSObject {
}
+ (void)readAnnotationFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x32d1bc21
+ (void)readFrom:(xmlNode *)from baseStyle:(id)style to:(id)to state:(id)state;	// 0x32c5aaa1
+ (void)readFromString:(id)string to:(id)to;	// 0x32c60595
+ (void)readHyperlinkFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x32c619d5
+ (void)readRunsFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x32c5ae7d
+ (void)readRunsTo:(id)to state:(id)state;	// 0x32c5ad59
+ (void)readSimpleFieldFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x32c605cd
+ (void)readTrackingFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x32d1bcc9
@end

