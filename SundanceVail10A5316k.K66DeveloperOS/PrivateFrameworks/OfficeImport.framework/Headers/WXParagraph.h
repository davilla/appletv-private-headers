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
+ (void)readAnnotationFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x312c1d09
+ (void)readFrom:(xmlNode *)from baseStyle:(id)style to:(id)to state:(id)state;	// 0x310eb55d
+ (void)readFromString:(id)string to:(id)to;	// 0x310f2355
+ (void)readHyperlinkFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x310f471d
+ (void)readRFrom:(xmlNode *)from to:(id)to targetRun:(id)run state:(id)state;	// 0x310ebf51
+ (void)readRunsFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to targetRun:(id)run state:(id)state;	// 0x310eba25
+ (void)readRunsTo:(id)to state:(id)state;	// 0x310eb88d
+ (void)readSimpleFieldFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x310f23b5
+ (void)readTrackingFrom:(xmlNode *)from paragraphNamespace:(xmlNs *)aNamespace to:(id)to state:(id)state;	// 0x312c1c09
@end

