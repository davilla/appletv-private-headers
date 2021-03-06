/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, WDDocument, WDListDefinition;

__attribute__((visibility("hidden")))
@interface WDList : NSObject {
@private
	NSMutableArray *mLevelOverrides;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	int mIndex;	// 12 = 0xc
	WDListDefinition *mListDefinition;	// 16 = 0x10
}
@property(assign) int index;	// G=0x3576e685; S=0x3561bc99; converted property
- (id)initWithDocument:(id)document listDefinition:(id)definition;	// 0x3561bc05
- (id)addLevelOverride;	// 0x356359f1
- (void)dealloc;	// 0x355839ed
- (id)document;	// 0x35635aad
// converted property getter: - (int)index;	// 0x3576e685
- (id)levelOverrideAt:(int)at;	// 0x3576e6b5
- (int)levelOverrideCount;	// 0x3576e695
- (id)levelOverrides;	// 0x3576e675
- (id)listDefinition;	// 0x355820b9
- (int)listId;	// 0x3576e6d9
// converted property setter: - (void)setIndex:(int)index;	// 0x3561bc99
@end

