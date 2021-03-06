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
+ (id)presetColorEnumMap;	// 0x33a48d69
+ (id)readColorFromNode:(xmlNode *)node;	// 0x33a2fa45
+ (id)readColorFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x33a2f9f5
+ (id)readHslColorFromXmlNode:(xmlNode *)xmlNode;	// 0x33bab335
+ (id)readPresetColorFromAttribute:(id)attribute;	// 0x33a4866d
+ (id)readPresetColorFromXmlNode:(xmlNode *)xmlNode;	// 0x33a8fe39
+ (id)readSRgbColorFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute;	// 0x33a2fe5d
+ (id)readScRgbColorFromXmlNode:(xmlNode *)xmlNode;	// 0x33ab27f1
+ (id)readSchemeColorFromXmlNode:(xmlNode *)xmlNode;	// 0x33a304dd
+ (id)readSystemColorFromAttribute:(id)attribute;	// 0x33a2fcc1
+ (id)readSystemColorFromXmlNode:(xmlNode *)xmlNode;	// 0x33a2fbcd
+ (id)schemeColorEnumMap;	// 0x33a30595
+ (id)systemColorEnumMap;	// 0x33a2fd71
@end

