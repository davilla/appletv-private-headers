/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDRevisionAuthorTable : NSObject {
@private
	NSMutableArray *mAuthors;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
}
- (id)initWithDocument:(id)document;	// 0x34481dc9
- (void)addAuthor:(id)author;	// 0x345dc9d9
- (int)authorAddLookup:(id)lookup;	// 0x345dc97d
- (id)authorAt:(int)at;	// 0x345dc9f9
- (int)authorCount;	// 0x345dcaa9
- (id)authors;	// 0x3448b085
- (void)dealloc;	// 0x3446d2e1
@end

