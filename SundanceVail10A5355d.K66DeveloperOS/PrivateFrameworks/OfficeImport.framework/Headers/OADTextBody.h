/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTextBodyProperties, OADTextListStyle, NSMutableArray;

@interface OADTextBody : NSObject {
	OADTextBodyProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mParagraphs;	// 8 = 0x8
	OADTextListStyle *mTextListStyle;	// 12 = 0xc
}
@property(retain) id properties;	// G=0x31bed999; S=0x31dd65cd; converted property
- (id)init;	// 0x31beafe9
- (id)addParagraph;	// 0x31bec6d9
- (void)addParagraphsFromTextBody:(id)textBody;	// 0x31e73bd1
- (void)applyTextListStyle:(id)style;	// 0x31dd6629
- (void)dealloc;	// 0x31bed3ad
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x31cd998d
- (void)flattenProperties;	// 0x31dd6735
- (BOOL)isEmpty;	// 0x31c030d1
- (id)overrideTextListStyle;	// 0x31bf5691
- (id)paragraphAtIndex:(unsigned)index;	// 0x31bfeaad
- (unsigned)paragraphCount;	// 0x31bfea8d
- (id)plainText;	// 0x31ce6da9
// converted property getter: - (id)properties;	// 0x31bed999
- (void)removeAllParagraphs;	// 0x31dd6609
- (void)removeTrailingNewlines;	// 0x31dd66b5
- (void)removeUnnecessaryOverrides;	// 0x31befac9
- (void)setParentTextListStyle:(id)style;	// 0x31bee915
// converted property setter: - (void)setProperties:(id)properties;	// 0x31dd65cd
- (id)textListStyle;	// 0x31bf9485
@end
