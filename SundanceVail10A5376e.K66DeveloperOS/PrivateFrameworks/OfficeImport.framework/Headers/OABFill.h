/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OABFill : NSObject {
}
+ (void)addStopsFromArray:(const OABGradientStop *)array stopCount:(int)count inverted:(BOOL)inverted startPos:(float)pos endPos:(float)pos5 toGradientFill:(id)gradientFill fillPropertiesManager:(id)manager;	// 0x36f7fd2d
+ (id)readFillFromFillPropertiesManager:(id)fillPropertiesManager colorPalette:(id)palette;	// 0x36f16651
+ (void)readGradientFill:(id)fill fromFillPropertiesManager:(id)fillPropertiesManager colorPalette:(id)palette;	// 0x36f7f4b9
+ (void)readImageFill:(id)fill fromFillPropertiesManager:(id)fillPropertiesManager colorPalette:(id)palette;	// 0x36f79db1
+ (void)writeFill:(id)fill toFill:(EshFill *)fill2 state:(id)state;	// 0x371365c9
@end

