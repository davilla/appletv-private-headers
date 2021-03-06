/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDSpecialCharacter : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	int mType;	// 12 = 0xc
}
@property(assign) int characterType;	// G=0x32d28b45; S=0x32c12191; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x32c11ef1
// converted property getter: - (int)characterType;	// 0x32d28b45
- (void)clearProperties;	// 0x32d28b55
- (void)dealloc;	// 0x32c141e9
- (id)properties;	// 0x32c12181
- (int)runType;	// 0x32c96a01
// converted property setter: - (void)setCharacterType:(int)type;	// 0x32c12191
@end

