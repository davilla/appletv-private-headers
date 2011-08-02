/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSMutableString, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDCharacterRun : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	NSMutableString *mString;	// 12 = 0xc
	BOOL mBinaryWriterContentFlag;	// 16 = 0x10
}
@property(assign) BOOL binaryWriterContentFlag;	// G=0x345f44ed; S=0x345f44fd; converted property
@property(retain) id string;	// G=0x3446550d; S=0x3448fc11; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x3448f4b5
- (id)initWithParagraph:(id)paragraph string:(id)string;	// 0x345d6b71
- (void)appendString:(id)string;	// 0x345152bd
// converted property getter: - (BOOL)binaryWriterContentFlag;	// 0x345f44ed
- (void)clearProperties;	// 0x345d6bd1
- (void)clearString;	// 0x345d6ba9
- (void)copyPropertiesFrom:(id)from;	// 0x345d6b35
- (void)dealloc;	// 0x3446d5c5
- (BOOL)isEmpty;	// 0x345d6b0d
- (id)properties;	// 0x3446454d
- (void)removeLastCharacter:(unsigned short)character;	// 0x3448fd75
- (int)runType;	// 0x344639bd
// converted property setter: - (void)setBinaryWriterContentFlag:(BOOL)flag;	// 0x345f44fd
- (void)setPropertiesForDocument;	// 0x345d6bf9
// converted property setter: - (void)setString:(id)string;	// 0x3448fc11
// converted property getter: - (id)string;	// 0x3446550d
@end
