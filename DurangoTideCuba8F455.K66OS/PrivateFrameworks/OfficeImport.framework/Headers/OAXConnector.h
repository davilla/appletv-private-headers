/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OAXConnector : NSObject {
}
+ (void)readConnectionFromParent:(xmlNode *)parent nodeName:(const char *)name connection:(id)connection;	// 0x32c7c0c5
+ (id)readFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace drawingState:(id)state;	// 0x32c7bf25
+ (void)readNonVisualConnectorProperties:(xmlNode *)properties inNamespace:(id)aNamespace connectorProperties:(id)properties3;	// 0x32c7c01d
@end
