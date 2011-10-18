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
@property(assign) int index;	// G=0x353b3685; S=0x35260c99; converted property
- (id)initWithDocument:(id)document listDefinition:(id)definition;	// 0x35260c05
- (id)addLevelOverride;	// 0x3527a9f1
- (void)dealloc;	// 0x351c89ed
- (id)document;	// 0x3527aaad
// converted property getter: - (int)index;	// 0x353b3685
- (id)levelOverrideAt:(int)at;	// 0x353b36b5
- (int)levelOverrideCount;	// 0x353b3695
- (id)levelOverrides;	// 0x353b3675
- (id)listDefinition;	// 0x351c70b9
- (int)listId;	// 0x353b36d9
// converted property setter: - (void)setIndex:(int)index;	// 0x35260c99
@end

