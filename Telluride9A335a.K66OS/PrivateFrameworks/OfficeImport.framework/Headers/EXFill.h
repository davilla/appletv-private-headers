/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXFill : NSObject {
}
+ (id)edFillFromXmlFillElement:(xmlNode *)xmlFillElement differentialFill:(bool)fill state:(id)state;	// 0x352c90b1
+ (id)edFillFromXmlFillElement:(xmlNode *)xmlFillElement state:(id)state;	// 0x352c9091
+ (id)edGradientFillFromXmlElement:(xmlNode *)xmlElement state:(id)state;	// 0x3537a22d
+ (int)edGradientTypeFromXmlGradientTypeString:(id)xmlGradientTypeString state:(id)state;	// 0x3537a1dd
+ (id)edPatternFillFromXmlElement:(xmlNode *)xmlElement differentialFill:(bool)fill state:(id)state;	// 0x352c9199
+ (int)edPatternTypeFromXmlPatternTypeString:(id)xmlPatternTypeString;	// 0x352c9391
+ (id)edStopFromXmlGradientElement:(xmlNode *)xmlGradientElement state:(id)state;	// 0x3537a399
@end

