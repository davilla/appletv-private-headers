/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHXChart : NSObject {
}
+ (int)chdDisplayBlanksAsEnumFromXmlElement:(xmlNode *)xmlElement;	// 0x3455c525
+ (void)readChartFromXmlNode:(xmlNode *)xmlNode chart:(id)chart state:(id)state;	// 0x3455793d
+ (void)readDefaultTextPropertiesFromXmlNode:(xmlNode *)xmlNode chart:(id)chart state:(id)state;	// 0x34556f5d
+ (id)readFromState:(id)state;	// 0x34556cfd
@end
