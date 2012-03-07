/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, SFUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject {
@private
	SFUNoCopyDictionary *mFontTable;	// 4 = 0x4
	NSMutableArray *mFontsInOrderOfInsertion;	// 8 = 0x8
}
- (id)init;	// 0x34c99cf5
- (void)clear;	// 0x34ca097d
- (int)count;	// 0x34e0af79
- (id)createFontWithName:(id)name;	// 0x34c99ead
- (void)dealloc;	// 0x34c20725
- (id)fontWithName:(id)name;	// 0x34c9a8cd
- (id)fontWithName:(id)name create:(BOOL)create;	// 0x34c99e61
- (id)fonts;	// 0x34e0af59
@end
