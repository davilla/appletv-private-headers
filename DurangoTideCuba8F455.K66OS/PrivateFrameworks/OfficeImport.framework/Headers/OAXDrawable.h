/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OAXDrawable : NSObject {
}
+ (id)readDrawableFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace drawingState:(id)state;	// 0x32c739f5
+ (id)readDrawablesFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace drawingState:(id)state;	// 0x32c7397d
+ (void)readNonVisualPropertiesFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace toDrawable:(id)drawable drawingState:(id)state;	// 0x32c5c5ed
@end

