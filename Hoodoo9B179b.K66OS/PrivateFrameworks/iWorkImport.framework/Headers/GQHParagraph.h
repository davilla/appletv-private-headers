/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQHParagraph : NSObject {
}
+ (id)getBulletStyle:(id)style level:(int)level;	// 0x3599a985
+ (int)handleBookmark:(id)bookmark state:(id)state;	// 0x3599a8d9
+ (int)handleInlineList:(id)list state:(id)state;	// 0x3599ac95
+ (int)handleLink:(id)link state:(id)state;	// 0x3599b259
+ (int)handleParagraph:(id)paragraph state:(id)state bulletStates:(CFDictionaryRef)states isMultiColumn:(BOOL)column;	// 0x3599a9b1
+ (void)mapBullet:(CFDictionaryRef)bullet state:(id)state;	// 0x3599c3dd
+ (int)mapParagraphStyle:(id)style paragraph:(id)paragraph state:(id)state bulletStates:(CFDictionaryRef)states isMultiColumn:(BOOL)column;	// 0x3599b455
+ (CFDictionaryRef)prepareBullet:(id)bullet paragraph:(id)paragraph style:(id)style state:(id)state bulletStates:(CFDictionaryRef)states showBullet:(BOOL)bullet6;	// 0x3599bcbd
+ (BOOL)retrieveFontSizeForFirstCharacter:(id)firstCharacter fontSize:(float *)size;	// 0x3599ab69
+ (BOOL)setupBulletStatesForParagraphStyle:(id)paragraphStyle paragraph:(id)paragraph state:(id)state bulletStates:(CFDictionaryRef)states;	// 0x3599b959
@end

