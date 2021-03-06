/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXColor : NSObject {
}
+ (id)presetColorEnumMap;	// 0x31c77689
+ (id)readColorFromNode:(xmlNode *)node;	// 0x31c5e365
+ (id)readColorFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x31c5e315
+ (id)readHslColorFromXmlNode:(xmlNode *)xmlNode;	// 0x31dd9c55
+ (id)readPresetColorFromAttribute:(id)attribute;	// 0x31c76f8d
+ (id)readPresetColorFromXmlNode:(xmlNode *)xmlNode;	// 0x31cbe759
+ (id)readSRgbColorFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute;	// 0x31c5e77d
+ (id)readScRgbColorFromXmlNode:(xmlNode *)xmlNode;	// 0x31ce1111
+ (id)readSchemeColorFromXmlNode:(xmlNode *)xmlNode;	// 0x31c5edfd
+ (id)readSystemColorFromAttribute:(id)attribute;	// 0x31c5e5e1
+ (id)readSystemColorFromXmlNode:(xmlNode *)xmlNode;	// 0x31c5e4ed
+ (id)schemeColorEnumMap;	// 0x31c5eeb5
+ (id)systemColorEnumMap;	// 0x31c5e691
@end

