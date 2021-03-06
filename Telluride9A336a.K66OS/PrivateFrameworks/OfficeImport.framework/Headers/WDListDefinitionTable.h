/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDListDefinition, WDDocument, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDListDefinitionTable : NSObject {
@private
	NSMutableArray *mListDefinitions;	// 4 = 0x4
	CFDictionaryRef mListDefinitionMap;	// 8 = 0x8
	unsigned mNextIdIndex;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDListDefinition *mLastKnownGoodListDefinition;	// 20 = 0x14
}
- (id)initWithDocument:(id)document;	// 0x34c9fd85
- (id)addDefinition;	// 0x34e0b77d
- (id)addDefinition:(int)definition;	// 0x34cb7dbd
- (void)dealloc;	// 0x34c207e5
- (id)definitionAt:(int)at;	// 0x34e0b759
- (int)definitionCount;	// 0x34e0b739
- (id)definitionWithId:(int)anId;	// 0x34cb8b21
- (id)document;	// 0x34cb7f51
- (int)nextId;	// 0x34e0b7ad
- (void)setLastKnowGoodListDefinition:(id)definition;	// 0x34cb7f01
@end

